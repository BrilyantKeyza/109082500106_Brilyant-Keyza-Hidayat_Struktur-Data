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

// Call By Pointer
// void tukarPointer(int *x, int *y) {
//     int temp;

//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int a = 4;
//     int b = 6;

//     cout << "Sebelum ditukar: " << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;

//     tukarPointer(&a, &b);

//     cout << "\nSetelah ditukar: " << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
// }

// Call By Reference
// void tukarReference(int &x, int &y) {
//     int temp;

//     temp = x;
//     x = y;
//     y = temp;
// }

// int main() {
//     int a = 4;
//     int b = 6;

//     cout << "Sebelum ditukar: " << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;

//     tukarReference(a, b);

//     cout << "\nSetelah ditukar: " << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
// }