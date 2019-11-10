// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: November 2019
// This program outputs the number from 1000 - 2000

#include <iostream>

int main() {
    int counter;

    // process & output
    for (counter = 1000; counter < 2001; counter++) {
        std::cout << counter << " " << "";
        if (counter % 5 == 4) {
           std::cout << "" << std::endl; }
    }
}
