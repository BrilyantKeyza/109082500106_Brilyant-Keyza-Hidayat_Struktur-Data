#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Masukkan Angka (0-100): ";
    cin >> n;

    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};

    if (n == 0) {
        cout << "nol" << endl;
    }else if (n == 10) {
        cout << "sepuluh" << endl;
    }else if (n == 100) {
        cout << "seratus" << endl;
    }else if (n == 11) {
        cout << "sebelas" << endl;
    }
    
    else if (n < 20) {
        int sisa = n % 10;
        cout << satuan[sisa] << "belas" << endl;
    }
    
    else if (n < 100) {
        int puluhan = n / 10;
        int sisa = n % 10;
        
        if (sisa == 0) {
            cout << satuan[puluhan] << " puluh " << endl;
        }else {
            cout << satuan[puluhan] << " puluh " << satuan[sisa] << endl;
        }
    }

    else {
        cout << "Angka tidak valid!" << endl;
    }
}