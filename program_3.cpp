
#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float panjang, lebar, alas, tinggi, sisi, luas;

    // Menampilkan menu pilihan
    cout << "Pilih bangun datar yang ingin dihitung luasnya:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            // Menghitung luas persegi
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas persegi adalah: " << luas << endl;
            break;

        case 2:
            // Menghitung luas persegi panjang
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas persegi panjang adalah: " << luas << endl;
            break;

        case 3:
            // Menghitung luas segitiga
            cout << "Masukkan alas: ";
            cin >> alas;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga adalah: " << luas << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}
