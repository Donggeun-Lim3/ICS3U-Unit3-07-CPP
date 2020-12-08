// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This program checks if your age is between 25 and 40.

#include <iostream>
#include <string>

int main() {
    int someRandomNumber;
    std::string integerAsString;
    int integerAsNumber;

    // input
    std::cout << "Enter the your age : ";
    std::cin >> integerAsString;
    std::cout << "" << std::endl;

    // process
    try {
        integerAsNumber = std::stoi(integerAsString);

        if (integerAsNumber > 25 && integerAsNumber < 40) {
            // output
            std::cout << "You can date with her grandchild!";
            std::cout << "" << std::endl;
        } else {
            std::cout << "you can not date with her grandchild.";
            std::cout << "" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not an integer";
    }
}
