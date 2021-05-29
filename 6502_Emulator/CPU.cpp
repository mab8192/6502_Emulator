#include "CPU.h"
#include <stdio.h>

void CPU::Reset()
{
	// Init registers to 0
	A = X = Y = 0;

	// Init program counter
	PC = 0xFFFC;

	// Init stack pointer
	SP = 0x01;

	// Init status flags to 0
	C = Z = I = D = B = V = N = 0;
}

Byte CPU::FetchByte(u16& Cycles, Memory& memory)
{
	Cycles--;
	return memory[PC++];
}

void CPU::Execute(u16 Cycles, Memory& memory)
{
	while (Cycles > 0)
	{
		Byte ins = FetchByte(Cycles, memory);
		Byte value;
		switch (ins)
		{
		case INS::LDA_IMM:
			value = FetchByte(Cycles, memory);
			A = value;
			Z = (A == 0);
			N = (A & 0b10000000);
			printf("Loaded value %d into Accumulator", value);
			break;
		default:
			printf("Unsupported instruction: %d", ins);
		}
	}
}