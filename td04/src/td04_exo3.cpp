#include <iostream>
#include <vector>
#include <array>
#include <string>

int main()
{
    //Déclaration de variables
    long long number;
    std::vector<int> digits;
    std::array<int, 10> occurrences {0};

    //Récupération et vérification du nombre donné
     do {
        std::cout << "Veuillez entrer un nombre entier positif (superieur a 1 000 000) : ";
        std::cin >> number;
    } while (number <= 1000000);


    // Extraire les chiffres du nombre
    while (number > 0) {
        int digit = number % 10; // Obtenir le dernier chiffre
        digits.push_back(digit);  // Ajouter le chiffre au tableau
        number /= 10;             // Retirer le dernier chiffre du nombre
    }

    // Trouver le chiffre avec le plus grand nombre d'occurrences
    for (int digit : digits) {
        occurrences[digit]++;
    }

    int mostFrequentDigit = 0;
    int maxOccurrences = 0;

    for (int i = 0; i < 10; ++i) {
        if (occurrences[i] > maxOccurrences) {
            maxOccurrences = occurrences[i];
            mostFrequentDigit = i;
        }
    }

    // Affichage du résultat
    std::cout << "Le chiffre qui apparaît le plus souvent est : " << mostFrequentDigit << " avec " << maxOccurrences << " occurrences." << std::endl;
}