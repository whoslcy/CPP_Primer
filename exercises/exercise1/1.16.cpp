#include <iostream>
int main(){
    std::cout << "Please enter several numbers and press CTRL-D." << std::endl;
    std::cout << "I will print the sum of them." << std::endl;
    int val = 0;
    int sum = 0;
    while (std::cin >> val)
    {
        sum += val;
    }
    std::cout << "The sum is " << sum << "." << std::endl;
    return 0;
}