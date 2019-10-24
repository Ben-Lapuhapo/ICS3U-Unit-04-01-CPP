// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Ben Lapuhapo
// Created on: Oct 2019
// This program uses a while loop

#include <iostream>

main() {
    // this function uses a while loop
    int positiveInteger;
    int Counter = 0;
    int answer = 0;

    // input
    std::cout << "Enter A Positive (+) Number: ";
    std::cin >> positiveInteger;

    // process
    while (Counter <= positiveInteger) {
        std::cout << " Answer is " << answer << std::endl;
        Counter = Counter + 1;
        answer = answer + Counter;
    }
}
