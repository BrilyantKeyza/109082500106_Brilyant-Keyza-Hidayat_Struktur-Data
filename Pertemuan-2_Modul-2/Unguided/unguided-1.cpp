#include <iostream>
using namespace std;

int main() {
    // Mendeklarasikan variable
    int matriksA[3][3], matriksB[3][3];
    int tambah[3][3], kurang[3][3], kali[3][3];

    
    cout << "Input Matriks 1 (3x3)\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Matrix 1 baris ke-" << i << " kolom ke-" << j << ": ";
            cin >> matriksA[i][j];
        }
    }

    cout << "\nInput Matriks 2 (3x3)\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Matrix 2 baris ke-" << i << " kolom ke-" << j << ": ";
            cin >> matriksB[i][j];
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
           
            tambah[i][j] = matriksA[i][j] + matriksB[i][j];
            kurang[i][j] = matriksA[i][j] - matriksB[i][j];
            
            kali[i][j] = 0; 
            for (int k = 0; k < 3; k++) {
                kali[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    cout << "\nHasil Penjumlahan\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tambah[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nHasil Pengurangan\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << kurang[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nHasil Perkalian\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << kali[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}