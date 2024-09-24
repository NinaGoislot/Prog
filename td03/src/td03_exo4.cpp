#include <iostream>

int main()
{
    //Déclaration des variables 
    int initialNumber {};
    bool isPositive {false};

    //Demande du nombre entier
    std::cout << "Saisir un age : ";
    std::cin >> initialNumber;

    while (initialNumber < 0 || initialNumber == 0 || std::cin.fail() == true) {
        std::cin.clear();
        std::cin.ignore(255, '\n'); 
        std::cout << "Erreur. Il faut saisir un nombre entier positif: ";
        std::cin >> initialNumber;
    }

    initialNumber > 18 ? std::cout << " Vous etes majeur." << std::endl : std::cout << " Vous etes mineur." << std::endl;
    
}