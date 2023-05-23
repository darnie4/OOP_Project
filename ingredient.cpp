#include "ingredient.h"

Ingredient::Ingredient(const std::string& n, bool cooked) : name(n), needsCooking(cooked) {}

void Ingredient::addFlavor(Flavor f) {
    flavors.push_back(f);
}

void Ingredient::setCooked(bool cooked) {
    needsCooking = cooked;
}

std::string Ingredient::getName() const {
    return name;
}

bool Ingredient::getNeedsCooking() const {
    return needsCooking;
}

const std::vector<Flavor>& Ingredient::getFlavors() const {
    return flavors;
}