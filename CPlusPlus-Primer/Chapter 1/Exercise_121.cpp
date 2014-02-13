
#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item book1, book2;

	// read in two inputs from cin and load into
	// book1, book2 respectively 
	std::cin >> book1 >> book2;
	if (book1.isbn() == book2.isbn())
		// write out their sum to cout - assume Sales_item impl
		// will catch any errors.
		std::cout << book1 + book2 << std::endl;
	else
		std::cout << "ISBN must be the same" << std::endl;
}