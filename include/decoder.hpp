#pragma once

#include <cstdint>

class Decoder
{
public:

    static const char* decode(uint8_t opcode);
};