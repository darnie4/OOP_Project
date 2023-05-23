#ifndef FOOD_H
#define FOOD_H

enum class Flavor {
    Sweet,
    Spicy,
    Salty,
    Sour,
    Bitter
};

class Food {
protected:
    Flavor flavor;

public:
    void setFlavor(Flavor f);
    Flavor getFlavor() const;
};

#endif // FOOD_H