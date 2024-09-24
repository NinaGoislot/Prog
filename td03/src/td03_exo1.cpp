#include <iostream>

int main()
{
    //Déclaration des variables 
    int number{};

    //Demande du nombre entier
    std::cout << "Saisir un entier : ";
    std::cin >> number;

    //Avec fonction ternaire

    std::string signeNumber {};

    signeNumber = number < 0 ? "negatif" : "positif";
    signeNumber = number == 0 ? "nul" : signeNumber;

    std::cout << number << " est " << signeNumber << std::endl;


    return 0;
}