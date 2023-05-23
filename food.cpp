#include "food.h"

void Food::setFlavor(Flavor f) {
    flavor = f;
}

Flavor Food::getFlavor() const {
    return flavor;
}