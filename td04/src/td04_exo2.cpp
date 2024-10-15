#include <iostream>
#include <string>
#include <algorithm> // Pour std::transform
#include <cctype>    // Pour std::tolower

int main()
{

    //Déclaration de variables
    std::string word{};

    //Récupération du mot donné
    std::cout << "Donne moi un mot : " << std::endl;
    std::cin >> word;

    // Convertir le string en minuscules
    std::transform(word.begin(), word.end(), word.begin(),
                   [](unsigned char c)
                   { return std::tolower(c); });


    //Vérification du palindrome
    for (int i = 0; i < word.size() / 2; i++)
    {
        if (word[i] != word[word.size() - i - 1])
        {
            //Si ce n'est pas un palindrome, j'arrete le code ici
            std::cout << word << " n'est pas un palindrome." << std::endl;
            return 0;
        }
    }

    //Réponse
    std::cout << word << " est un palindrome !" << std::endl;
}