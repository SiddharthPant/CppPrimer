#include <iostream>
#include "Sales_item.h"
#include "Version_test.h"

int main() {
    // currItem is the number we're counting; we'll read new items into item
    Sales_item sum, item;

    // read first transaction into the sum and ensure that we have data to process
    if (std::cin >> sum) {
        while (std::cin >> item) { // read the remaining transactions
            if (item.isbn() == sum.isbn()) // if the isbns are the same
                //  add item to sum
                sum += item;
            else { // otherwise, print the transaction for the previous item
                std::cout << sum << std::endl;
                sum = item; // reset the sum to new item
            }
        } // while loop ends here
        // remember to print the transaction for the last item in the file
        std::cout << sum << std::endl;
    } // outermost if statement ends here
    return 0;
}