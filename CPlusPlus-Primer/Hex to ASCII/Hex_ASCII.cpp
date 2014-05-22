#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main() {
	string input;
	while (cin >> input) {
		// separate out the two character hex representation into its 
		// components, then convert them from the ASCII chars to int representation
		// then knock down to actual ints, convert to decimal
		int mult_in = input[0];
		int mult;
		if (mult_in > 64) {
			mult = (mult_in - 54) * 16;
		}
		else if (mult_in > 47) {
			mult = (mult_in - 48) * 16;
		}
		int quot_in = input[1];
		int quot;
		if (quot_in > 64) {
			quot = quot_in - 55;
		}
		else if (quot_in > 47) {
			quot = quot_in - 48;
		}
		char output = mult + quot;
		cout << output;
	}
	cout << endl;
	
}