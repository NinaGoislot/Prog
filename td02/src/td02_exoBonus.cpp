#include <iostream>

int main()
{
    //Déclaration des variables 

    //Au kilo
    const float pricePotatoes {1.5f},
                priceCarrots {2.5f}, 
                priceSalades {1.2f};

    const float weightgPotatoes {2.f},
                weightCarrots {0.15f};

    int nbPotatoes, nbCarrots, nbSalades {};

    float totalPrice {};

    float totalPotatoes {},
          totalCarrots {},
          totalSalade {};

    //Demande du nombre de chaque ingrédient
    std::cout << "Entrez le nombre de sacs de pommes de terre : ";
    std::cin >> nbPotatoes;
    std::cout << "Entrez le nombre de carottes : ";
    std::cin >> nbCarrots;
    std::cout << "Entrez le nombre de sacs de salades : ";
    std::cin >> nbSalades;

    //Cacul du prix total
    totalPotatoes = nbPotatoes * (pricePotatoes*weightgPotatoes);
    totalCarrots = nbCarrots * weightCarrots * priceCarrots;
    totalSalade += nbSalades * priceSalades;

    totalPrice = totalPotatoes + totalCarrots + totalSalade;

    std::cout << "Le prix total de la commande est de " << totalPrice << "  euros" << std::endl;
    std::cout << "Détails : " << std::endl;
    std::cout << nbPotatoes <<" sac(s) de pommes de terre : " << totalPotatoes << " euros" << std::endl;
    std::cout << nbCarrots <<" carotte(s) : " << totalCarrots << " euros" << std::endl;
    std::cout << nbSalades <<" salade(s) : " << totalSalade << " euros" << std::endl;

    return 0;
}