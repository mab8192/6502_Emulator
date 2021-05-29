#pragma once

#include "types.h"

class Memory
{
private:
	static constexpr int MAX_MEM = 1024 * 64;
	Byte Data[MAX_MEM];

public:
	void Init();

	/** Read 1 byte of memory */
	Byte operator[](u16 addr) const;

	/** Write 1 byte of memory */
	Byte& operator[](u16 addr);
};

