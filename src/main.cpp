#include <iostream>
#include <chrono>

#include "../include/sort.h"
#include "../include/random_array_gen.h"
using namespace std;

int main() {
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    cout << endl;

    int a[n];
    rando::random(a, n);
    /*
    cout << "------Sorting array with bubble_sort------" << endl;
    auto start_bubble = chrono::high_resolution_clock::now();
    sort::bubble_sort(a, n);
    auto stop_bubble = chrono::high_resolution_clock::now();
    auto duration_bubble = chrono::duration_cast<chrono::microseconds>(stop_bubble - start_bubble);
    cout << "Time taken: "<<  duration_bubble.count() << "ms" << endl;
    */
    cout << "------Sorting array with insertion_sort------" << endl;
    auto start_insertion = chrono::high_resolution_clock::now();
    sort::insertion_sort(a, n);
    auto stop_insertion = chrono::high_resolution_clock::now();
    auto duration_insertion = chrono::duration_cast<chrono::microseconds>(stop_insertion - start_insertion);
    cout << "Time taken: "<< duration_insertion.count() << "ms" << endl;


    for (const auto& val : a)
        cout << val << endl;
}
