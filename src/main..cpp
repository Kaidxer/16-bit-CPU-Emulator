#include "cpu.hpp"

int main()
{
    CPU cpu;

    cpu.memory.write8(0, 0x10); // MOVI
    cpu.memory.write8(1, 0x00); // R0
    cpu.memory.write16(2, 10);

    cpu.memory.write8(4, 0x10); // MOVI
    cpu.memory.write8(5, 0x01); // R1
    cpu.memory.write16(6, 20);

    cpu.memory.write8(8, 0x20); // ADD
    cpu.memory.write8(9, 0x00);
    cpu.memory.write8(10,0x01);

    cpu.memory.write8(11,0xFF); // HALT

    cpu.run();

    return 0;
}