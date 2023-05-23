#ifndef MEAL_H
#define MEAL_H

#include <vector>
#include "ingredient.h"

class Meal {
private:
    std::vector<Ingredient*> recipe;
    std::vector<Ingredient*> ingredients;

public:
    void addIngredient(Ingredient* ingredient);
    void addRecipeIngredient(Ingredient* ingredient);
};

#endif // MEAL_H