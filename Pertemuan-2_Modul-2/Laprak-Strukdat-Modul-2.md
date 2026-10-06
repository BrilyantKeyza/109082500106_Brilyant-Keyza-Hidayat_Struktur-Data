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
// Alamat
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

### 5. Pointer Array

```C++
// Pointer Array 1
#include <iostream>
using namespace std;

int main() {
    char arr[6];

    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';
    arr[3] = 'd';
    arr[4] = 'e';
    arr[5] = 'f';

    cout << arr[3] << endl; //value
    cout << &(arr[4]) << endl; // address

    return 0;
}
```
Program ini merupakan hubungan antara array dan alamat memori yang berfungsi untuk melihat isi data sekaligus letak penyimpanannya di dalam sistem komputer. Dengan mendeklarasikan sebuah array berisikan karakter, mengisi masing-masing elemennya, lalu mencetak nilai dari indeks ke-3 dan alamat memori dari indeks ke-4 menggunakan operator `&`.

### 6. Pointer

```C++
// Pointer 1
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
Program ini adalah program penerapan variabel pointer yang berfungsi untuk menunjuk dan menyimpan alamat memori dari variabel lain. Dengan cara menyimpan alamat `variabel` angka ke dalam variabel `pointer`, lalu mencetak nilai asli dan alamat memorinya secara bersamaan untuk menunjukkan keterhubungan langsung antara sebuah data dengan pointernya.

### 7. Function

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

### 8. Prosedure

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

### 9. Call By Value, Pointer, Reference

```C++
// Call By Value
#include <iostream>
using namespace std;

void tukar(int x, int y) {
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

    tukar(a, b);

    cout << "\nSetelah ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//Call By Pointer
#include <iostream>
using namespace std;

void tukar(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 4;
    int b = 6;

    cout << "Sebelum ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    tukar(&a, &b);

    cout << "\nSetelah ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//Call By Reference
#include <iostream>
using namespace std;

void tukar(int &x, int &y) {
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

    tukar(a, b);

    cout << "\nSetelah ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
```
Program Call By Value adalah contoh metode pemanggilan fungsi yang melewatkan parameter hanya dengan menyalin nilainya saja. Cara kerjanya, prosedur `tukar` memanipulasi data salinan tersebut, sehingga angka asli pada variabel `a` dan `b` di program utama tidak akan ikut berubah atau tertukar.

Program Call By Pointer merupakan contoh pemanggilan fungsi yang mengirimkan parameter berupa alamat memori menggunakan pointer. Dengan cara menerima alamat asli memori dari variabel `a` dan `b`, prosedur `tukar` dapat mengakses dan berhasil menukar nilai asli dari kedua variabel tersebut secara langsung di dalam program utama.

Program Call By Reference adalah penerapan pemanggilan fungsi yang memanipulasi variabel asli secara langsung melalui sebuah alias referensi menggunakan simbol `&`. Cara kerjanya sama seperti pointer yang berhasil menukar angka asli `a` dan `b`, namun dengan penulisan sintaks pemanggilan yang lebih ringkas tanpa perlu mengirimkan lambang alamat memori secara eksplisit.


## Unguided 

### 1. Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3x3. 

```C++
#include <iostream>
using namespace std;

int main() {
    // Mendeklarasikan variable
    int matriksA[3][3], matriksB[3][3];
    int tambah[3][3], kurang[3][3], kali[3][3];

    
    cout << "Input Matriks A (3x3)";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemen A[" << i << "][" << j << "]: ";
            cin >> matriksA[i][j];
        }
    }

    cout << "\nInput Matriks B (3x3)";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemen B[" << i << "][" << j << "]: ";
            cin >> matriksB[i][j];
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
           
            tambah[i][j] = matriksA[i][j] + matriksB[i][j];
            kurang[i][j] = matriksA[i][j] - matriksB[i][j];
            
            kali[i][j] = 0; 
            for (int k = 0; k < 3; k++) {
                kali[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    cout << "\nHasil Penjumlahan\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tambah[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nHasil Pengurangan\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << kurang[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nHasil Perkalian\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << kali[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-2_Modul-2/Output/output-unguided-1.1.png?raw=true)
![Screenshot Output Unguided 1_1](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-2_Modul-2/Output/output-unguided-1.2.png?raw=true)


##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 1 

### 2. Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat menukar nilai dari 3 variabel.

```C++
#include <iostream>
using namespace std;

void tukarPointer(int *x, int *y, int *z) {
    int temp;

    temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

void tukarReference(int &x, int &y, int &z) {
    int temp;

    temp = x;
    x = y;
    y = z;
    z = temp;
}

int main() {
    int a = 4;
    int b = 6;
    int c = 8;

    cout << "Sebelum ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    tukarPointer(&a, &b, &c);

    cout << "\nSetelah ditukar Pointer: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    tukarReference(a, b, c);

    cout << "\nSetelah ditukar Reference: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-2_Modul-2/Output/output-unguided-2.png?raw=true)

penjelasan unguided 2

### 3. Diketahui sebuah array 1 dimensi sebagai berikut : arrA = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55} Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata – rata dari array tersebut! Gunakan function cariMinimum() untuk mencari nilai minimum dan function cariMaksimum() untuk mencari nilai maksimum, serta gunakan prosedur hitungRataRata() untuk menghitung nilai rata – rata! Buat program menggunakan menu switch-case seperti berikut ini : 
### --- Menu Program Array ---  
#### • Tampilkan isi array  
#### • cari nilai maksimum 
#### • cari nilai minimum  
#### • Hitung nilai rata - rata 
 

```C++
#include <iostream>
using namespace std;

// Fungsi untuk mencari nilai maksimum
int cariMaksimum(int arr[], int ukuranArray) {
    int max = arr[0];
    for (int i = 1; i < ukuranArray; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}

int cariMinimum(int arr[], int ukuranArray) {
    int min = arr[0];
    for (int i = 1; i < ukuranArray; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void hitungRataRata(int arr[], int ukuranArray) {
    float total = 0;
    for (int i = 0; i < ukuranArray; i++) {
        total += arr[i];
    }
    float rataRata = total / ukuranArray;
    cout << "Nilai rata-rata array adalah: " << rataRata << endl;
}

int main() {
    int arrA[10] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};
    int ukuranArray = 10;
    int pilihan;

    do {
        cout << "\n==== Menu Program Array ====" << endl;
        cout << "1. Tampilkan isi array" << endl;
        cout << "2. Cari nilai maksimum" << endl;
        cout << "3. Cari nilai minimum" << endl;
        cout << "4. Hitung nilai rata-rata" << endl;
        cout << "5. Keluar program" << endl;
        cout << "Masukkan pilihan (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Isi array arrA: ";
                for (int i = 0; i < ukuranArray; i++) {
                    cout << arrA[i] << " ";
                }
                cout << endl;
                break;
            case 2:
                cout << "Nilai maksimum array adalah: " << cariMaksimum(arrA, ukuranArray) << endl;
                break;
            case 3:
                cout << "Nilai minimum array adalah: " << cariMinimum(arrA, ukuranArray) << endl;
                break;
            case 4:
                hitungRataRata(arrA, ukuranArray);
                break;
            case 5:
                cout << "Keluar dari program. Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 5); 

    return 0;
}
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
