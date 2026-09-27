#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input: ";
    cin >> n;
    cout << "Output: \n";

    for (int baris = 1; baris <= n + 1; baris++) {

        for (int jarak = 1; jarak < baris; jarak++) {
            cout << "  ";
        }

        for (int kiri = n - baris + 1; kiri >= 1; kiri--) {
            cout << kiri << " ";
        }

        cout << "* ";

        for (int kanan = 1; kanan <= n - baris + 1; kanan++) {
            cout << kanan << " ";
        }
        cout << endl;
    }
    
}