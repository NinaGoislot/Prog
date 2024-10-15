#include <iostream>
#include <vector>
#include <array>

int average(int const& tab);
float average(float const& tab);
std::vector<float> digits;

int main()
{

    float number {};
    bool stillAdding {1};
     do {
        std::cout << "Saisissez des nombres à ajouter au tableau (ecrire 0 pour arreter)";
        std::cin >> number;

        digits.push_back(number);

        if (number==0) {
            stillAdding = 0;
        }

        
    } while (stillAdding);

    return 0;
}

//Entier
int average(std::vector<int> const& tab) {
    int sum {};
    int result {};
    for (int i{}; i < tab.size(); i++) {
        sum += tab[i];
    }

    result = sum / tab.size();

    return result;
}

//Flottant
int average(std::vector<float> const& tab) {
    float sum {};
    float result {};
    for (int i{}; i < static_cast<float> (tab.size()) ; i++) {
        sum += tab[i];
    }

    result = sum / tab.size();

    return result;
}