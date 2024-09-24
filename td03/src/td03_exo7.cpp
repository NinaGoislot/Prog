#include <iostream>


void initializeStep(int =1);
int step{};
int main()
{
    //Déclaration des variables 
    int initialNumber {};

    //Demande du nombre entier
    std::cout << "Saisir un nombre entier : "<< std::endl;
    std::cin >> initialNumber;

    while (initialNumber < 0 || initialNumber == 0 || std::cin.fail() == true) {
        std::cin.clear();
        std::cin.ignore(255, '\n'); 
        std::cout << "Erreur. Il faut saisir un nombre entier positif: "<< std::endl;
        std::cin >> initialNumber;
    }


    //Premier Sapin
    initializeStep();
    std::cout << "Premier sapin :" << std::endl;

    for (int i {0}; i < initialNumber; i++) {
        for(int j {0}; j < step; j++) {
             std::cout << "*";
        }
        std::cout << "" << std::endl;
        step++;
    }

    //Deuxieme sapin 
    initializeStep(-1);
    std::cout << "Deuxieme sapin :" << std::endl;

    int bottomlenght{2*initialNumber};
    int gap{bottomlenght/2};
    for (int i {0}; i < initialNumber+1; i++) {
        for(int k {0}; k < gap; k++) {
             std::cout << " ";
        }
        for(int j {0}; j < step; j++) {
             std::cout << "*";
        }
        std::cout << "" << std::endl;
        step=step+2;
        gap--;
    }

    //Troisième sapin
    initializeStep(1);
    for (int i {0}; i < initialNumber; i++) {
        //Haut et bas du carré
        if (step == 1 || step == initialNumber) {
            for(int j {0}; j < initialNumber; j++) {
             std::cout << "*";
             }
        } else {
            for(int j {0}; j < initialNumber; j++) {
                if (j == 0 || j == initialNumber -1) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
             }
        }
        std::cout << "" << std::endl;
        step++;
    }

    return 0;
}

void initializeStep(int number){
    step = number;
}