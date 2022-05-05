// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>
#include <string>

void Area(float base, float height) {
    // I calculate area
    float area;

    // process
    area = (base * height) / 2;

    // output
    std::cout << "The area is " << area << " cm²" << std::endl;
}

main() {
    // I am main, I receive input
    std::string strBase;
    std::string strHeight;
    float fltBase;
    float fltheight;

    // input
    std::cout << "Input triangle base in cm: ";
    std::cin >> strBase;
    std::cout << "Input triangle height in cm: ";
    std::cin >> strHeight;
    std::cout << std::endl;

    try {
        fltBase = std::stof(strBase);
        fltheight = std::stof(strHeight);
        Area(fltBase, fltheight);
    } catch (std::invalid_argument) {
        std::cout << "Invalid input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}