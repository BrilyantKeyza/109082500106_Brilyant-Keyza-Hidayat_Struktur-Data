#include <iostream>
#include "pelajaran.h"
using namespace std;

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran p;            
    p.namamapel = namapel;    
    p.kodemapel = kodepel;   
    return p;                 
}

void tampil_pelajaran(pelajaran pel) {
    cout << "Nama pelajaran: " << pel.namamapel << endl;
    cout << "Nilai: " << pel.kodemapel << endl;
}