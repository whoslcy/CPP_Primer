#include <iostream>
#include "Sales_item.h"
int main(int argc, char const *argv[])
{
    for (Sales_item item; std::cin >> item; std::cout << item << std::endl); 
    return 0;
}
