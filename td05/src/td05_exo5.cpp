#include <iostream>
#include <string>
#include <set>
#include <algorithm>

bool isPangramme(const std::string& sentence);

int main() {
    std::string sentence;

    std::cout << "Entrer une phrase : ";
    std::getline(std::cin, sentence);// cis s'arrete au premier espace,getLine permet de recup la phrase entière

    if (isPangramme(sentence)) {
        std::cout << "La phrase est un pangramme." << std::endl;
    } else {
        std::cout << "La phrase n'est pas un pangramme." << std::endl;
    }

    return 0;
}

bool isPangramme(const std::string& sentence) {
    std::set<char> lettres;
    
    // Convertir toute la chaîne en minuscules et ajouter chaque lettre au set
    for (char c : sentence) {
        if (std::isalpha(c)) { // Vérifie si le caractère est une lettre (A-Z ou a-z, vire les espaces ou la ponctuation)
            lettres.insert(std::tolower(c)); // Ajoute la lettre en minuscule
        }
    }

    // Si le set contient 26 lettres, c'est un pangramme
    return lettres.size() == 26;
}
