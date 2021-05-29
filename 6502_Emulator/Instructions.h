#pragma once

// Define instruction opcodes
enum INS
{
	// Load from registers
	LDA_IMM = 0xA9, // LDA in immediate mode
	LDA_ZP = 0xA5,
	LDA_ZPX = 0xB5,
	LDA_ABS = 0xAD,
	LDA_ABSX = 0xBD,
	LDA_ABSY = 0xB9,
	LDA_INDX = 0xA1,
	LDA_INDY = 0xB1,

	LDX_IMM = 0xA2, // LDX in immediate mode
	LDX_ZP = 0xA6,
	LDX_ZPY = 0xB6,
	LDX_ABS = 0xAE,
	LDX_ABSY = 0xBE,

	LDY_IMM = 0xA0, // LDY in immediate mode
	LDY_ZP = 0xA4,
	LDY_ZPX = 0xB4,
	LDY_ABS = 0xAC,
	LDY_ABSX = 0xBC,

	// Store from register to memory
	STA_ZP = 0x85,
	STX_ZP = 0x86,
	STY_ZP = 0x84,

	// Incrememnt registers
	INX = 0xE8,
	INY = 0xC8,

	// Jump
	JMP_ABS = 0x4C,
	JMP_IND = 0x6C,

	// No Operation
	NOP = 0xEA,

	// Add and subtract
	ABC_IMM = 0x69,
	SBC_IMM = 0xE9

};