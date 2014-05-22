#include <iostream>
int main() {
	// Pre-defined variables
	int i = 3;
	int &r1 = i;
	double d = 1.3456;
	double &r2 = d;

	/* (a) r2 = 3.14159
	 * r2 is defined as a double
	 */
	r2 = 3.14159;
	std::cout << "(a) r2 is: " << r2 << std::endl; // 3.14159

	/* (b) r2 = r1
	 *	r1 is a reference to int, int can convert to double
	 */
	r2 = r1;
	std::cout << "(b) r2 is: " << r2 << std::endl; // 0

	/* (c) i = r2
	 * i is an int, whereas r2 is a double so precision lost
	 */
	d = 1.3456;
	double &r2 = d;
	i = r2;
	std::cout << "(c) i is: " << i << std::endl;

	/* (d) r1 = d
	 * r1 is an int, whereas d is a double
	 */
	r1 = d;
	std::cout << "(d) r1 is: " << r1 << std::endl;

}