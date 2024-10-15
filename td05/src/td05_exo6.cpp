#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype> //for toupper


// Écrire une fonction qui prend en paramètre une chaîne de caractères et qui retourne le nombre de voyelles de cette chaîne.

// Écrire une fonction qui prend en paramètre une chaîne de caractères et qui retourne le nombre de mots de cette chaîne. On considère que les mots sont séparés par un ou plusieurs espaces.

// Écrire une fonction qui prend en paramètre une chaîne de caractères et qui retourne la même chaîne écrite à l'envers.

// Écrire une fonction qui prend en paramètre une chaîne de caractères et qui retourne true si la chaîne est un nombre entier.

void inverseCasse(std::string &sentence);

int main()
{
    std::string sentence;

    std::cout << "Entrer une chaîne de caractères : ";
    std::getline(std::cin, sentence);

    inverseCasse(sentence);
    std::cout << "La chaîne avec casse inversée est : " << sentence << std::endl;

    int nbVoyelles = compterVoyelles(sentence);
    std::cout << "Le nombre de voyelles dans la chaîne est : " << nbVoyelles << std::endl;

    return 0;
}

void inverseCasse(std::string &sentence)
{
    for (char & c : sentence)
    {
        if (std::isalpha(c)) { // Vérifie si le caractère est une lettre (A-Z ou a-z, vire les espaces ou la ponctuation)
            if (std::islower(c))  { 
                c = std::toupper(c); // Convertir en majuscule
            }
            else if (std::isupper(c)) {     
                c = std::tolower(c); // Convertir en minuscule
            }
        }
    }
}

// constexpr  std::vector<bool> gen_vowel_map(){
// true, fals
// }

int compterVoyelles(const std::string& sentence) {
    // Ensemble contenant les voyelles (en minuscule et majuscule)
    const std::vector<char> voyelles = { 'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y' };

    // static constexpr std::vector<bool> is_vowel = gen_vowel_map(); 

    int compteur = 0;
    for (char c : sentence) {
        if (std::find(voyelles.begin(), voyelles.end(), c) != voyelles.end()) { //Si find ne trouve rien, alors il pointera vers voyelle.end() (itérateur debut, itérateur fin, lettre a trouver)
            compteur++;
        }
    }
    return compteur;
}
