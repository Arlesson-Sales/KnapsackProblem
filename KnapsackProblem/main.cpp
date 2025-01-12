#include <iostream>
#include "genetic.h"

using std::cout;
using std::endl;
using std::cin;

int main(int argc, char** argv)
{
	unsigned short solutions[6] = { 60504, 25000, 12329, 38054, 1259, 732 };
	
	//Exibição do cabeçalho.
	cout << "-------------------------------" << endl;
	cout << " Resultado da avaliacao " << endl;
	cout << "-------------------------------" << endl;

	//Validando todas as solução inicias.
	for (int index = 0; index < 6; index++)
	{
		bool is_positive = verifySolution(solutions[index]);
		cout << (is_positive ? "- OK " : "- X ") << endl;
	}
	cout << "-------------------------------" << endl;

	//Gerando novas soluções.
	unsigned short new_solutions[4];

	new_solutions[0] = singlePointCrossing(solutions[0], new_solutions[1]);
	new_solutions[1] = arithmeticCrossing(solutions[2], solutions[3]);
	new_solutions[2] = simpleMutation(solutions[4], 9);
	new_solutions[3] = doubleMutation(solutions[5], 3, 12);

	//Exibindo as nova soluções
	for (int index = 0; index < 4; index++)
	{
		bool is_positive = verifySolution(new_solutions[index]);
		cout << (is_positive ? "- OK" : "- X") << endl;
	}
	cout << "-------------------------------" << endl;
	return 0;
}