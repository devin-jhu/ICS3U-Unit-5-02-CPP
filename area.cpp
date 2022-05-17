// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The area calculator

#include <iostream>
#include <string>


float area(float baseNumber, float heightNumber) {
    // this function calculates area of a triangle
    float areaNumber;

    areaNumber = (baseNumber * heightNumber) / 2;

    std::cout << "the area of your triangle is " << areaNumber << " cm²";
}

int main() {
    // this function get base and height then calls the function
    std::string baseString;
    std::string heightString;
    float base;
    float height;

    // input
    std::cout << "enter height (cm): ";
    std::cin >> heightString;
    std::cout << "enter base (cm): ";
    std::cin >> baseString;

    // process & output
    try {
        base = std::stoi(baseString);
        height = std::stoi(heightString);

        area(base, height);
    } catch (std::invalid_argument) {
    std::cout << "not a number" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
