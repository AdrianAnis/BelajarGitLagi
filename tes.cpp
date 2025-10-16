#include <iostream>
using namespace std;

int main() {
    int a, b, hasil;
    int pilihan;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout <<"Masukkann Pilihan Operasi (+, -, *, /): " << endl;
    cout <<"1. Penjumlahan (+)" << endl;
    cout <<"2. Perkalian (*)" << endl;
    cout <<"Masukkan Pilihan Operasi: ";
    cin >> pilihan;

    if (pilihan == 1 ) {
        hasil = a + b;
    } else if (pilihan == 2) {
        hasil = a * b;
    } else {
        cout << "Operasi tidak valid!" << endl;
        return 1;
    }

    cout << "Hasil : " << hasil << endl;

    return 0;
}
