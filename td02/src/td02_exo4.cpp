#include <iostream>
#include <string>

int main()
{
    //Déclaration des variables
    const int DAYS_IN_CENTURY = 360 * 100;
    const int DAYS_IN_YEAR = 360;
    const int DAYS_IN_MONTH = 30;
    const int DAYS_IN_WEEK = 7;

    const int conversions[] = {DAYS_IN_CENTURY, DAYS_IN_YEAR, DAYS_IN_MONTH, DAYS_IN_WEEK};
    const std::string names[] = {"siecle(s)", "annee(s)", "mois", "semaine(s)", "jour(s)"};

    int daysToConvert, days, weeks, months, years, centuries {};

    //Demande du nombre de jours
    std::cout << "Entrez un nombre de jours : ";
    std::cin >> daysToConvert;

    const int initialNumberOfDays {daysToConvert};

    std::string resultats[5]; // Résultat de chaque conversion
    for (int i = 0; i < 4; i++) {
        resultats[i] = std::to_string(daysToConvert/conversions[i]) + " " + names[i];
        daysToConvert = daysToConvert % conversions[i];
    }

    resultats[4] = std::to_string(daysToConvert) + " " + names[4]; //"days" equivaut au nombre de jours restants

    
    std::cout << initialNumberOfDays << " jours correspondent a : " << std::endl;
    for (int i = 0 ; i < 5 ; i++) {
       std::cout << resultats[i] << " "; 
    }
    std::cout << std::endl;

    return 0;
}