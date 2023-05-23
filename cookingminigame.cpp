#include <iostream>
#include <algorithm>
#include "cookingminigame.h"

void CookingMinigame::runCookingApparatus() {
    // Implementation logic for the cooking mini-game
    // Example implementation:
    ui->navigateToMenu();  // Navigate to the cooking mini-game menu

    while (true) {
        // Game loop
     
        // Display the shopping list to the user
        std::cout << "Shopping List:\n";
        for (const auto& item : shoppingList->getItems()) {
            std::cout << "- " << item << '\n';
        }

        // Ask the user to select an ingredient from the shopping list
        std::string selectedIngredient;
        std::cout << "Select an ingredient from the shopping list: ";
        std::cin >> selectedIngredient;

        // Check if the selected ingredient exists in the shopping list
        auto it = std::find(shoppingList->getItems().begin(), shoppingList->getItems().end(), selectedIngredient);
        if (it != shoppingList->getItems().end()) {
            // Remove the selected ingredient from the shopping list
            shoppingList->removeItem(selectedIngredient);

            // Add the selected ingredient to the shopping cart
            shoppingCart->addIngredient(new Ingredient(selectedIngredient, false));
            std::cout << "You added " << selectedIngredient << " to your shopping cart.\n";
        } else {
            std::cout << "Invalid ingredient. Please select a valid ingredient from the shopping list.\n";
        }

        // Perform cooking actions, update UI, etc.

        if (/* Game over condition */) {
            break;
        }
    }

    int finalScore = score->calculateScore();
    ui->addScore(finalScore);
    ui->tickBetweenRounds();
}