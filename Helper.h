#ifndef HELPER_H
#define HELPER_H

#include <vector>
#include "Flavour.cpp"
#include "Meal.h"

void displayDayHeader(int day, bool isFirstDay);

void displayFlavours(const std::vector<Flavour>& flavours);

void displayIngredients(const std::vector<Meal>& meals);

int getUserInput();

bool validateInput(int input, int max);

void displayResult(bool isCorrect);

void displayScore(int score, int total);

#endif