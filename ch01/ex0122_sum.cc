#include <iostream>
#include "Sales_item.h"
#include "Version_test.h"

int main() {
    Sales_item item, sum;
    
    //  Check if instream is available
    if (std::cin >> item) {
        //  put first item in sum
        sum = item;
        //  loop with input stream as check condition
        while (std::cin >> item) {
            // add the item to the sum
            sum += item;
        }
        std::cout << sum << std::endl;  // display the sum
    }
    
    return 0;
}
