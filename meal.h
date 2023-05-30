#ifndef MEAL_H
#define MEAL_H

#include <vector>
#include "Ingredient.h"

class Meal {
private:
    std::string name;
    std::vector<Ingredient> ingredients;
    std::vector<Flavour> flavours;
public:
    Meal(const std::string& name, const std::vector<Ingredient>& ingredients, const std::vector<Flavour>& flavours);
    std::string getName() const;
    std::vector<Ingredient> getIngredients() const;
    std::vector<Flavour> getFlavours() const;
};

#endif // MEAL_H