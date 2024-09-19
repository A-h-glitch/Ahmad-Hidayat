
#include <iostream>
using namespace std;

int main() {
    int score;

    // Meminta input nilai score dari pengguna
    cout << "Masukkan nilai score: ";
    cin >> score;

    // Mengevaluasi nilai score
    if (score >= 90) {
        cout << "Selamat! Anda mendapatkan nilai A." << endl;
    } else if (score >= 80) {
        cout << "Anda mendapatkan nilai B." << endl;
    } else if (score >= 70) {
        cout << "Anda mendapatkan nilai C." << endl;
    } else if (score >= 60) {
        cout << "Anda mendapatkan nilai D." << endl;
    } else {
        cout << "Anda mendapatkan nilai E." << endl;
    }

    return 0;
}
