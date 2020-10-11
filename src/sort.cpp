//
// Created by vladica on 10/4/20.
//

#include <vector>
#include <list>
#include "../include/sort.h"
using namespace std;
void sort::bubble_sort(int *array, int n) {
    bool swapped{};
    do {
        swapped = false;
        for (int i{0}; i < n - 1; i++){
            if(array[i] > array[i + 1]) {
                int tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
                swapped = true;
            }
        }
    }while(swapped);
}

void sort::insertion_sort(int *array, int n) {
    for (int i = 1; i < n; ++i) {
        for (int j = i; j > 0 && array[j - 1] > array[j]; --j) {
            int tmp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = tmp;
        }
    }
}

void sort::selection_sort(int *array, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if(array[i] > array[j]) {
                swap(&array[i], &array[j]);
                continue;
            }
        }
    }
}


void sort::swap(int *x, int *y) {
    int tmp{*x};
    *x = *y;
    *y = tmp;
}