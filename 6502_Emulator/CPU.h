#pragma once

#include "types.h"
#include "Memory.h"
#include "Instructions.h"


class CPU
{
private:
	Word PC; // Program Counter
	Byte SP; // Stack Pointer

	// Registers
	Byte A, X, Y;

	// Status flags
	Byte C : 1;
	Byte Z : 1;
	Byte I : 1;
	Byte D : 1;
	Byte B : 1;
	Byte V : 1;
	Byte N : 1;

public:
	void Reset();
	void Execute(u16 Cycles, Memory& memory);
	Byte FetchByte(u16& Cycles, Memory& memory);
};