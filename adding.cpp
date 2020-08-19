// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on August 2020
// This program adds two user inputted integers

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates total from subtotal and tax
    float variable_x;
    float variable_y;
    float total;

    // Input
    std::cout << "Enter the first integer to be added: ";
    std::cin >> variable_x;
    std::cout << "Enter the second integer to be added: ";
    std::cin >> variable_y;

    // Process
    total = variable_x + variable_y;

    // Output
    std::cout << "" << std::endl;
    std::cout << "The equation is "
              << std::fixed << std::setprecision(1) << std::setfill('0')
              << variable_x << " + "
              << std::fixed << std::setprecision(1) << std::setfill('0')
              << variable_y << " = "
              << std::fixed << std::setprecision(1) << std::setfill('0')
              << total << " " << std::endl;
}
