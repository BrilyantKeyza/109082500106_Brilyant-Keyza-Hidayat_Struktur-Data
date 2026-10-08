#include <iostream>
#include "mahasiswa.h"
using namespace std;

void inputMhs(mahasiswa &m) {
    cout << "Input nama = ";
    cin >> m.nama;
    cout << "Input nim = ";
    cin >> m.nim;
    cout << "Input nilai uts = ";
    cin >> m.uts;
    cout << "Input nilai uas = ";
    cin >> m.uas;
    cout << "Input nilai tugas = ";
    cin >> m.tugas;
}

float nilaiAkhir(mahasiswa m) {
    return float(0.3 * m.uts) + (0.4 * m.uas) + (0.3 * m.tugas);
}