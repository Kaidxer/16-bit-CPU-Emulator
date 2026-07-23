#pragma once

#include <cstdint>

enum class Opcode : uint8_t
{
    NOP = 0x00,

    MOVI = 0x10,

    LOAD = 0x11,

    STORE = 0x12,

    ADD = 0x20,

    SUB = 0x21,

    MUL = 0x22,

    DIV = 0x23,

    INC = 0x24,

    DEC = 0x25,

    JMP = 0x30,

    JZ = 0x31,

    JNZ = 0x32,

    CALL = 0x40,

    RET = 0x41,

    PUSH = 0x50,

    POP = 0x51,

    HALT = 0xFF
};