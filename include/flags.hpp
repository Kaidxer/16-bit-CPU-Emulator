#pragma once

#include <cstdint>

struct Flags
{
    bool zero = false;
    bool carry = false;
    bool negative = false;
    bool overflow = false;

    void clear()
    {
        zero = false;
        carry = false;
        negative = false;
        overflow = false;
    }
};