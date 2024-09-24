#include <iostream>
#include <cmath>  // Pour std::round

enum class Article { Alimentation, Vetements, Chaussures, Autre };

std::istream& operator>>(std::istream& is, Article& article)
{
    std::string articleAsString;
    is >> articleAsString;

    if (articleAsString == "Alimentation") {
        article = Article::Alimentation;
    } else if (articleAsString == "Vetements") {
        article = Article::Vetements;
    } else if (articleAsString == "Chaussures") {
        article = Article::Chaussures;
    } else if (articleAsString == "Autre") {
        article = Article::Autre;
    } else {
        is.setstate(std::ios::failbit);
    }

    return is;
}

int main()
{
    //----------------------------------------------------------------------------------------
    //------------------------------------ INITIALISATION ------------------------------------

    //Déclaration des variables 
    Article article;
    float productPrice, totalPrice, nextDiscount {};
    int age {};
    bool hasCard {};

    //-------------------- Type d'article --------------------
    std::cout << "Quel est votre type d'article ? "<< std::endl;
    std::cout << "(Types possibles : Alimentation, Vetements, Chaussures, Autre)"<< std::endl;
    std::cin >> article;

    // On vérifie si la saisie a échoué.
    while (std::cin.fail()) {
        std::cout << "Erreur de saisie, il faut saisir un type d'article valide (\"Alimentation\", \"Vetements\", \"Chaussures\" ou \"Autre\")" << std::endl;

        std::cin.clear(); // On remet std::cin dans un état fonctionnel.
        std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.

        std::cin >> article;
    }

    //-------------------- Prix de l'article --------------------

    std::cout << "Quel est le prix de votre article ? "<< std::endl;
    std::cin >> productPrice;

    while (productPrice < 0 || productPrice == 0 || productPrice == 1 || std::cin.fail() == true) {
        std::cin.clear();
        std::cin.ignore(255, '\n'); 
        std::cout << "On ne fait pas de remboursement ici. Il faut saisir un nombre positif."<< std::endl;
        std::cin >> productPrice;
    }

    //--------------------- Carte de fidélité --------------------
    
    std::cout << "Avez vous une carte de fidelite ?"<< std::endl;
    std::cin >> hasCard;

    while (std::cin.fail() == true) {
        std::cin.clear();
        std::cin.ignore(255, '\n'); 
        std::cout << "Ce n'est pas la reponse que j'attendais. Avez-vous une carte de fidelite ?"<< std::endl;
        std::cin >> hasCard;
    }
   
    //---------------------------- Age ---------------------------

    std::cout << "Quel age avez-vous ?"<< std::endl;
    std::cin >> age;

    while ( age < 16 || std::cin.fail() == true) {
        std::cin.clear();
        std::cin.ignore(255, '\n'); 
        if (age < 16 && age > 0){
            std::cout << "Vous etes jeune ! Vous devez avoir au moins 16 ans."<< std::endl;
            return 0;
        } else {
            std::cout << "Votre age comporte une erreur, reessayez."<< std::endl;
        }
        
        std::cin >> age;
    }

    //----------------------------------------------------------------------------------------
    //-------------------------------------- PROCESSING --------------------------------------

    if (article == Article::Alimentation) {
        std::cout << "Vous avez saisi un article de type Alimentation" << std::endl;
        if (hasCard) {
            std::cout << "Vous avez le droit a 8% de reduction !" << std::endl;
            totalPrice = productPrice - ((productPrice*8)/100);
        } else {
            std::cout << "Vous avez le droit a 5% de reduction seulement. Fallait adherer mon coco." << std::endl;
            totalPrice = productPrice - ((productPrice*5)/100);
        }
    } else if (article == Article::Vetements) {
        std::cout << "Vous avez saisi un article de type Vetements" << std::endl;
        if (hasCard) {
            std::cout << "Vous avez le droit a 15% de reduction !" << std::endl;
            totalPrice = productPrice - ((productPrice*15)/100);
        } else {
            std::cout << "Vous avez le droit a 10% de reduction seulement. Fallait adherer mon coco." << std::endl;
            totalPrice = productPrice - ((productPrice*10)/100);
        }
    } else if (article == Article::Chaussures) {
        std::cout << "Vous avez saisi un article de type Chaussures" << std::endl;
         if (hasCard) {
            std::cout << "Vous avez le droit a 18% de reduction !" << std::endl;
            totalPrice = productPrice - ((productPrice*18)/100);
        } else {
            std::cout << "Vous avez le droit a 12% de reduction seulement. Fallait adherer mon coco." << std::endl;
            totalPrice = productPrice - ((productPrice*12)/100);
        }
    } else if (article == Article::Autre) {
        std::cout << "Vous avez saisi un article de type Autre" << std::endl;
            totalPrice = productPrice;
    }

    if (age < 26) {
        std::cout << "Vous benificiez de la reduction moins de 26 ans !" << std::endl;
        totalPrice = totalPrice - ((totalPrice*10)/100);
    }

    //Bon de réduction
    nextDiscount = (totalPrice*10)/100;
    nextDiscount = nextDiscount > 30 ? 30 : nextDiscount; 

    // Arrondir au centième
    totalPrice = std::round(totalPrice * 100) / 100;
    nextDiscount = std::round(nextDiscount * 100) / 100;
    std::cout << "Le prix total est de "<< totalPrice << " euros." << std::endl;
    std::cout << "Le magasin vous offre egalement un bon de "<< nextDiscount << " euros !" << std::endl;

    return 0;
}
