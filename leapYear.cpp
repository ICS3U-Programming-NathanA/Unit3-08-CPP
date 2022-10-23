// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Oct 23 2022
// This program asks the user for the year \
// it then sees if that year is a leap year

#include <iostream>

// declare yearNum as a integer
int yearNum;

int main() {
    // declare yearString as a string
    std::string yearString;

    // get the users year
    std::cout << "Enter a year: ";
    std::cin >> yearString;

    // A try catch statement to catch
    // if the user enters a string
    try {
        yearNum = std::stoi(yearString);
        // If statement followed by a nested if statements
        // to determine if the users year is a leap year
        if (yearNum % 4 == 0) {
            if (yearNum % 100 == 0) {
                if (yearNum % 400 == 0) {
                    std::cout << "It is a leap year \n";
                } else {
                    std::cout << "It is not a leap year \n";
                }
            } else {
                std::cout << "It is a leap year \n";
            }
        } else {
            std::cout << "It is not a leap year \n";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a year\n";
    }
}
