#include <iostream>
#include <vector>

int main()
{
    //Déclaration des variables 
    bool nbNegativeFound {false};
    int currentNumber {};
    std::vector<int> numbers; //Créer un tableau de taille indéterminée

    do {
        std::cout << "Saisir un entier (entrez un nombre negatif pour arreter) : ";
        std::cin >> currentNumber;

        if (currentNumber < 0) {
            nbNegativeFound = true;  // Arrêter la boucle si le nombre est négatif
        } else {
            numbers.push_back(currentNumber);  // Ajouter le nombre au tableau
        }
    } while (!nbNegativeFound);

    //Calcul de la somme et de la moyenne

    int sum = 0;
    for (int number : numbers) {
        sum += number; //J'ajoute a "sum" chaque élément du tableau "numbers"
    }

    double average = 0.0;
    if (!numbers.empty()) {
        average = static_cast<double>(sum) / numbers.size(); //Transforme sum (qui est un int) en double pour permettre l'opération
    }

    // Affichage des résultats
    std::cout << "La somme est : " << sum << std::endl;
    std::cout << "La moyenne est : " << average << std::endl;
}