# <h1 align="center">Laporan Praktikum Modul 3 ABSTRACT DATA TYPE (ADT)</h1>
<p align="center">Brilyant Keyza Hidayat - 109082500106</p>

## Dasar Teori


### A. Pengertian Abstract Data Type (ADT)<br/>
Abstract Data Type (ADT) adalah sebuah TYPE data beserta sekumpulan PRIMITIF (operasi dasar) yang dikenakan terhadap TYPE tersebut. Dalam pendefinisian sebuah ADT yang lengkap, disertakan pula definisi invarian dari TYPE dan aksioma yang berlaku, sehingga ADT pada dasarnya merupakan sebuah definisi STATIK. Konsep utama dari ADT adalah menyembunyikan detail implementasi dari pengguna, sehingga programmer hanya berfokus pada antarmuka operasi data tersebut tanpa perlu mengetahui bagaimana struktur memori internalnya bekerja [1]. Definisi type dari sebuah ADT juga bersifat fleksibel dan dapat mengandung definisi ADT lain di dalamnya, misalnya ADT Waktu yang disusun oleh ADT JAM dan ADT DATE, atau ADT Garis yang terdiri dari dua buah ADT POINT.

### B. Pengelompokan Primitif ADT<br/>
Ketika diterjemahkan ke dalam bahasa C atau C++, TYPE umumnya direalisasikan menggunakan `struct`, sementara PRIMITIF direalisasikan ke dalam konteks prosedural berupa fungsi atau prosedur. PRIMITIF tersebut dikelompokkan ke dalam beberapa fungsi dasar, yaitu:
#### 1. Konstruktor/Kreator: Berfungsi sebagai pembentuk nilai type, di mana semua objek variabel harus melaluinya (umumnya diawali nama Make).
#### 2. Selector: Digunakan untuk mengakses tipe komponen (biasanya diawali nama Get).
#### 3. Prosedur Pengubah: Digunakan untuk memodifikasi atau mengubah nilai komponen.
#### 4. Validator: Digunakan untuk mengetes apakah pembentukan tipe sudah sesuai dengan batasan aturan.
#### 5. Destruktor/Dealokator: Berfungsi untuk menghancurkan nilai objek dan membersihkan memori penyimpanannya.
#### 6. Fungsi Tambahan: Meliputi operasi Baca/Tulis (untuk input/output device), Operator Relasional (membandingkan lebih besar, lebih kecil, dll), Aritmatika, dan Konversi tipe.

### C. Implementasi Modularitas ADT<br/>
Untuk menerapkan konsep ADT dengan baik dan terstruktur, struktur kode program tidak disatukan di dalam satu halaman, melainkan dipisah ke dalam file atau modul yang berbeda. Implementasi standar dipecah menjadi:
#### 1. Modul Spesifikasi (File `.h`): Berisi definisi type dan deklarasi header dari primitif fungsi/prosedur, meliputi domain, range, prekondisi, hingga spesifikasi initial state dan final state.
#### 2. Modul Body/Realisasi (File `.cpp`): Berisi realisasi berupa kode program aktual (algoritma kerja) dari primitif yang telah dideklarasikan di modul spesifikasi.
#### 3. Program Utama (File `main.cpp`): Berfungsi sebagai antarmuka program utama (driver) yang memanggil dan menjalankan modul-modul ADT tersebut. 

## Guided 

### 1. Mahasiswa
#### mahasiswa.h

```C++
#ifndef MAHASISWA_H_INCLUDED 
#define MAHASISWA_H_INCLUDED

struct mahasiswa
{
    char nim[10];
    int nilai1, nilai2;
};

void inputMhs (mahasiswa &m);
float rata2 (mahasiswa m);
#endif //MAHASISWA_H_INCLUDED

```
#### mahasiswa.cpp
```C++
#include <iostream>
#include "mahasiswa.h"
using namespace std;

void inputMhs(mahasiswa &m) {
    cout << "Input nim = ";
    cin >> (m).nim;
    cout << "Input nilai 1 = ";
    cin >> (m).nilai1;
    cout << "Input nilai 2 = ";
    cin >> (m).nilai2;
}

float rata2(mahasiswa m) {
    return float(m.nilai1 + m.nilai2)/2;
}
```
#### main.cpp

```C++
#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main() {
    mahasiswa mhs;
    inputMhs (mhs);
    cout << "rata-rata = " << rata2 (mhs);
    return 0;
}
```
Program ini merupakan contoh penerapan dasar dari konsep Abstract Data Type (ADT) dalam bahasa C++ yang berfungsi untuk menyimpan dan mengolah data seorang mahasiswa secara terstruktur dan modular. Secara keseluruhan, program ini bekerja dengan memecah kode ke dalam tiga bagian terpisah yaitu pendefinisian kerangka tipe data (struct) dan fungsi di file `mahasiswa.h`, logika operasional pengisian data dan perhitungan rumus di file `mahasiswa.cpp`, serta pusat eksekusi di program utama—yang bertujuan untuk meminta pengguna memasukkan NIM beserta dua buah nilai, kemudian memprosesnya dan langsung mencetak hasil nilai rata-rata dari kedua nilai tersebut ke layar.

