#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	char input;
	// read in one character at a time
	while (cin >> input) {
		// split the character up into it's multiple of 16
		// and the quotient of 16 to get the two hex characters
		int mult = input / 16;
		int	quot = input % 16;

		// convert into a char for output - anything over 9 should be A-F
		char mult_out, quot_out;
		if (mult > 9) {
			mult_out = mult + 55;
		}
		else {
			mult_out = mult + 48;
		}
		if (quot > 9) {
			quot_out = quot + 55;
		}
		else {
			 quot_out = quot + 48;
		}

		// Write final result to standard out
		cout << mult_out << quot_out << ' ';
	}
	cout << endl;
}