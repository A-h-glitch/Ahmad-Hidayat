
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Meminta input dari pengguna
    cout << "Masukkan tiga angka: ";
    cin >> num1 >> num2 >> num3;

    // Mencari angka terbesar
    if (num1 >= num2 && num1 >= num3) {
        cout << "Angka terbesar adalah: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "Angka terbesar adalah: " << num2 << endl;
    } else {
        cout << "Angka terbesar adalah: " << num3 << endl;
    }

    return 0;
}
