//
// Created by vladica on 10/4/20.
//

#include <random>
#include <iostream>
#include "../include/random_array_gen.h"

std::default_random_engine generator;
std::uniform_int_distribution<int> distribution(1,100);

void rando::random(int* array, int n) {
    for(int i {}; i < n; i++)
        array[i] = distribution(generator);
}