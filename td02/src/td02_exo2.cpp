#include <iostream>

int main()
{
    float valeur1, valeur2, valeur3;
    std::cout << "Première valeur : ";
    std::cin >> valeur1;
    std::cout << "Deuxième valeur : ";
    std::cin >> valeur2;
    std::cout << "Troisième valeur : ";
    std::cin >> valeur3;

    float result1 { 0.f };
    float result2 { 0.f };
    result1 = (valeur1 + valeur2 + valeur3);
    result2 = result1/3;

    std::cout << "Somme : "<< result1 << " Moyenne : " << result2 << std::endl;

}