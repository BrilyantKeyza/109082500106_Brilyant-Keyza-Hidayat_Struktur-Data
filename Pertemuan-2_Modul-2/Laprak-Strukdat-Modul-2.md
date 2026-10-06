# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Muhammad Dhimas Hafizh Fathurrahman - 2311102151</p>

## Dasar Teori
isi dengan penjelasan dasar teori disertai referensi jurnal (gunakan kurung siku [] untuk pernyataan yang mengambil refernsi dari jurnal).
contoh :
Linked list atau yang disebut juga senarai berantai adalah Salah satu bentuk struktur data yang berisi kumpulan data yang tersusun secara sekuensial, saling bersambungan, dinamis, dan terbatas[1]. Linked list terdiri dari sejumlah node atau simpul yang dihubungkan secara linier dengan bantuan pointer.

### A. ...<br/>
...
#### 1. ...
#### 2. ...
#### 3. ...

### B. ...<br/>
...
#### 1. ...
#### 2. ...
#### 3. ...

## Guided 

### 1. Array 1

```C++
// Array 1 Dimensi
#include <iostream>
using namespace std;

int main() {
    int nilai[5];

    nilai[0] = 80;
    nilai[1] = 75;
    nilai[2] = 90;
    nilai[3] = 85;
    nilai[4] = 95;

    for (int i = 0; i < 5; i++) {
        cout << "Nilai ke-" << i + 1 << " = " << nilai[i] << endl;
    }
    return 0;
}
```
Program ini adalah implementasi dasar array 1 dimensi yang berfungsi untuk menampung sekumpulan data angka di dalam satu variabel. Cara kerjanya adalah dengan mendeklarasikan array berkapasitas lima elemen, mengisi setiap indeksnya secara manual, lalu menggunakan perulangan `for` untuk mencetak seluruh nilai tersebut ke layar secara berurutan.

### 2. Array 2 Dimensi

```C++
// Array 2 Dimensi
#include <iostream>
using namespace std;

int main() {
    int nilai[3][3] = {
        {80, 75, 90},
        {85, 90, 88},
        {70, 80, 85}
    };

    // Print array 2 dimensi
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << nilai[i][j] << " ";
        }

        cout << endl;
    }
    cout << endl;
    cout << nilai[1][2] << endl;
    return 0;
}
```
Program ini merupakan penggunaan array 2 dimensi yang berfungsi untuk menyimpan sekumpulan data dalam bentuk baris dan kolom menyerupai tabel matriks. Cara kerjanya adalah dengan menginisialisasi isi array berukuran 3x3 secara langsung, menggunakan perulangan bersarang (nested loop) untuk mencetak seluruh elemennya ke layar, lalu  mencetak satu nilai spesifik yang ditarik dari indeks baris ke-1 dan kolom ke-2.

### 3. Array 3 Dimensi

```C++
// Array 3 Dimensi
#include <iostream>
using namespace std;

int main() {
    int data[2][2][3] = {
        {
            {10, 20, 30},
            {40, 50, 60},
        },
        {
            {70, 80, 90},
            {100, 110, 120},
        }
    };

     cout << data[0][1][2] << endl;
     return 0;
}
```
Program ini merupakan implementasi array 3 dimensi  yang berfungsi untuk menyimpan sekumpulan data berlapis yang memiliki tiga tingkat indeks. Cara kerjanya adalah dengan menginisialisasi nilai array berukuran 2x2x3 secara langsung di dalam kode, lalu mengakses dan mencetak satu elemen spesifik ke layar yang ditarik dari indeks blok ke-0, baris ke-1, dan kolom ke-2.

### 4. Alamat/Address

```C++
// Pointer 1 alamat
#include <iostream>
using namespace std;
int main() {
    int angka = 100;

    cout << "Nilai Angka: " << angka << endl;
    cout << "Alamat Angka: " << &angka << endl;

    return 0;
}
```
Program ini adalah dasar pengenalan alamat memori, cara kerjanya adalah dengan mendeklarasikan variabel angka bernilai 100, lalu mencetak nilai tersebut sekaligus menampilkan alamat memori aslinya dengan menggunakan operator address-of `&` di depan nama variabelnya.

### 5. Pointer

```C++
// Pointer 2
#include <iostream>
using namespace std;
int main() {
    int angka = 100;

    int *pointer;

    pointer = &angka;

    cout << "Nilai Angka: " << angka << endl; //100
    cout << "Alamat Angka: " << &angka << endl; //address
    cout << "Isi Pointer: " << pointer << endl; // address angka
    cout << "Nilai dari Pointer: " << &pointer << endl; // value angka(100)

    return 0;
}
```
penjelasan singkat guided 5

### 6. Function

```C++
// Function
#include <iostream>
using namespace std;

int maks3(int a, int b, int c) {
    int temp_max = a;
    if (b > temp_max)
        temp_max = b;

    if (c > temp_max)
        temp_max = c;

    return temp_max;
}

int main() {
    int x, y, z;

    cout << "Masukkan nilai 1: ";
    cin >> x;

    cout << "Masukkan nilai 2: ";
    cin >> y;

    cout << "Masukkan nilai 3: ";
    cin >> z;

    cout << "Nilai maksimum = " << maks3(x, y, z);

    return 0;
}
```
Program ini menggunakan function yang bertujuan untuk mencari dan mengembalikan nilai terbesar dari tiga buah bilangan yang diinputkan. Cara kerjanya adalah dengan meminta pengguna memasukkan tiga angka, lalu meneruskannya sebagai parameter ke dalam fungsi `maks3` untuk saling dibandingkan, dan hasil nilai tertingginya akan dikembalikan ke program utama untuk dicetak.

### 7. Prosedure

```C++
// Procedure
#include <iostream>
using namespace std;

void sapa() {
    cout << "Selamat data di praktikum Struktur Data" << endl;
}

int main() {
    sapa();
    return 0;
}
```
Program ini merupakan program penggunaan prosedure yang bertugas menjalankan suatu perintah tanpa mengembalikan nilai balikan apapun. Cara kerjanya adalah dengan mendefinisikan sebuah prosedur bernama sapa yang berisi perintah untuk mencetak teks sapaan, lalu program utama mengeksekusinya dengan memanggil nama prosedur tersebut.

### 8. Call By Value, Pointer, Reference

```C++
// Call By Value
#include <iostream>
using namespace std;

void tukarValue(int x, int y) {
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 4;
    int b = 6;

    cout << "Sebelum ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    tukarValue(a, b);

    cout << "\nSetelah ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
```
penjelasan singkat guided 3

### 9. Array 3 Dimensi

```C++
source code guided 9
```
penjelasan singkat guided 3

## Unguided 

### 1. (isi dengan soal unguided 1)

```C++
source code unguided 1
```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)


##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 1 

### 2. (isi dengan soal unguided 2)

```C++
source code unguided 2
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)


##### Output 2
![Screenshot Output Unguided 2_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 2

### 3. (isi dengan soal unguided 3)

```C++
source code unguided 3
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)


##### Output 2
![Screenshot Output Unguided 3_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 3

## Kesimpulan
...

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
