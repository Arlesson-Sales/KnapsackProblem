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

bool verifyBit(unsigned short bit_string, int index)
{
	unsigned short mask = 1 << index;
	return bit_string & mask ? true : false;
}

unsigned short binaryAND(unsigned short value_a, unsigned short value_b)
{
	return value_a & value_b;
}

unsigned short binaryOR(unsigned short value_a, unsigned short value_b)
{
	return value_a | value_b;
}

unsigned short getLowerBits(unsigned short bit_string)
{
	for (int index = 0; index <= 7; index++)
		bit_string = bitOff(bit_string, index);
	return bit_string;
}

unsigned short getUpperBits(unsigned short bit_string)
{
	for (int index = 8; index <= 15; index++)
		bit_string = bitOff(bit_string, index);
	return bit_string;
}