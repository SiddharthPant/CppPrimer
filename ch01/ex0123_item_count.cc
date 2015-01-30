#include <iostream>
#include "Sales_item.h"
#include "Version_test.h"

int main()
{
	// currItem is the number we're counting; we'll read new items into item
	Sales_item currItem, item;

	// read first number and ensure that we have data to process
	if (std::cin >> currItem) {        
		int cnt = 1;  // store the count for the current item we're processing
		while (std::cin >> item) { // read the remaining numbers 
			if (item.isbn() == currItem.isbn())   // if the isbn are the same
				++cnt;            // add 1 to cnt 
			else { // otherwise, print the count for the previous item
				std::cout << currItem.isbn() << " occurs " 
				          << cnt << " times" << std::endl;
				currItem = item;    // remember the new item
				cnt = 1;          // reset the counter
			}
		}  // while loop ends here
		// remember to print the count for the last item in the file
		std::cout << currItem.isbn() << " occurs " 
		          << cnt << " times" << std::endl;
	} // outermost if statement ends here
	return 0;
}
