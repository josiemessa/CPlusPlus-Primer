#include <iostream>
#include "Sales_item.h"

// Exercise 1.23: Write a program that reads several transactions and counts
// how many transactions occur for each ISBN
int main() {
	Sales_item initBook, currVal;
	int count = 1;

	std::cin >> initBook;
	while (std::cin >> currVal) {
		if (currVal.isbn() == initBook.isbn())
			count++;
		else {
			/* This block feels repeated
			 not sure if could put elsewhere to re-use? */

			// No more books with this ISBN so output the current count
			if (count == 1)
				// grammar
				std::cout << "--->There is " << count << " book with ISBN"
				<< initBook.isbn() << std::endl;
			else {
				std::cout << "--->There are " << count << " books with ISBN"
					<< initBook.isbn() << std::endl;
			}
			// reset for new ISBN
			initBook = currVal;
			count = 1;
		}
	}
	std::cout << "--->There are " << count << " books with ISBN"
		<< initBook.isbn();
}