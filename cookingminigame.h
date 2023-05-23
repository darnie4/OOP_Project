#ifndef COOKINGMINIGAME_H
#define COOKINGMINIGAME_H

#include "ui.h"
#include "shoppingcart.h"
#include "score.h"
#include "shoppinglist.h"

class CookingMinigame {
private:
    UI* ui;
    ShoppingCart* shoppingCart;
    Score* score;
    ShoppingList* shoppingList;

public:
    CookingMinigame(UI* ui, ShoppingCart* cart, Score* score, ShoppingList* list);

    void runCookingApparatus();
};

#endif // COOKINGMINIGAME_H