// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on: December 2019
// This program calculates the average of numbers in a list.

#include <iostream>
#include <ctime>
#include <array>

int average_of_numbers(std::array<int, 10> random_numbers) {
    // this function calculates average
    // variables
    int total = 0;
    int loop_counter = 0;

    for (loop_counter = 0; loop_counter < 10; loop_counter++) {
        total = (total + random_numbers[loop_counter]);
    }
    return (total / 10);
}

main() {
    // variables
    std::array<int, 10 > list_random;
    int random_number;
    int loop_counter = 0;
    int average = 0;

    srand(time(NULL));

    // input
    std::cout << "The randomized numbers are:" << std::endl;
    for (loop_counter = 0; loop_counter < 10; loop_counter++) {
        random_number = (rand() % 100) + 1;
        list_random[loop_counter] = random_number;
        std::cout << random_number << ", ";
    }
    std::cout << "" << std::endl;

    // calling function
    average = average_of_numbers(list_random);

    // output
    std::cout << "The average of all numbers is " << average << std::endl;
}
