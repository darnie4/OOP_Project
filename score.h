#ifndef SCORE_H
#define SCORE_H

#include "child.h"
#include "meal.h"
#include "shoppingcart.h"

class Score {
private:
    Child* child;
    Meal* meal;

public:
    int calculateScore();
};

#endif // SCORE_H