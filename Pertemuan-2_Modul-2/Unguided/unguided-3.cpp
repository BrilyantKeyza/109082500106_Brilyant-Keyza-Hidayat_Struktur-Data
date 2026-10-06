#include <iostream>
using namespace std;

// Fungsi untuk mencari nilai maksimum
int cariMaksimum(int arr[], int ukuranArray) {
    int max = arr[0];
    for (int i = 1; i < ukuranArray; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}

int cariMinimum(int arr[], int ukuranArray) {
    int min = arr[0];
    for (int i = 1; i < ukuranArray; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void hitungRataRata(int arr[], int ukuranArray) {
    float total = 0;
    for (int i = 0; i < ukuranArray; i++) {
        total += arr[i];
    }
    float rataRata = total / ukuranArray;
    cout << "Nilai rata-rata array adalah: " << rataRata << endl;
}

int main() {
    int arrA[10] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};
    int ukuranArray = 10;
    int pilihan;

    do {
        cout << "\n==== Menu Program Array ====" << endl;
        cout << "1. Tampilkan isi array" << endl;
        cout << "2. Cari nilai maksimum" << endl;
        cout << "3. Cari nilai minimum" << endl;
        cout << "4. Hitung nilai rata-rata" << endl;
        cout << "5. Keluar program" << endl;
        cout << "Masukkan pilihan (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Isi array arrA: ";
                for (int i = 0; i < ukuranArray; i++) {
                    cout << arrA[i] << " ";
                }
                cout << endl;
                break;
            case 2:
                cout << "Nilai maksimum array adalah: " << cariMaksimum(arrA, ukuranArray) << endl;
                break;
            case 3:
                cout << "Nilai minimum array adalah: " << cariMinimum(arrA, ukuranArray) << endl;
                break;
            case 4:
                hitungRataRata(arrA, ukuranArray);
                break;
            case 5:
                cout << "Keluar dari program. Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 5); 

    return 0;
}