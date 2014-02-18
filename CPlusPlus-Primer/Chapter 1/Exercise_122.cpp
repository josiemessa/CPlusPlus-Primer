#include <iostream>
#include "Sales_item.h"

// Exercise 1.22: Write a program that reads several transactions
// for the same ISBN. Write the sum of all the transactions
// that were read.
int main() {
	Sales_item initBook, total, currVal;
	// probably a good opporunity to do a do {} while {} loop here but
	// haven't seen it in the book yet!
	std::cin >> initBook;
	total = initBook;
	while (std::cin >> currVal) {
		if ( currVal.isbn() == initBook.isbn() )
			total += currVal;
	}
	std::cout << total;
}