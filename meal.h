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
    //Constructor
    //Takes in a name, a vector containing ingredients and a vector containing flavours as input
    Meal(const std::string& name, const std::vector<Ingredient>& ingredients, const std::vector<Flavour>& flavours);

    //Getter function
    //Returns name of meal as string
    std::string getName() const;

    //Getter function
    //Returns vector of ingredients
    std::vector<Ingredient> getIngredients() const;

    //Getter function
    //Returns vector of flavours 
    std::vector<Flavour> getFlavours() const;
};

#endif // MEAL_H