## Unguided 

### 1. Buat program yang dapat menyimpan data mahasiswa (max. 10) ke dalam sebuah array dengan field nama, nim, uts, uas, tugas, dan nilai akhir. Nilai akhir diperoleh dari FUNGSI dengan rumus `0.3 * uts + 0.4 * uas + 0.3 * tugas`.

### Code: 

`1. mahasiswa.h`

```C++
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
void tampilMhs (mahasiswa m);

#endif //MAHASISWA_H_INCLUDED
```
`2. mahasiswa.cpp`

```C++
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

void tampilMhs(mahasiswa m) {
    cout << "Nama: " << m.nama << endl;
    cout << "NIM: " << m.nim << endl;
    cout << "Nilai UTS: " << m.uts << endl;
    cout << "Nilai UAS: " << m.uas << endl;
    cout << "Nilai Tugas: " << m.tugas << endl;
    cout << "Nilai Akhir: " << m.nilaiAkhir << endl;
    cout << "-----------------------------------" << endl;
}
```
`3. main.cpp`
```C++
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
```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-3_Modul-3/Output/output-unguided-1.1.png?raw=true)
![Screenshot Output Unguided 1_1](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-3_Modul-3/Output/output-unguided-1.2.png?raw=true)


##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-3_Modul-3/Output/output-unguided-1.3.png?raw=true)

Program ini menggunakan struktur array satu dimensi bertipe struct yang berfungsi untuk menyimpan dan memproses sekumpulan data mahasiswa secara modular.  Struktur kodenya dipisahkan menjadi file `mahasiswa.h`, `mahasiswa.cpp` dan `main.cpp`

Cara kerjanya dengan menyiapkan berupa array berkapasitas maksimal 10 elemen dan memastikan input batasan data dari pengguna tidak melebihi kapasitas tersebut. Melalui proses perulangan, setelah itu program meminta pengguna mengisi rincian data mahasiswa yang kemudian ditangkap oleh prosedur dengan memanfaatkan parameter reference, lalu nilai akhirnya langsung dikalkulasi menggunakan fungsi berumus `0.3*uts + 0.4*uas + 0.3*tugas`. Pada tahap akhir, program menjalankan perulangan kembali untuk mencetak seluruh nilai akhir mahasiswa.

### 2. Buatlah ADT pelajaran sebagai berikut di dalam file “pelajaran.h”:
```
Type pelajaran <
namaMapel : string
kodeMapel : string
>
function create_pelajaran( namapel : string,
kodepel : string ) → pelajaran
procedure tampil_pelajaran( input pel : pelajaran )
```
### Buatlah implementasi ADT pelajaran pada file “pelajaran.cpp”
### Cobalah hasil implementasi ADT pada file “main.cpp”
```C++
using namespace std;
int main(){
string namapel = "Struktur Data";
string kodepel = "STD";
pelajaran pel = create_pelajaran(namapel,kodepel);
tampil_pelajaran(pel);
return 0;
}
```

### Code:

`1. pelajaran.h`
```C++
#ifndef PELAJARAN_H_INCLUDED 
#define PELAJARAN_H_INCLUDED
#include <string>
using namespace std;

struct pelajaran
{
    string namamapel;
    string kodemapel;
};

pelajaran create_pelajaran(string namapel, string kodepel);
void tampil_pelajaran(pelajaran pel);

#endif //PELAJARAN_H_INCLUDED
```

`2. pelajaran.cpp`
```C++
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
```

`3. main.cpp`
```C++
#include <iostream>
#include <string>
#include "pelajaran.h"
using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";
    
    pelajaran pel = create_pelajaran(namapel, kodepel);
    
    tampil_pelajaran(pel);
    
    return 0;
}
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-3_Modul-3/Output/output-unguided-2.1.png?raw=true)


Program ini merancang tipe data baru bernama pelajaran yang menyimpan informasi berupa nama dan kode mata pelajaran. Struktur kodenya dipisahkan menjadi file `pelajaran.h`, `pelajaran.cpp` dan `main.cpp` Cara kerjanya berfokus pada konsep fungsi konstruktor atau pembentuk tipe data. Pada program utama, data teks berupa "Struktur Data" dan "STD" dikirim menuju fungsi `create_pelajaran`. Fungsi tersebut kemudian bertugas merakit sebuah objek struct baru dengan memasukkan teks tersebut ke dalam atributnya masing-masing, lalu mengembalikan objek yang sudah berisi data utuh tersebut ke program utama. Terakhir, objek yang telah terbentuk ini dilempar ke dalam prosedur `tampil_pelajaran` agar isinya dapat dicetak.

### 3. Buatlah program dengan ketentuan :
- 2 buah array 2D integer berukuran 3x3 dan 2 buah pointer integer
- fungsi/prosedur yang menampilkan isi sebuah array integer 2D
- fungsi/prosedur yang akan menukarkan isi dari 2 array integer 2D pada posisi tertentu
- fungsi/prosedur yang akan menukarkan isi dari variabel yang ditunjuk oleh 2 buah
pointer

### Code: 
`operasi.h`
```C++
#ifndef OPERASI_H_INCLUDED
#define OPERASI_H_INCLUDED

