#include <iostream>

int recursive(int const& n);
int n{};
int result{};

int main()
{
    while (n < 1 || std::cin.fail() == true)
    {
        std::cout << "Saisi un entier positif (inferieur à 13):" << std::endl;
        std::cin >> n;
        n = n > 12 ? 12 : n;
    }

    result = recursive(n);

    std::cout << "Le factoriel de "<< n << " est " << result << std::endl;

    return 0;
}

int recursive(int const& n) {
   if (n<=1) {
    return 1;
   } else {
    return n*recursive(n-1);
   }
}