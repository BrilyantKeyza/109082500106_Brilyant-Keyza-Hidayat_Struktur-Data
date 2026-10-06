// Pointer 2
#include <iostream>
using namespace std;
int main() {
    int angka = 100;

    int *pointer;

    pointer = &angka;

    cout << "Nilai Angka: " << angka << endl; //100
    cout << "Alamat Angka: " << &angka << endl; //address
    cout << "Isi Pointer: " << pointer << endl; // address angka
    cout << "Nilai dari Pointer: " << &pointer << endl; // value angka(100)

    return 0;
}