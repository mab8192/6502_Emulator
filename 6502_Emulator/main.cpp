#include "CPU.h"
#include "Memory.h"

// Mostly followed video from Dave Poo
// https://www.youtube.com/watch?v=qJgsuQoy9bc&t=1821s

int main()
{
	Memory mem;
	CPU cpu;
	cpu.Reset();

	// Hard code some program in the memory module
	mem[0xFFFC] = INS::LDA_IMM;
	mem[0xFFFD] = 0x42;

	cpu.Execute(2, mem);
	return 0;
}