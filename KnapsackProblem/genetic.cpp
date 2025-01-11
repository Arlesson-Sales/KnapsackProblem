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