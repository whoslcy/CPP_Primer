#include <iostream>
#include <math.h>
int main(){
    int val_1 = 0;
    int val_2 = 0;
    std::cout << "Please enter two integers." << std::endl
              << "We will print each number in the range specified by these two integers." << std::endl
              << "First integer:" << std::endl;
    std::cin >> val_1;
    std::cout << "Second integer:" << std::endl;
    std::cin >> val_2;
    std::cout << "The result is as follows:" << std::endl;
    int i = val_1 < val_2 ? val_1 : val_2;
    while (i <= val_2)
    {
        std::cout << i << std::endl;
        ++i;
    }
    return 0;
}