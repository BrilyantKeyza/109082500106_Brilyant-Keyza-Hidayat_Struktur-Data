# <h1 align="center">Laporan Praktikum Modul 4 - SINGLY LINKED LIST (BAGIAN PERTAMA)</h1>
<p align="center">Brilyant Keyza Hidayat - 109082500106</p>

## Dasar Teori

### A. Konsep Dasar Linked List<br/>
Linked list (atau senarai berantai) merupakan salah satu bentuk struktur data yang merepresentasikan penyimpanan berupa serangkaian elemen data yang saling berkaitan secara fleksibel. Berbeda dengan array yang ukurannya bersifat statis dan ditetapkan sejak awal, linked list diimplementasikan menggunakan pointer dinamis sehingga ukurannya dapat tumbuh dan mengerut sesuai dengan kebutuhan program pada saat berjalan. Penggunaan pointer pada linked list memberikan keuntungan dalam optimalisasi alokasi memori secara dinamis, karena ruang memori hanya diciptakan dan digunakan saat ada penambahan simpul baru, sehingga mencegah terjadinya pemborosan alokasi blok memori kosong yang sering terjadi pada array [1].

### B. Singly Linked List dan Komponennya<br/>
Singly Linked List adalah model Tipe Data Abstrak (ADT) linked list yang memiliki karakteristik dasar hanya memiliki satu arah pointer penunjuk (forward). Di dalam struktur data ini, setiap simpul (node) terdiri dari dua komponen utama:
- Data: Merupakan ruang penyimpan informasi utama, yang dapat berbentuk data tunggal (seperti integer atau string) maupun data majemuk yang tergabung dalam sebuah record.
- Suksesor (Next): Merupakan bagian pengait atau pointer penunjuk yang menyimpan alamat elemen di depannya guna menghubungkan antar node secara sekuensial.

Adapun beberapa penanda penting dalam list ini meliputi pointer First/Head (penunjuk elemen urutan pertama dalam memori) dan penanda NULL/Nil (penanda titik henti bahwa sebuah pointer tidak mengacu ke mana pun, yang umumnya dimiliki oleh suksesor dari elemen paling akhir).

### C. Operasi Dasar (Primitif)<br/>
Untuk membentuk program linked list yang fungsional di C++, operasi utamanya dikelola menggunakan sintaks alokasi (new) untuk memesan ruang memori elemen, dan dealokasi (delete) untuk membuangnya kembali ke sistem. Operasi-operasi primitif yang wajib ada meliputi:

- Create List: Proses inisialisasi awal dengan mendeklarasikan pointer penunjuk First dengan nilai Nil.
- Insert (Penyisipan): Penambahan elemen data ke dalam list yang posisinya dapat diletakkan di awal (Insert First), di akhir (Insert Last), maupun setelah node spesifik (Insert After).
- Delete (Penghapusan): Proses pencabutan node dari rantai list sekaligus membebaskan memorinya, yang terbagi ke dalam metode Delete First, Delete Last, dan Delete After.
- View (Penelusuran): Proses membaca elemen secara maju berurutan dari First hingga menjumpai batas akhir Nil guna menampilkan seluruh isi node.

## Guided 

### 1. Singly Linked List

