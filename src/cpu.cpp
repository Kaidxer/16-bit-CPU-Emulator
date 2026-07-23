#include "cpu.hpp"
#include "instruction.hpp"

#include <iostream>

CPU::CPU()
{
    reset();
}

void CPU::reset()
{
    registers = Registers{};
    memory.reset();

    registers.sp = 0xFFFE;
    registers.pc = 0;

    running = true;
}

bool CPU::isRunning() const
{
    return running;
}

uint8_t CPU::fetch8()
{
    return memory.read8(registers.pc++);
}

uint16_t CPU::fetch16()
{
    uint16_t value = memory.read16(registers.pc);
    registers.pc += 2;
    return value;
}

void CPU::step()
{
    uint8_t opcode = fetch8();
    execute(opcode);
}

void CPU::run()
{
    while(running)
    {
        step();
    }
}

void CPU::execute(uint8_t opcode)
{
    switch(static_cast<Opcode>(opcode))
    {
        case Opcode::NOP:
            break;

        case Opcode::MOVI:
        {
            uint8_t reg = fetch8();
            uint16_t value = fetch16();

            registers.gpr[reg] = value;
            break;
        }

        case Opcode::ADD:
        {
            uint8_t dst = fetch8();
            uint8_t src = fetch8();

            registers.gpr[dst] =
                alu.add(registers.gpr[dst],
                        registers.gpr[src]);

            break;
        }

        case Opcode::SUB:
        {
            uint8_t dst = fetch8();
            uint8_t src = fetch8();

            registers.gpr[dst] =
                alu.sub(registers.gpr[dst],
                        registers.gpr[src]);

            break;
        }

        case Opcode::HALT:
            running = false;
            break;

        default:
            std::cout
                << "Unknown opcode "
                << std::hex
                << int(opcode)
                << std::endl;

            running = false;
    }
}