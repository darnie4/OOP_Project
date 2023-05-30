#ifndef HELPER_H
#define HELPER_H

#include <vector>
#include "Flavour.cpp"
#include "Meal.h"

//Prints the current day to the terminal. If it is the first day, prints a welcome message 
//Takes the day as input, as well as whether or not it is the first day
void displayDayHeader(int day, bool isFirstDay);

//Prints the required flavours to the terminal
//Takes a vector containing the required vectors as input
void displayFlavours(const std::vector<Flavour>& flavours);

//Prints a list of available meals to the terminal
//Takes in a vector containing the available meals as input
void displayIngredients(const std::vector<Meal>& meals);

//Returns user input as int
int getUserInput();

//Takes in an integer and a maximum as input
//Returns true if the input integer is between 1 and the value of the input max
//Else returns false
bool validateInput(int input, int max);

//Prints the results to the terminal
//Takes in a boolean value
void displayResult(bool isCorrect);

//Takes in a score integer and a total integer as input
//Prints the score in the format: [score]/[total] to the terminal
void displayScore(int score, int total);

#endif