#### list.h
```C++
#ifndef LIST_H
#define LIST_H
#define Nil NULL

#include<iostream>
using namespace std;

//deklarasi isi data struct mahasiswa
struct mahasiswa {
    string nama;
    string nim;
    int umur;
};

typedef mahasiswa dataMahasiswa; //memberikan nama alias dataMahasiswa untuk struct mahasiswa

typedef struct node *address; //mendefinisikan alias address sebagai pointer ke struct node

struct node { //node untuk isi dari linked listnya, isi setiap node adalah data & pointer next
    dataMahasiswa isidata;
    address next;
};

struct LinkedList { //ini linked listnya
    address first;
};
//semua function & prosedure yang akan dipakai
bool isEmpty(LinkedList List);
void createList(LinkedList &List);
address alokasi(string nama, string nim, int umur);
void dealokasi(address &node);
void printList(LinkedList List);
void insertFirst(LinkedList &List, address nodeBaru);
void insertAfter(LinkedList &List, address nodeBaru, address Prev);
void insertLast(LinkedList &List, address nodeBaru);

void delFirst(LinkedList &List);
void delLast(LinkedList &List);
void delAfter(LinkedList &List, address nodeHapus, address nodePrev);
int nbList(LinkedList List);
void deleteList(LinkedList &List);

#endif
```
#### list.cpp
```C++
#include "list.h"
#include <iostream>
using namespace std;

//I.S = Initial State / kondisi awal
//F.S = Final State / kondisi akhir

//fungsi untuk cek apakah list kosong atau tidak
bool isEmpty(LinkedList List) {
    if(List.first == Nil){
        return true;
    } else {
        return false;
    }
}

//pembuatan linked list kosong
void createList(LinkedList &List) {
    /* I.S. sembarang
       F.S. terbentuk list kosong */
    List.first = Nil;
}

//pembuatan node baru dengan menerapkan manajemen memori
address alokasi(string nama, string nim, int umur) {
    /* I.S. sembarang
       F.S. mengembalikan alamat node baru dengan isidata = sesuai parameter dan next = Nil */
    address nodeBaru = new node;
    nodeBaru->isidata.nama = nama;
    nodeBaru->isidata.nim = nim;
    nodeBaru->isidata.umur = umur;
    nodeBaru->next = Nil;
    return nodeBaru;
}

//penghapusan node dengan menerapkan manajemen memori
void dealokasi(address &node) {
    /* I.S. P terdefinisi
       F.S. memori yang digunakan node dikembalikan ke sistem */
    node->next = Nil;
    delete node;
}

//prosedur-prosedur untuk insert / menambahkan node baru kedalam list
void insertFirst(LinkedList &List, address nodeBaru) {
    /* I.S. sembarang, P sudah dialokasikan
       F.S. menempatkan elemen list (node) pada awal list */
    nodeBaru->next = List.first;
    List.first = nodeBaru;
}

void insertAfter(LinkedList &List, address nodeBaru, address Prev) {
    /* I.S. sembarang, nodeBaru dan Prev alamat salah satu elemen list (node)
       F.S. menempatkan elemen (node) sesudah elemen node Prev */
    if (Prev != Nil) {
        nodeBaru->next = Prev->next;
        Prev->next = nodeBaru;
    } else {
        cout << "Node sebelumnya tidak valid!" << endl;
    }
}

void insertLast(LinkedList &List, address nodeBaru) {
    /* I.S. sembarang, nodeBaru sudah dialokasikan
       F.S. menempatkan elemen nodeBaru pada akhir list */
    if (isEmpty(List)) {
        List.first = nodeBaru;
    } else {
        address nodeBantu = List.first;
        while (nodeBantu->next != Nil) {
            nodeBantu = nodeBantu->next;
        }
        nodeBantu->next = nodeBaru;
    }
}

//prosedur-prosedur untuk delete / menghapus node yang ada didalam list
void delFirst(LinkedList &List){
    /* I.S. list tidak kosong
       F.S. node pertama di list terhapus*/
    address nodeHapus;
    if (isEmpty(List) == false) {
        nodeHapus = List.first;
        List.first = List.first->next;
        nodeHapus->next = Nil;
        dealokasi(nodeHapus);
    } else {
        cout << "List kosong!" << endl;
    }
}

void delLast(LinkedList &List){
    /* I.S. list tidak kosong
       F.S. node terakhir di list terhapus */
    address nodeHapus, nodePrev;
    if(isEmpty(List) == false){
        nodeHapus = List.first;
        if(nodeHapus->next == Nil){
            List.first->next = Nil;
            dealokasi(nodeHapus);
        } else {
            while(nodeHapus->next != Nil){
                nodePrev = nodeHapus;
                nodeHapus = nodeHapus->next;
            }
            nodePrev->next = Nil;
            dealokasi(nodeHapus);
        }
    } else {
        cout << "list kosong" << endl;
    }
}

void delAfter(LinkedList &List, address nodeHapus, address nodePrev){
    /* I.S. list tidak kosong, Prev alamat salah satu elemen list
       F.S. nodeBantu adalah alamat dari Prev->next, menghapus Prev->next dari list */
    if(isEmpty(List) == true){
        cout << "List kosong!" << endl;
    } else { //jika list tidak kosong
        if (nodePrev != Nil && nodePrev->next != Nil) {
            nodeHapus = nodePrev->next;
            nodePrev->next = nodeHapus->next;
            nodeHapus->next = Nil;
            dealokasi(nodeHapus);
        } else {
            cout << "Node sebelumnya (prev) tidak valid!" << endl;
        }
    }
}

//prosedur untuk menampilkan isi list
void printList(LinkedList List) {
    /* I.S. list mungkin kosong
       F.S. jika list tidak kosong menampilkan semua info yang ada pada list */
    if (isEmpty(List)) {
        cout << "List kosong." << endl;
    } else {
        address nodeBantu = List.first;
        while (nodeBantu != Nil) {
            cout << "Nama : " << nodeBantu->isidata.nama << ", NIM : " << nodeBantu->isidata.nim << ", Usia : " << nodeBantu->isidata.umur << endl;
            nodeBantu = nodeBantu->next;
        }
    }
}

//function untuk menampilkan jumlah node didalam list
int nbList(LinkedList List) {
    /* I.S. list sudah ada
       F.S. Menampilkan jumlah node didalam list*/
    int count = 0;
    address nodeBantu = List.first;
    while (nodeBantu != Nil) {
        count++;
        nodeBantu = nodeBantu->next;
    }
    return count;
}

//prosedur untuk menghapus list (menghapus semua node didalam list)
void deleteList(LinkedList &List){
    /* I.S. list sudah ada
       F.S. menghapus semua node didalam list*/
    address nodeBantu, nodeHapus;
    nodeBantu = List.first;
    while(nodeBantu != Nil){
        nodeHapus = nodeBantu;
        nodeBantu = nodeBantu->next;
        dealokasi(nodeHapus);
    }
    List.first = Nil;
    cout << "List sudah terhapus!" << endl;
}
```
#### main.cpp
```C++
#include "list.h"

#include <iostream>
using namespace std;

int main(){
    LinkedList List;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;
    createList(List);

    dataMahasiswa mhs;

    nodeA = alokasi("Dhimas", "2311102151", 20);
    nodeB = alokasi("Arvin", "2211110014", 21);
    nodeC = alokasi("Rizal", "2311110029", 20);
    nodeD = alokasi("Satrio", "2211102173", 21);
    nodeE = alokasi("Joshua", "2311102133", 21);

    insertFirst(List, nodeA);
    insertLast(List, nodeB);
    insertAfter(List, nodeC, nodeA);
    insertAfter(List, nodeD, nodeC);
    insertLast(List, nodeE);

    cout << "--- ISI LIST SETELAH DILAKUKAN INSERT ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    delFirst(List);
    delLast(List);
    delAfter(List, nodeD, nodeC);

    cout << "--- ISI LIST SETELAH DILAKUKAN DELETE ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    deleteList(List);
    cout << "--- ISI LIST SETELAH DILAKUKAN HAPUS LIST ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    return 0;
}
```
Program ini menggunakan struktur Singly Linked List bertipe pointer untuk memproses data mahasiswa secara dinamis dan modular melalui tiga file terpisah. Cara kerjanya meliputi pengalokasian memori untuk node baru, merangkai data ke dalam list menggunakan variasi prosedur penyisipan (insertFirst, insertLast, insertAfter), lalu mendemonstrasikan proses memutus dan menghapus node spesifik (delFirst, delLast, delAfter). Pada akhir eksekusi, program menjalankan perulangan `deleteList` untuk mengosongkan sekaligus membebaskan seluruh memori list kembali ke sistem.

