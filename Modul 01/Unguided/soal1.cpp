#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    
    cout << "Masukkan bilangan kesatu : ";
    cin >> num1;
    cout << "Masukkan bilangan kedua : ";
    cin >> num2;

    cout << endl;

    cout << "Penjumlahan: " << num1 + num2 << endl;
    cout << "Pengurangan: " << num1 - num2 << endl;
    cout << "Perkalian: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Pembagian: " << num1 / num2 << endl;
    } else {
        cout << "Pembagian tidak valid (karena pembagi 0)" << endl;
    }
}
