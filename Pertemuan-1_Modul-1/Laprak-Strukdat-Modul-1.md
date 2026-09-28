# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Brilyant Keyza Hidayat - 109082500106</p>

## Dasar Teori
Bahasa pemrograman C++ diciptakan oleh Bjarne Stroustrup pada awal tahun 1980-an di AT&T Bell Laboratories sebagai bentuk penyempurnaan dari bahasa C ANSI dengan menambahkan fasilitas kelas (class) [2]. Karena kapabilitasnya yang sangat tinggi, C++ menjadi bahasa fundamental yang diandalkan untuk mendukung paradigma pemrograman berorientasi objek serta memberikan kontrol manajemen memori yang sangat efisien dalam pengembangan perangkat lunak [1]. Simbol ++ pada namanya diambil dari operator increment dalam bahasa C, yang merepresentasikan bahwa bahasa ini merupakan versi yang jauh lebih canggih dari pendahulunya [2].

### A. Struktur Program dan IDE<br/>
Secara struktural, kode program C++ tersusun atas deklarasi pustaka (library), fungsi utama `main()`, serta sekumpulan pernyataan (statement) yang wajib diakhiri dengan tanda titik koma (;) [2]. Dalam proses pengembangannya, programmer umumnya menggunakan kakas Integrated Development Environment (IDE) seperti Code::Blocks, yaitu perangkat lunak free, open-source, dan cross-platform yang memfasilitasi penulisan sintaks, pengelolaan proyek, kompilasi, hingga pelacakan error secara terintegrasi dan praktis [2].

### B. Tipe Data, Variabel, dan Operator<br/>
Data dalam program diklasifikasikan ke dalam lima tipe dasar, yaitu bilangan bulat `int`, bilangan pecahan `float`, `double`, karakter `char`, dan tak-bertipe, yang dapat disimpan dalam variabel berisikan nilai dinamis ataupun konstanta yang nilainya tetap [2]. Pemahaman yang kuat terhadap pemilihan tipe data dan manipulasi operator komputasi (aritmatika, logika, penugasan, dan unary) sangatlah krusial, karena berdampak langsung pada optimalisasi alokasi memori dan kecepatan eksekusi algoritma sebuah program [1]. Pengolahan informasi tersebut kemudian dikelola menggunakan fungsi `cin` atau `getchar()` untuk interaksi masukan (input), serta `cout` untuk mencetak keluaran (output) ke layar komputer [2].

### C. Struktur Kontrol dan Tipe Data Bentukan<br/>
C++ menyediakan struktur kontrol berupa fungsi kondisional dan perulangan. Pengambilan keputusan logika dieksekusi melalui pernyataan `if`, `if-else`, dan `switch` untuk menentukan blok kode mana yang berjalan berdasarkan kondisi benar atau salah [2]. Sementara itu, untuk mengefisienkan penulisan program, pengeksekusian sub-program yang berulang secara otomatis dilakukan menggunakan perintah `for`, `while`, dan `do while`, di mana aturan terpentingnya adalah wajib memiliki batasan atau kondisi henti [2]. Selain mengontrol alur program, fundamental C++ juga memfasilitasi pengorganisasian data melalui pembuatan tipe data bentukan bernama struktur (struct) [2]. Struktur ini berfungsi untuk mengelompokkan beberapa variabel (field) yang bisa memiliki tipe berlainan ke dalam satu kesatuan nama [2].


## Unguided 

### 1. Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```C++
#include <iostream>
using namespace std;

int main() {
    float x, y;

    cout << "Masukkan Bilangan Pertama: ";
    cin >> x;
    cout << "Masukkan Bilangan Kedua: ";
    cin >> y;

    cout << "==== Hasil ====" << endl;
    cout << "Penjumlahan: " << x + y << endl;
    cout << "Pengurangan: " << x - y << endl;
    cout << "Perkalian: " << x * y << endl;
    cout << "Pembagian: " << x / y << endl;
}
```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-1_Modul-1/Output/output-unguided-1.1.png?raw=true)


##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-1_Modul-1/Output/output-unguided-1.2.png?raw=true)

Program di atas merupakan program yang berfungsi untuk melakukan operasi hitung matematika dasar hanya dengan menginputkan dua buah angka bilangan real. Setelah itu program akan memproses kedua nilai tersebut dengan penjumlahan, pengurangan, perkalian, dan pembagian bilangan pertama dengan bilangan kedua. Setelah proses perhitungan dilakukan, maka program akan mencetak hasil akhir dari masing-masing operasi penjumlahan, pengurangan, perkalian, dan pembagian tersebut ke layar.

### 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di- input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100.


```C++
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
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-1_Modul-1/Output/output-unguided-2.1.png?raw=true)


