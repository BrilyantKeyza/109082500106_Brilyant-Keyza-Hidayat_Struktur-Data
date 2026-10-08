#ifndef MAHASISWA_H_INCLUDED 
#define MAHASISWA_H_INCLUDED
#include <string>
using namespace std;

struct mahasiswa
{
    string nama;
    char nim[10];
    float uts, uas, tugas, nilaiAkhir;
};

void inputMhs (mahasiswa &m);
float nilaiAkhir (mahasiswa m);
#endif //MAHASISWA_H_INCLUDED
