#include <iostream>

int main()
{
    int number { 11 };
    std::cout << number << std::endl;
    std::cout << number/2 << std::endl;
    std::cout << static_cast<float>(number/2.0f) << std::endl;
}