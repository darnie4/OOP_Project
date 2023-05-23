#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "ingredient.h"
#include "ui.h"

class ShoppingCart {
private:
    std::vector<Ingredient*> ingredients;
    UI* ui;

public:
    void addIngredient(Ingredient* ingredient);
    void removeIngredient(Ingredient* ingredient);
};

#endif // SHOPPINGCART_H