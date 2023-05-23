#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>
#include <vector>
#include "food.h"

class Ingredient : public Food {
private:
    std::string name;
    bool needsCooking;
    std::vector<Flavor> flavors;

public:
    Ingredient(const std::string& n, bool cooked);

    void addFlavor(Flavor f);
    void setCooked(bool cooked);
    std::string getName() const;
    bool getNeedsCooking() const;
    const std::vector<Flavor>& getFlavors() const;
};

#endif // INGREDIENT_H