void tampilArray(int arr[3][3]);

void tukarIsiArray(int arr1[3][3], int arr2[3][3], int baris, int kolom);

void tukarPointer(int *pointer1, int *pointer2);

#endif // OPERASI_H_INCLUDED
```

`operasi.cpp`
```C++
#include <iostream>
#include "operasi.h"
using namespace std;

void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

void tukarIsiArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    if (baris >= 0 && baris < 3 && kolom >= 0 && kolom < 3) {
        int temp = arr1[baris][kolom];
        arr1[baris][kolom] = arr2[baris][kolom];
        arr2[baris][kolom] = temp;
    } else {
        cout << "Posisi di luar batas array!" << endl;
    }
}

void tukarPointer(int *pointer1, int *pointer2) {
    int temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
}
```

`main.cpp`
```C++
#include <iostream>
#include "operasi.h"
using namespace std;

int main() {

    int arrayA[3][3] = { {1, 2, 3}, {3, 2, 1}, {1, 2, 3} };
    int arrayB[3][3] = { {6, 3, 9}, {9, 3, 6}, {6, 3, 9} };
    
    int nilaiX = 10;
    int nilaiY = 99;
    int *p1 = &nilaiX;
    int *p2 = &nilaiY;

    cout << "==== Sebelum ditukar ====" << endl;
    cout << "Array A:" << endl;
    tampilArray(arrayA);
    cout << "Array B:" << endl;
    tampilArray(arrayB);

    tukarIsiArray(arrayA, arrayB, 1, 1);

    cout << "\n==== Setelah index [1][1] ditukar ====" << endl;
    cout << "Array A:" << endl;
    tampilArray(arrayA);
    cout << "Array B:" << endl;
    tampilArray(arrayB);

    cout << "\n==== Pointer sebelum ditukar ====" << endl;
    cout << "Nilai Pointer 1: " << *p1 << endl;
    cout << "Nilai Pointer 2: " << *p2 << endl;

    tukarPointer(p1, p2);

    cout << "\n==== Pointer setelah ditukar ====" << endl;
    cout << "Nilai Pointer 1: " << *p1 << endl;
    cout << "Nilai Pointer 2: " << *p2 << endl;

    return 0;
}
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-3_Modul-3/Output/output-unguided-3.1.png?raw=true)

##### Output 2
![Screenshot Output Unguided 3_2](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-3_Modul-3/Output/output-unguided-3.2.png?raw=true)

Program ini merupakan implementasi dari konsep modularitas kode yang berfokus pada teknik pengiriman parameter dan manipulasi memori menggunakan array dua dimensi berukuran 3x3 serta pointer. Struktur kodenya dipisahkan menjadi file `pelajaran.h`, `pelajaran.cpp` dan `main.cpp`.

Cara kerjanya terbagi menjadi dua demonstrasi utama. Pada tahap pertama, program menampilkan isi dari dua buah array 2D ke layar, lalu menukar nilai elemen pada posisi spesifik (dalam hal ini indeks baris 1 dan kolom 1) di antara kedua array tersebut menggunakan variabel bantuan sementara atau temp. Pada tahap kedua, program mendemonstrasikan pertukaran nilai dua buah variabel secara langsung dari alamat memorinya dengan memanfaatkan operator dereferensi (*) pada pointer. Program ini juga menambahkan fitur validasi indeks batas array untuk mencegah terjadinya kesalahan akses memori saat penukaran data berlangsung.

## Kesimpulan
Kesimpulannya pada praktikum Modul 3 yaitu pemahaman terkait Abstract Data Type (ADT) itu sangat penting karena memberikan landasan mendalam mengenai cara menyusun struktur kode yang rapi dan terorganisir. Penerapan ADT ini sangat bergantung pada pendefinisian tipe data bentukan (struct), pembuatan fungsi dan prosedur sebagai operasi dasar (primitif), serta teknik modularitas yang memisahkan antara file header (`.h`) dan file realisasi (`.cpp`). Penggunaan struct dan fungsi sangat diperlukan untuk mengelola dan merakit sekumpulan informasi secara modular, seperti pada soal penyimpanan array data mahasiswa beserta perhitungan nilai akhirnya, dan soal pembentukan objek data mata pelajaran menggunakan fungsi konstruktor. Sementara itu, pemahaman mengenai array dua dimensi dan penggunaan pointer juga sangat efektif untuk memecahkan soal manipulasi alamat memori dan penukaran elemen data secara langsung. Secara keseluruhan, perpaduan teknik abstraksi dan modularitas kode ini sangat berguna dan efektif untuk membangun program menjadi lebih terstruktur, mudah dipelihara, dan efisien.

## Referensi
[1] Hidayat, T., & Muttaqin, M. (2020). "Penerapan Abstract Data Type (ADT) pada Struktur Data Berbasis Object Oriented Programming". Jurnal Informatika dan Rekayasa Perangkat Lunak.
<br>[2] Modul 3: Modul 3 ABSTRACT DATA TYPE (ADT). Modul Praktikum Struktur Data. (Referensi Modul).
