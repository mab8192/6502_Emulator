#include "Memory.h"

void Memory::Init()
{

}

Byte Memory::operator[](u16 addr) const
{
	return Data[addr];
}

Byte& Memory::operator[](u16 addr)
{
	return Data[addr];
}