##### Output 2
![Screenshot Output Unguided 2_2](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-1_Modul-1/Output/output-unguided-2.2.png?raw=true)

Program di atas berfungsi untuk mengonversi input angka (0-100) menjadi teks tulisan. Program ini bekerja memadukan kondisi if-else, array penyimpan teks, serta operator pembagian (/) dan modulo (%). Angka khusus seperti 0, 10, 11, dan 100 akan dicetak teksnya secara langsung. Sementara untuk angka belasan dan puluhan, program memecah digit angkanya menggunakan operator pembagian dan modulo untuk memanggil teks dari array, lalu merangkainya menjadi kalimat yang utuh. Jika input di luar rentang 0-100, program akan menampilkan pesan tidak valid.

### 3. Buatlah program yang dapat memberikan input dan output sbb.

```C++
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input: ";
    cin >> n;
    cout << "Output: \n";

    for (int baris = 1; baris <= n + 1; baris++) {

        for (int jarak = 1; jarak < baris; jarak++) {
            cout << "  ";
        }

        for (int kiri = n - baris + 1; kiri >= 1; kiri--) {
            cout << kiri << " ";
        }

        cout << "* ";

        for (int kanan = 1; kanan <= n - baris + 1; kanan++) {
            cout << kanan << " ";
        }
        cout << endl;
    }
    
}
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-1_Modul-1/Output/output-unguided-3.1.png?raw=true)


##### Output 2
![Screenshot Output Unguided 3_2](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-1_Modul-1/Output/output-unguided-3.2.png?raw=true)

Program di atas berfungsi untuk mencetak pola angka cermin (mirror) terbalik dengan bintang di tengah berdasarkan input jumlah baris. Program ini bekerja menggunakan struktur perulangan bersarang (nested for). Pada setiap barisnya, program mengeksekusi perintah secara berurutan: mencetak spasi agar pola terdorong ke tengah, mencetak angka menurun di sisi kiri, menyisipkan karakter bintang (*), lalu mencetak angka menaik di sisi kanan. Khusus pada baris terakhir, program hanya mencetak satu buah bintang sebagai penutup ujung bawah pola tersebut

## Kesimpulan
Kesimpulannya pada praktikum Modul 1 yaitu dasar pemrograman C++ itu sangat penting karena memberikan pemahaman mendalam mengenai struktur kode yang efisien. Pemrograman C++ juga sangat bergantung pada penggunaan variabel, operator aritmatika, serta struktur kontrol seperti perulangan (for) dan percabangan (if-else) atau (switch). Penggunaan operator dan if-else sangat diperlukan untuk memanipulasi perhitungan dan mengambil keputusan bersyarat, seperti pada soal kalkulator operasi hitung dasar dan konversi digit angka menjadi bentuk tulisan. Sementara itu, struktur perulangan bersarang (nested for) juga sangat efektif untuk memecahkan soal pencetakan pola cermin (mirror) bertingkat secara presisi. Secara keseluruhan, perpaduan struktur kontrol ini sangat berguna dan efektif untuk membangun program menjadi lebih mudah dan efisien.

## Referensi
[1] Supriyanto, A., & Purnomo, D. (2023). "Analisis Fundamental Bahasa Pemrograman C++ dalam Optimalisasi Struktur Data dan Algoritma". Jurnal Ilmu Komputer dan Informatika (JIKI), 12(2), 45-52.
<br>[2] Modul 1: Code Blocks IDE & Pengenalan Bahasa C++ (Bagian Pertama). Modul Praktikum Struktur Data. (Referensi Modul).
<br>
