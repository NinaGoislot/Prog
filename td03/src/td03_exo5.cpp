#include <iostream>
#include <ctime>
#include <cstdlib>

void startMenu();
void startGame();

int main()
{
    startMenu();

    return 0;
}

void startMenu() {
    int menu{};

    std::cout << "You wanna play ? Let's play."<< std::endl;
    std::cout << "Choisi ton option de menu !"<< std::endl;
    std::cout << "1 - Jeu du nombre mystere"<< std::endl;
    std::cout << "2 - Leaderboard"<< std::endl;
    std::cout << "3 - Quitter"<< std::endl;
    std::cin >> menu;

    while (menu < 1 || menu > 2 || std::cin.fail() == true)
    {
        std::cin.clear();
        std::cin.ignore(255, '\n'); 
        std::cout << "Saisie incorrecte. Les options de menus sont '1', '2' ou '3' seulement."<< std::endl;
        std::cout << "1 - Jeu du nombre mystere"<< std::endl;
        std::cout << "2 - Leaderboard"<< std::endl;
        std::cout << "3 - Quitter"<< std::endl;
        std::cin >> menu;
    }

    switch (menu)
    {
    case 1:
        startGame();
        break;
    case 2:
        std::cout << "Mode non disponible. Cheh";
        break;
    case 3:
        std::cout << "Merci d'avoir joue !";
        break;
    default:
        break;
    }
}

void startGame()
{
    
    //Rules 
    std::cout << "Bienvenue dans le jeu du nombre mystere ! "<< std::endl;
    std::cout << "Les regles sont simples : Je pense a un nombre compris entre 1 et 100 et tu dois le trouver en un minimum d'essais. A chaque tentative, tu saura si ton nombre est plus petit ou plus grand que le nombre a trouver. Si tu es tres tres bon, tu finira peut etre meme dans le tableau des meilleurs joueurs (les goats)"<< std::endl;

    // Initialisation du générateur de nombres aléatoires avec la fonction time()
    std::srand(std::time(nullptr));

    // Déclaration des variables
    int aleaNumber, nbTry, currentTry{};
    bool nbFound{false};

    aleaNumber = std::rand() % 100 + 1; // Nombre aléatoire entre 1 et 100

    std::cout << "C'est parti "<< std::endl;
    do
    {
        // Demande du nombre entier
        nbTry++;
        std::cout << "Quel nombre proposes-tu ? : " ;
        std::cin >> currentTry;

        int tryStatus{};
        tryStatus = currentTry > aleaNumber ? 2 : currentTry < aleaNumber ? 0
                                                                          : 1;

        switch (tryStatus)
        {
        case 2: // supérieur
            std::cout << "C'est moins " << std::endl;
            break;
        case 1: // égal
            nbFound = true;
            break;
        case 0: // supérieur
            std::cout << "C'est plus " << std::endl;
            break;
        default:
            break;
        }

        if (nbTry % 5 == 0) // Tous les 5 essais, je donne un rappel du nombre d'essai (pour mettre la pression)
        {
            std::cout << "Tu en es a  " << nbTry << " tentatives." << std::endl;
        }

    } while (!nbFound);

    std::cout << "Gagne !" << std::endl;
    std::cout << "Tu as trouve le nombre mystere en " << nbTry << " tentatives." << std::endl;
    std::cout << "C'est pas ouf." << std::endl;
}