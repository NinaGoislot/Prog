#include <iostream>
#include <vector>
#include <cstdlib>
#include <array>
#include <ctime>
#include <algorithm>

int main()
{
    size_t const dwarf_count{20000};
    size_t max_cal{0};
    size_t min_cal{0};
    std::vector<std::pair<int, int>> calories{}; //(id , calories)
    std::array<int, 6> best_dwarfs{};

    // std::srand permet de fixer la "seed" du générateur aléatoire (pour avoir des résultats reproductibles)
    std::srand(42);

    for (int i = 0; i < dwarf_count; ++i)
    {
        int c = rand() % 24000 + 100;
        calories.push_back({i , c});
    }

    // TODO: afficher la quantité de provisions la plus grande transportée par un nain

    // Initialisation de la plus petite calorie
    min_cal = calories[0].second;

    //Trouver les min et max calories
    for (const auto& dwarf : calories) { //auto déduit automatiquement le type
        int cal {dwarf.second};
        max_cal = cal > max_cal ? cal : max_cal;
        min_cal = cal < min_cal ? cal : min_cal;
            max_cal = cal;

    }

    //Trier par quantité
    std::sort(calories.begin(), calories.end(), [](const auto& left, const auto& right) { //(itérateur début, itérateur fin, fonction lombda)
        return left.second > right.second; // Tri décroissant
    }); 

    // Afficher
    std::cout << "Les trois nains qui transportent le plus de calories sont les numeros :" << std::endl;
    int top3_sum = 0;
    for (int i = 0; i < 3; ++i) {
        std::cout << calories[i].first << " avec " << calories[i].second << " calories." << std::endl;
        top3_sum += calories[i].second;
    }

    std::cout << "La somme des calories des trois meilleurs nains est : " << top3_sum << " calories." << std::endl;

    std::cout << "Max : " << max_cal << std::endl;
    std::cout << "Min : " << min_cal << std::endl;

    return 0;
}