#include <iostream>

void somme(int const& a, int const& b);
int nb1{};
int nb2{};

int main()
{
    std::cout << "Saisi un premier nombre entier :" << std::endl;
    std::cin >> nb1;
    std::cout << "Un autre :" << std::endl;
    std::cin >> nb2;

    somme(nb1,nb2);
  

    return 0;
}

void somme(int const& a, int const& b) {
    std::cout << a+b << std::endl;
}