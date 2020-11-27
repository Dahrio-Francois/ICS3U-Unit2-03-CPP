// copyright (c) Mother Teresa HS All Rights Reserved
//
// Created by: Dahrio Francois
// Created on: November 2020
// this program calculates the circumference of a circle
//     with user input

#include <iostream>

int main() {
    // this function calculates the circumference of a circle
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter the radius of the circle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "circumference is " << circumference << " mm" << std::endl;
}
