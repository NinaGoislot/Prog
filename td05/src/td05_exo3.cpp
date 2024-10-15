#include <iostream>
#include <vector>
#include <array>

int fibonacci(int const& n);
int n{};
int result{};

int main()
{
    while (n < 1 || std::cin.fail() == true)
    {
        std::cout << "Saisi un entier positif :" << std::endl;
        std::cin >> n;
    }

    result = fibonacci(n);

    std::cout << "Le "<< n << " terme est " << result << std::endl;

    return 0;
}

//Recursive
int fibonacci(int const& n) {
    if(n == 1) {
        return 0;
    }
    if(n ==2) {
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

//Itérative
// int fibonacci(int const& n) {
//     int a {};
//     int b {1};
//     int c {};
     
//     if(n == 1) {
//         return 0;
//     }
//     if(n == 2) {
//         std::cout << 0 << std::endl;
//         return 1;
//     }
//     std::cout << "0" << std::endl;
//     std::cout << "1" << std::endl;
//     for (int i = 2; i < n; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//         std::cout << c << std::endl;
//     }
    
//   return c;
// }