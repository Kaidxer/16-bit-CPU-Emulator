#pragma once

#include "registers.hpp"
#include "memory.hpp"
#include "alu.hpp"

class CPU
{
public:

    CPU();

    void reset();

    void run();

    void step();

    bool isRunning() const;

    Registers registers;
    Memory memory;

private:

    ALU alu;

    bool running = true;

    uint8_t fetch8();

    uint16_t fetch16();

    void execute(uint8_t opcode);
};