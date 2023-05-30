
#include <iostream>
#include "Helper.h"


int getUserInput() {
    int input;
    std::cin >> input;
    return input;
}

void displayDayHeader(int day, bool isFirstDay) {
    if (isFirstDay) {
        std::cout << "Welcome to cooking catastrophe! Please press 1 to continue." << std::endl;
        int input = getUserInput();
        if (input != 1) {
            std::cout << "Invalid input. Exiting the game." << std::endl;
            exit(0);
        }
    }
    std::cout << "Day " << day << std::endl;
}

void displayFlavours(const std::vector<Flavour>& flavours) {
    std::cout << "The child is craving these flavours, press 1 to continue shopping:" << std::endl;
    for (const auto& flavour : flavours) {
        switch (flavour) {
            case Flavour::Vegetable:
                std::cout << "- Vegetable" << std::endl;
                break;
            case Flavour::Salty:
                std::cout << "- Salty" << std::endl;
                break;
            case Flavour::Meaty:
                std::cout << "- Meaty" << std::endl;
                break;
            case Flavour::Hearty:
                std::cout << "- Hearty" << std::endl;
                break;
            case Flavour::Fishy:
                std::cout << "- Fishy" << std::endl;
                break;
            case Flavour::Light:
                std::cout << "- Light" << std::endl;
                break;
            case Flavour::Chicken:
                std::cout << "- Chicken" << std::endl;
                break;
            case Flavour::Liquid:
                std::cout << "- Liquid" << std::endl;
                break;
        }
    }
}


void displayIngredients(const std::vector<Meal>& meals) {
    std::cout << "Welcome to the shops! What combinations of ingredients do you want today?" << std::endl;
    for (size_t i = 0; i < meals.size(); i++) {
        std::cout << "Option " << i + 1 << " - ";
        const auto& ingredients = meals[i].getIngredients();
        for (size_t j = 0; j < ingredients.size(); j++) {
            std::cout << ingredients[j].getName();
            if (j != ingredients.size() - 1)
                std::cout << ", ";
        }
        std::cout << std::endl;
    }
}

bool validateInput(int input, int max) {
    return (input >= 1 && input <= max);
}


void displayResult(bool isCorrect) {
    if (isCorrect) {
        std::cout << "You have cooked ";
    } else {
        std::cout << "Incorrect input, please try again!" << std::endl;
    }
}


void displayScore(int score, int total) {
    std::cout << "You have earned a score of " << score << "/" << total << "." << std::endl;
}