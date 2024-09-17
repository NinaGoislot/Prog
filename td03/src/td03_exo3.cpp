#include <iostream>

int main()
{
    //Déclaration des variables 
    int initialNumber {};

    //Demande du nombre entier
    std::cout << "Saisir un entier positif: ";
    std::cin >> initialNumber;

    while (initialNumber<0 || initialNumber==0) {
        std::cout << "Erreur. Il faut saisir un entier positif: ";
        std::cin >> initialNumber;
    }

    if (initialNumber%2 == 0) {
        std::cout << initialNumber << " est pair." << std::endl;
        std::cout << "Liste des nombres pairs positifs inferieurs : " << std::endl;
    } else {
        std::cout << initialNumber << " est impair." << std::endl;
        std::cout << "Liste des nombres impairs positifs inferieurs : " << std::endl;
    }
     for (int i = initialNumber - 2; i > 0; i -= 2) {
        std::cout << i << std::endl;
    }
    
}