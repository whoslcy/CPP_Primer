#include <iostream>
#include "Sales_item.h"
int main(int argc, char const *argv[])
{
    Sales_item currItem;
    if (std::cin >> currItem)
    {
        int cnt = 1;
        Sales_item valItem;
        while (std::cin >> valItem)
        {
            if (valItem.isbn() == currItem.isbn())
            {
                ++cnt;
            }
            else
            {
                std::cout << currItem.isbn() << " occurs " << cnt << " times " << std::endl;
                currItem = valItem;
                cnt = 1;
            }
        }
        std::cout << currItem.isbn() << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}
