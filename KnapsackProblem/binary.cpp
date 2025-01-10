#include "binary.h"

unsigned short bitOn(unsigned short bit_string, int index)
{
	unsigned short mask = 1 << index;
	return bit_string | mask;
}

unsigned short bitOff(unsigned short bit_string, int index)
{
	unsigned short mask = ~(1 << index);
	return bit_string & mask;
}