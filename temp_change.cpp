// Copyright (c) 2019 Izza Khalid All rights reserved.
//
// Created by: Izza Khalid
// Created on: November 2019
// This program converts celsius to fahrenheit

#include <iostream>
#include <string>
#include <iomanip>


void fahrenheit() {
    // this finction converts celsius to fahrenheit

    float celsius;
    float fahren;

    // input
    std::cout << "We are converting temperature from celsius to fahrenhei!"
              << std::endl;
    std::cout << "Enter the temperature in °C: ";
    std::cin >> celsius;
    std::cout << " " << std::endl;

    // process
    fahren = (9.0/5.0 * celsius) + 32;

    // output
    std::cout << "The temperature is " << fahren
              << "°F in Fahrenheit." << std::endl;
}

main() {
    // call function
    fahrenheit();
}
