#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main() {
    int jumlahMhs;
    mahasiswa mhs[10];

    cout << "Jumlah mahasiswa (max 10): ";
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

    cout << "\n==== DATA MAHASISWA ====" << endl;
    for (int i = 0; i < jumlahMhs; i++) {
        cout << "Data Mahasiswa ke-" << i+1 << ":" << endl;
        tampilMhs(mhs[i]);
    }
    
    return 0;
}