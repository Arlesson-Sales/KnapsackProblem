#include "genetic.h"
#include "binary.h"

unsigned short singlePointCrossing(unsigned short solution_a, unsigned short solution_b)
{
	unsigned short mask_one, mask_two;

	mask_one = getLowerBits(solution_a);
	mask_two = getUpperBits(solution_b);

	return binaryOR(solution_a, solution_b);
}

unsigned short arithmeticCrossing(unsigned short solution_a, unsigned short solution_b)
{
	return binaryAND(solution_a, solution_b);
}

unsigned short simpleMutation(unsigned short solution, int bit_index)
{
	if (verifyBit(solution, bit_index))
		return bitOff(solution, bit_index);
	else
		return bitOn(solution, bit_index);
}

unsigned short doubleMutation(unsigned short solution, int bit_index_a, int bit_index_b)
{
	unsigned short mutated_solution = simpleMutation(solution, bit_index_a);
	return simpleMutation(mutated_solution, bit_index_b);
}