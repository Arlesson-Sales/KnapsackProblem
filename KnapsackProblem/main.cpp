#include <iostream>
#include "binary.h"

using std::cout;
using std::endl;

int main(int argc, char** argv)
{
	unsigned short value_a, value_b, value_c;

	value_a = 12450;
	value_b = getLowerBits(value_a);
	value_c = getUpperBits(value_a);

	cout << "A : " << value_a << endl;
	cout << "B : " << value_b << endl;
	cout << "C : " << value_c << endl;
	cout << "Result : " << (value_b | value_c) << endl;

	return 0;
}