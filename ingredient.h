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
    //Contructor
    //Takes in a vector containing ingredient names and a flavour class instance as inputs
    Ingredient(const std::string& name, Flavour flavour);

    //Getter function
    //Returns name of ingredient as string
    std::string getName() const;

    //Getter function
    //Returns ingredient flavour as flavour type
    Flavour getFlavour() const;
};

#endif // INGREDIENT_H