// Copyright (c) 2021 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Sep 28, 2023
// This program asks the user for the diameter and then
// displays the total cost of the pizza

#include <iostream>
// Include this for std::setprecision
#include <cmath>
#include <iomanip>

int main() {
    // declare constants
    const float RENT_COST = 2.25;
    const float LABOR_COST = 2.00;
    const float MATIRALS_COST = 1.50;
    const float HST = 0.13;

    // declare variables
    float diameter;

    // get the diameter from the user and display message
    std::cout << "This program will calculate the cost of your of pizza ";
    std::cout << "\n";
    std::cout << "Enter the diameter of your pizza (inches): ";
    std::cin >> diameter;

    // calculate the subtoal, tax and total
    float subtotal = (diameter * MATIRALS_COST) + RENT_COST + LABOR_COST;
    float tax = subtotal * HST;
    float total = subtotal + tax;

    // display the calculated variables
    std::cout << "\n";
    std::cout << "The subtotal is $" << std::fixed << std::setprecision(2)
              << subtotal << std::endl;
    std::cout << "The tax is $" << std::fixed << std::setprecision(2)
              << tax << std::endl;
    std::cout << "The total is $" << std::fixed << std::setprecision(2)
              << total << std::endl;
}
