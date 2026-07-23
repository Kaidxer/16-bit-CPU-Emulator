#include "alu.hpp"

uint16_t ALU::add(uint16_t a,uint16_t b){ return a+b; }

uint16_t ALU::sub(uint16_t a,uint16_t b){ return a-b; }

uint16_t ALU::mul(uint16_t a,uint16_t b){ return a*b; }

uint16_t ALU::div(uint16_t a,uint16_t b)
{
    if(b==0)
        return 0;

    return a/b;
}

uint16_t ALU::bit_and(uint16_t a,uint16_t b)
{
    return a & b;
}

uint16_t ALU::bit_or(uint16_t a,uint16_t b)
{
    return a | b;
}

uint16_t ALU::bit_xor(uint16_t a,uint16_t b)
{
    return a ^ b;
}

uint16_t ALU::bit_not(uint16_t a)
{
    return ~a;
}

uint16_t ALU::shl(uint16_t value,uint8_t amount)
{
    return value << amount;
}

uint16_t ALU::shr(uint16_t value,uint8_t amount)
{
    return value >> amount;
}