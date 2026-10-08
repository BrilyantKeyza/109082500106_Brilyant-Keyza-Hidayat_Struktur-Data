#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main() {
    int jumlahMhs;
    mahasiswa mhs[10];

    cout << "Jumlah mahasiswa: ";
    cin >> jumlahMhs;

    if (jumlahMhs > 10) {
        cout << "Melebihi batas";
        return 0;
    }

    for (int i = 0; i < jumlahMhs; i++) {
        cout << "\nMahasiswa ke-" << i+1 << endl;
        inputMhs(mhs[i]);
        mhs[i].nilaiAkhir = nilaiAkhir(mhs[i]);
    }


    for (int i = 0; i < jumlahMhs; i++) {
        cout << "Nilai Akhir Mahasiswa" << i+1 << " = " << mhs[i].nilaiAkhir << endl;
    }
    return 0;
}