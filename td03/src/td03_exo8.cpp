#include <iostream>

int main()
{
    //Déclaration des variables 
    int initialNumber {};
    int currentNumber {};
    int nextNumber {};
    int nbStep {};
    bool isEven {};

    //Demande du nombre entier
    std::cout << "Saisir un nombre entier : "<< std::endl;
    std::cin >> initialNumber;

    while (initialNumber < 0 || initialNumber == 0 || initialNumber == 1 || std::cin.fail() == true) {
        std::cin.clear();
        std::cin.ignore(255, '\n'); 
        std::cout << "Erreur. Il faut saisir un nombre entier positif, différent de 1 : "<< std::endl;
        std::cin >> initialNumber;
    }

    currentNumber = initialNumber;

    do {
        nbStep++;
        isEven = currentNumber%2==0;
        if (isEven) {
            nextNumber = currentNumber/2;
        } else 
        {
            nextNumber = 3*currentNumber+1;
        }
        currentNumber = nextNumber;
        std::cout << currentNumber << std::endl;
    } while (currentNumber!=1);

    std::cout << "La suite a atteint 1 au bout de " << nbStep << " termes." << std::endl;

    return 0;
}
