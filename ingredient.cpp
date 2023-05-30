#include "Ingredient.h"

Ingredient::Ingredient(const std::string& name, Flavour flavour)
    : name(name), flavour(flavour) {}

std::string Ingredient::getName() const {
    return name;
}

Flavour Ingredient::getFlavour() const {
    return flavour;
}
