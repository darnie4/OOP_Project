#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

#include "Ingredient.h"
#include "Meal.h"
#include "Flavour.cpp"
#include "Helper.h"

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int totalScore = 0;
    const int numDays = 14;
    const int numOptions = 4;
    const int numFlavours = 3;
    const int maxIngredients = 3;

    bool isFirstDay = true;
    displayDayHeader(1, isFirstDay);
    isFirstDay = false;

    for (int day = 1; day <= numDays; day++) {
        std::vector<Flavour> requiredFlavours;
        for (int i = 0; i < numFlavours; i++) {
            requiredFlavours.push_back(static_cast<Flavour>(std::rand() % static_cast<int>(Flavour::Liquid) + 1));
        }

        displayFlavours(requiredFlavours);

        std::vector<Meal> meals{
            {"Spaghetti Bolognaise", {{"Meat", Flavour::Meaty}, {"Pasta", Flavour::Hearty}, {"Pasta Sauce", Flavour::Salty}}, {Flavour::Meaty, Flavour::Hearty, Flavour::Salty}},
            {"Chicken Soup", {{"Vegetables", Flavour::Vegetable}, {"Soup base", Flavour::Liquid}, {"Chicken", Flavour::Chicken}}, {Flavour::Vegetable, Flavour::Liquid, Flavour::Chicken}},
            {"Sushi", {{"Rice", Flavour::Light}, {"Salmon", Flavour::Fishy}, {"Seaweed", Flavour::Salty}}, {Flavour::Light, Flavour::Fishy, Flavour::Salty}},
            {"Chicken Salad", {{"Chicken", Flavour::Chicken}, {"Lettuce", Flavour::Light}, {"Tomato", Flavour::Salty}}, {Flavour::Chicken, Flavour::Light, Flavour::Salty}}
        };

        displayIngredients(meals);

        int input = getUserInput();
        if (!validateInput(input, numOptions)) {
            displayResult(false);
            day--;
            continue;
        }

        const Meal& selectedMeal = meals[input - 1];
        bool isCorrect = true;
        int score = 0;

        for (const auto& flavour : requiredFlavours) {
            if (std::find(selectedMeal.getFlavours().begin(), selectedMeal.getFlavours().end(), flavour) != selectedMeal.getFlavours().end()) {
                score++;
            } else {
                isCorrect = false;
                break;
            }
        }

        score = std::min(score, numFlavours);  // Ensure the score doesn't exceed the maximum possible score

        displayResult(isCorrect);
        displayScore(score, numFlavours);
        totalScore += score;

        std::cout << "Press 1 to continue." << std::endl;
        getUserInput();
    }

    std::cout << "You have earned a score of " << totalScore << "/" << (numFlavours * numDays) << "." << std::endl;

    return 0;
}