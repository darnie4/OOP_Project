#ifndef CHILD_H
#define CHILD_H

#include <vector>
#include "meal.h"
#include "score.h"

class Child {
private:
    std::vector<int> flavorPreferences;

public:
    void setFlavorPreference(int index, int preference);
};

#endif // CHILD_H