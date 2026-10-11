#include <iostream>
#include "operasi.h"
using namespace std;

int main() {

    int arrayA[3][3] = { {1, 2, 3}, {3, 2, 1}, {1, 2, 3} };
    int arrayB[3][3] = { {6, 3, 9}, {9, 3, 6}, {6, 3, 9} };
    
    int nilaiX = 10;
    int nilaiY = 99;
    int *p1 = &nilaiX;
    int *p2 = &nilaiY;

    cout << "==== Sebelum ditukar ====" << endl;
    cout << "Array A:" << endl;
    tampilArray(arrayA);
    cout << "Array B:" << endl;
    tampilArray(arrayB);

    tukarIsiArray(arrayA, arrayB, 1, 1);

    cout << "\n==== Setelah index [1][1] ditukar ====" << endl;
    cout << "Array A:" << endl;
    tampilArray(arrayA);
    cout << "Array B:" << endl;
    tampilArray(arrayB);

    cout << "\n==== Pointer sebelum ditukar ====" << endl;
    cout << "Nilai Pointer 1: " << *p1 << endl;
    cout << "Nilai Pointer 2: " << *p2 << endl;

    tukarPointer(p1, p2);

    cout << "\n==== Pointer setelah ditukar ====" << endl;
    cout << "Nilai Pointer 1: " << *p1 << endl;
    cout << "Nilai Pointer 2: " << *p2 << endl;

    return 0;
}