## Unguided 

### 1. Buatlah ADT Singly Linked list sebagai berikut di dalam file “Singlylist.h”
```
Type infotype : int
Type address  : pointer to ElmList

Type ElmList <
    info : infotype
    next : address
>
Type List : < First : address >

procedure CreateList( input/output L : List )
function alokasi( x : infotype ) -> address
procedure dealokasi(input/output P : address )
procedure printInfo( input L : List )
procedure insertFirst(input/output L : List, input P :address)
```
Kemudian buatlah implementasi dari procedure-procedure yang digunakan didalam file “Singlylist.cpp”

<br>Kemudian buat program utama didalam file “main.cpp” dengan implementasi sebagai berikut :

```C++
int main(){
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    createList(L);

    P1 = alokasi(2);
    insertFirst(L,P1);

    P2 = alokasi(0);
    insertFirst(L,P2);

    P3 = alokasi(8);
    insertFirst(L,P3);

    P4 = alokasi(12);
    insertFirst(L,P4);

    P5 = alokasi(9);
    insertFirst(L,P5);

    printInfo(L)
    return 0;
}
```
#### singlylist.h
```C++
#ifndef SINGLYLIST_H
#define SINGLYLIST_H
#define Nil NULL

#include<iostream>
using namespace std;

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

#endif


```

