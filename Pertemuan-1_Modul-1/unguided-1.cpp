#include <iostream>
using namespace std;

int main() {
    float x, y;

    cout << "Masukkan Bilangan Pertama: ";
    cin >> x;
    cout << "Masukkan Bilangan Kedua: ";
    cin >> y;

    cout << "==== Hasil ====" << endl;
    cout << "Penjumlahan: " << x + y << endl;
    cout << "Pengurangan: " << x - y << endl;
    cout << "Perkalian: " << x * y << endl;
    cout << "Pembagian: " << x / y << endl;
}