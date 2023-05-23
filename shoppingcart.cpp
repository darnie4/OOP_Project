#include "shoppingcart.h"

void ShoppingCart::addIngredient(Ingredient* ingredient) {
    ingredients.push_back(ingredient);
}

void ShoppingCart::removeIngredient(Ingredient* ingredient) {
    // Implementation logic for removing ingredient from the cart
    // Iterate over the ingredients vector and remove the specified ingredient
    auto it = std::find(ingredients.begin(), ingredients.end(), ingredient);
    if (it != ingredients.end()) {
        ingredients.erase(it);
    }
}