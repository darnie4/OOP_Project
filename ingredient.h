#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>
#include <vector>
#include "Flavour.cpp"

class Ingredient {
private:
    std::string name;
    Flavour flavour;
public:
    Ingredient(const std::string& name, Flavour flavour);
    std::string getName() const;
    Flavour getFlavour() const;
};

#endif // INGREDIENT_H