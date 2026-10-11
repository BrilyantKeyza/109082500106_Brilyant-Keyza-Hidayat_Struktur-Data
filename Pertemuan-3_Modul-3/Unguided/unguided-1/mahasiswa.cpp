#include <iostream>
#include "mahasiswa.h"
using namespace std;

void inputMhs(mahasiswa &m) {
    cout << "Input Nama : ";
    cin >> m.nama;
    cout << "Input NIM : ";
    cin >> m.nim;
    cout << "Input Nilai UTS : ";
    cin >> m.uts;
    cout << "Input Nilai UAS : ";
    cin >> m.uas;
    cout << "Input Nilai Tugas : ";
    cin >> m.tugas;
}

float nilaiAkhir(mahasiswa m) {
    return float(0.3 * m.uts) + (0.4 * m.uas) + (0.3 * m.tugas);
}

// Tambahan: Realisasi fungsi untuk menampilkan seluruh data
void tampilMhs(mahasiswa m) {
    cout << "Nama: " << m.nama << endl;
    cout << "NIM: " << m.nim << endl;
    cout << "Nilai UTS: " << m.uts << endl;
    cout << "Nilai UAS: " << m.uas << endl;
    cout << "Nilai Tugas: " << m.tugas << endl;
    cout << "Nilai Akhir: " << m.nilaiAkhir << endl;
    cout << "-----------------------------------" << endl;
}