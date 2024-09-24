#include <iostream>

int main()
{
    //Déclaration des variables
    int initialNumber {};
    char lettre {};

    //Demande du'un nombre entier
    std::cout << "Entrez un nombre entre 1 et 26";
    std::cin >> initialNumber;

    while (initialNumber < 1 || initialNumber > 26) {
         std::cout << "Nombre incorrect. Entrez un nombre compris entre 1 et 26";
         std::cin >> initialNumber;
    }

    //En prenant les majuscules comme base → Le code ASCII est entre 65 et 90, où 65=A.
    //On prend A, donc 65 par défault. On ajoute le nombre choisi pour atteindre les autres lettres. On retire 1 car le choix du nombre commence à 1 et non 0.
    lettre = 'A' + (initialNumber - 1); //char traduit automatiquement le nombre en équivalent ASCII

    std::cout << "La lettre correspondante a " << initialNumber << " est : " << lettre << std::endl;
}