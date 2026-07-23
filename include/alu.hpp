#pragma once

#include <cstdint>

class ALU
{
public:

    uint16_t add(uint16_t a,uint16_t b);

    uint16_t sub(uint16_t a,uint16_t b);

    uint16_t mul(uint16_t a,uint16_t b);

    uint16_t div(uint16_t a,uint16_t b);

    uint16_t bit_and(uint16_t a,uint16_t b);

    uint16_t bit_or(uint16_t a,uint16_t b);

    uint16_t bit_xor(uint16_t a,uint16_t b);

    uint16_t bit_not(uint16_t a);

    uint16_t shl(uint16_t value,uint8_t amount);

    uint16_t shr(uint16_t value,uint8_t amount);
};