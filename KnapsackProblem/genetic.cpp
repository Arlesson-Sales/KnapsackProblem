#include <iostream>
#include "genetic.h"
#include "binary.h"
#define BIT_STRING_LENGTH 16
#define BAG_WEIGHT_LIMIT 20

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

bool verifySolution(unsigned short solution)
{
	int bag_weights[BIT_STRING_LENGTH] = { 1, 4, 2, 5, 4, 2, 1, 4, 3, 2, 1, 9, 4, 5, 3, 12 };
	int bag_values[BIT_STRING_LENGTH] = { 12, 4, 3, 10, 15, 20, 10, 2, 1, 1, 3, 15, 10, 8, 4, 4 };
	int total_weight = 0, total_value = 0;

	for (int index = 0; index < BIT_STRING_LENGTH; index++)
	{
		if (verifyBit(solution, index))
		{
			total_weight += bag_weights[index];
			total_value += bag_values[index];
		}
	}

	std::cout << "$" << total_value << " - " << total_weight << "Kg ";
	return total_weight <= BAG_WEIGHT_LIMIT;
}