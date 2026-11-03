#include <iostream>
#include "Doublylist.h"
using namespace std;

int main() {
    List L;
    CreateList(L);
    
    infotype data;
    address P;

    for (int i = 0; i < 4; i++) {
        cout << "masukkan nomor polisi: ";
        cin >> data.nopol;
        cout << "masukkan warna kendaraan: ";
        cin >> data.warna;
        cout << "masukkan tahun kendaraan: ";
        cin >> data.thnBuat;
        
        if (cekDuplikat(L, data.nopol)) {
            cout << "nomor polisi sudah terdaftar\n\n";
        } else {
            P = alokasi(data);
            insertFirst(L, P); 
            cout << endl;
        }
    }
    
    printInfo(L);
    
    // Tambahan untuk soal no 2
    cout << "\n";
    infotype dataCari;
    cout << "Masukkan Nomor Polisi yang dicari: ";
    cin >> dataCari.nopol;
    cout << "\n";
    
    address ketemu = findElm(L, dataCari);
    
    if (ketemu != Nil) {
        cout << "Nomor Polisi \t: " << ketemu->info.nopol << endl;
        cout << "Warna \t\t: " << ketemu->info.warna << endl;
        cout << "Tahun \t\t: " << ketemu->info.thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }
    
    return 0;
}