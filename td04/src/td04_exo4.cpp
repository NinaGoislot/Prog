#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <set>
#include <numeric>

int main()
{
    //Déclaration de variables
    int level;
    std::vector<int> ennemiesLevel{};
    int energies{};

    //Récupération et vérification des valeurs initiales
     do {
        std::cout << "Quel niveau as tu termine ? "<< std::endl;
        std::cin >> level;
    } while (level < 0 || level == 0 || std::cin.fail() == true);
    
    int numberOfEnnemies{};
    do {
        std::cout << "Combien as tu tue d'ennemis ? "<< std::endl;
        std::cin >> numberOfEnnemies;
    } while (numberOfEnnemies < 0 || numberOfEnnemies == 0 || std::cin.fail() == true);

    ennemiesLevel.resize(numberOfEnnemies);

    for (int i {0}; i < numberOfEnnemies; i++) {
        do {
            std::cout << "Quel etait le niveau de l'ennemi numero " << i + 1 << " ?"<< std::endl;
            std::cin >> ennemiesLevel[i];
        } while (ennemiesLevel[i] < 0 || ennemiesLevel[i] == 0 || std::cin.fail() == true);
    }

    //Calcul des multiples
    std::set<int> multiplesToSum;
    for (int oneLevel : ennemiesLevel) {
        for (int i{oneLevel}; i < level ; i++) {
            if (i%oneLevel==0) { //Si i est un multiple
                multiplesToSum.insert(i); //J'ajoute i a la liste des multiples. S'il existe déja, il ne s'ajoute pas grace au type sets.
            }
        }
    }

    //Calcul des points d'energies
    energies = std::accumulate(multiplesToSum.begin(), multiplesToSum.end(), 0); //(indicateur de début de la suite à calculer, indicateur de fin, valeur initiale de la somme)

    // Affichage du résultat
    std::cout << "Vous avez gagne " << energies << " points d'energies !"<<std::endl;
}