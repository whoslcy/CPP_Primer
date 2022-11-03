#include <iostream>
#include "Sales_item.h"
int main(int argc, char const *argv[])
{
    Sales_item total;
    std::cin >> total;
    for (Sales_item item; std::cin >> item; ){
        total += item;
    }
    std::cout << total << std::endl;
    return 0;
}
