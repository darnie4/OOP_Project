#include "Meal.h"

Meal::Meal(const std::string& name, const std::vector<Ingredient>& ingredients, const std::vector<Flavour>& flavours)
    : name(name), ingredients(ingredients), flavours(flavours) {}

std::string Meal::getName() const {
    return name;
}

std::vector<Ingredient> Meal::getIngredients() const {
    return ingredients;
}

std::vector<Flavour> Meal::getFlavours() const {
    return flavours;
}