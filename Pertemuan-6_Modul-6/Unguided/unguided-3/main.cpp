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

    // Tambahan untuk soal no 3
    cout << "\n";
    infotype hapusData;
    cout << "Masukkan Nomor Polisi yang akan dihapus: ";
    cin >> hapusData.nopol;
    
    address nodeHapus = findElm(L, hapusData);
    
    if (nodeHapus != Nil) {
        address P_del;
        if (nodeHapus == L.First) {
            deleteFirst(L, P_del);
        } else if (nodeHapus == L.Last) {
            deleteLast(L, P_del);
        } else {
            address Prec = nodeHapus->prev;
            deleteAfter(Prec, P_del);
        }
        
        dealokasi(P_del);
        cout << "Data dengan nomor polisi " << hapusData.nopol << " berhasil dihapus.\n\n";
    } else {
        cout << "Data tidak ditemukan.\n\n";
    }
    
    printInfo(L);
    
    return 0;
}