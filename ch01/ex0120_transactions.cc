#include <iostream>
#include "Sales_item.h"
#include "Version_test.h"

int main() {
    Sales_item item;
    
    //  loop with input stream as check condition
    while (std::cin >> item) {
        // display the input transaction
        std::cout << item << std::endl;
    }
    return 0;
}