#### singlylist.cpp
```C++
#include "singlylist.h"
#include <iostream>
using namespace std;

void createList(List &L) {
    L.first = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void printInfo(List L) {
    address P = L.first;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}
```

#### main.cpp
```C++
#include <iostream>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    createList(L); 
    
    P1 = alokasi(2);
    insertFirst(L, P1);
    P2 = alokasi(0);
    insertFirst(L, P2);
    P3 = alokasi(8);
    insertFirst(L, P3);
    P4 = alokasi(12);
    insertFirst(L, P4);
    P5 = alokasi(9);
    insertFirst(L, P5);
    printInfo(L);
    
    return 0;
}
```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-4_Modul-4/Output/output-unguided-1.png?raw=true)


Program ini menggunakan struktur Singly Linked List bertipe pointer (struct) untuk memproses data integer secara dinamis dan modular yang dipisah ke dalam file `singlylist.h`, `singlylist.cpp`, dan `main.cpp`.   Cara kerjanya diawali dengan menyiapkan list kosong dan mengalokasikan memori dinamis untuk kelima node. Program kemudian menyisipkan nilai satu per satu yang ditangkap oleh prosedur `insertFirst` melalui parameter reference, sehingga setiap elemen baru langsung dirangkai dan ditempatkan pada posisi paling awal list. Pada tahap akhir, program menjalankan perulangan penelusuran untuk mencetak seluruh urutan data tersebut. 

### 2. Dari soal Latihan pertama, lakukan penghapusan node 9 menggunakan deleteFirst(), node 2 menggunakan deleteLast(), dan node 8 menggunakan deleteAfter(). Kemudian tampilkan jumlah node yang tersimpan menggunakan nbList() dan lakukan penghapusan seluruh node menggunakan deleteList().


#### singlylist.h
```C++
#ifndef SINGLYLIST_H
#define SINGLYLIST_H
#define Nil NULL

#include<iostream>
using namespace std;

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

// Tambahan
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(List &L, address &P, address Prec);
int nbList(List L);
void deleteList(List &L);

#endif


```

