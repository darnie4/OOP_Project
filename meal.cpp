#include "meal.h"

void Meal::addIngredient(Ingredient* ingredient) {
    ingredients.push_back(ingredient);
}

void Meal::addRecipeIngredient(Ingredient* ingredient) {
    recipe.push_back(ingredient);
}