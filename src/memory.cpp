#include "memory.hpp"

uint8_t Memory::read8(uint16_t address) const
{
    return ram[address];
}

uint16_t Memory::read16(uint16_t address) const
{
    return ram[address] |
           (ram[address+1] << 8);
}

void Memory::write8(uint16_t address,uint8_t value)
{
    ram[address]=value;
}

void Memory::write16(uint16_t address,uint16_t value)
{
    ram[address]=value & 0xFF;
    ram[address+1]=(value>>8)&0xFF;
}

void Memory::reset()
{
    ram.fill(0);
}