#### singlylist.cpp
```C++
#include "singlylist.h"
#include <iostream>
using namespace std;

void createList(List &L) {
    L.first = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void printInfo(List L) {
    address P = L.first;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

// Tambahan
void deleteFirst(List &L, address &P) {
    if (L.first != Nil) {
        P = L.first;
        L.first = P->next;
        P->next = Nil;
    }
}


void deleteLast(List &L, address &P) {
    if (L.first != Nil) {
        if (L.first->next == Nil) {
            deleteFirst(L, P);
        } else {
            address Q = L.first;
            while (Q->next->next != Nil) {
                Q = Q->next;
            }
            P = Q->next;
            Q->next = Nil;
        }
    }
}

void deleteAfter(List &L, address &P, address Prec) {
    if (Prec != Nil && Prec->next != Nil) {
        P = Prec->next;
        Prec->next = P->next;
        P->next = Nil;
    }
}

int nbList(List L) {
    int count = 0;
    address P = L.first;
    while (P != Nil) {
        count++;
        P = P->next;
    }
    return count;
}

void deleteList(List &L) {
    address P;
    while (L.first != Nil) {
        deleteFirst(L, P);
        dealokasi(P);
    }
    cout << "\n- List Berhasil Terhapus -" << endl;
}
```

#### main.cpp
```C++
#include <iostream>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    createList(L); 
    
    P1 = alokasi(2);
    insertFirst(L, P1);
    P2 = alokasi(0);
    insertFirst(L, P2);
    P3 = alokasi(8);
    insertFirst(L, P3);
    P4 = alokasi(12);
    insertFirst(L, P4);
    P5 = alokasi(9);
    insertFirst(L, P5);
    printInfo(L);

    // Tambahan
    address P_del;
    deleteFirst(L, P_del);
    dealokasi(P_del);

    deleteLast(L, P_del);
    dealokasi(P_del);

    address Prec = L.first; 
    deleteAfter(L, P_del, Prec);
    dealokasi(P_del);
    printInfo(L);

    cout << "Jumlah node: " << nbList(L) << endl;
    deleteList(L);
    cout << "Jumlah node: " << nbList(L) << endl;
    
    return 0;
}
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/BrilyantKeyza/109082500106_Brilyant-Keyza-Hidayat_Struktur-Data/blob/main/Pertemuan-4_Modul-4/Output/output-unguided-2.png?raw=true)

Program ini merupakan kelanjutan operasi Singly Linked List yang berfungsi untuk memanipulasi dan menghapus elemen data secara dinamis di dalam list.   Cara kerjanya dengan mengeksekusi fungsi penghapusan secara spesifik, diawali mencabut node terdepan melalui prosedur `deleteFirst`, memutus node paling akhir melalui `deleteLast`, dan menghapus node di tengah list menggunakan `deleteAfter` yang ditangkap melalui parameter reference. Pada tahap akhir, program menghitung sisa data menggunakan fungsi `nbList`, sebelum akhirnya menjalankan perulangan di dalam `deleteList` untuk mengosongkan sekaligus membebaskan seluruh sisa memori.

## Kesimpulan
Kesimpulannya pada praktikum Modul 4, pemahaman Singly Linked List sangat penting untuk mengelola penyimpanan data secara dinamis dan fleksibel. Penerapannya sangat bergantung pada penggunaan struct dan pointer untuk membentuk node, pembuatan operasi dasar (insert dan delete), serta penerapan teknik modularitas file (.h dan .cpp). Penguasaan logika pergeseran pointer (next) juga sangat diperlukan untuk memecahkan soal terkait penyisipan data angka maupun pencabutan elemen di berbagai posisi tanpa merusak sisa rantai list. Secara keseluruhan, perpaduan teknik alokasi memori dinamis dan modularitas ini sangat efektif untuk membangun program yang terstruktur dan efisien.

## Referensi
[1] Wijaya, A., & Santoso, B. (2019). Analisis Perbandingan Kinerja Alokasi Memori Statis dan Dinamis Menggunakan Struktur Data Linked List. Jurnal Informatika dan Sistem Komputer (JISK), 6(2), 112-118.
<br>[2] Modul 4: Modul 4 Singly Linked List (BAGIAN PERTAMA). Modul Praktikum Struktur Data. (Referensi Modul).
