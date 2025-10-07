#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah bilangan (N): ";
    cin >> N;

    int *ptr = new int[N]; 

    cout << "Masukkan " << N << " bilangan:\n";
    for (int i = 0; i < N; i++) {
        cin >> *(ptr + i); 
    }

    int jumlah = 0;
    int maks = *ptr;
    int min = *ptr;

    for (int i = 0; i < N; i++) {
        int nilai = *(ptr + i);
        jumlah += nilai;
        if (nilai > maks) maks = nilai;
        if (nilai < min) min = nilai;
    }

    cout << "\nHasil Perhitungan:\n";
    cout << "Jumlah  = " << jumlah << endl;
    cout << "Maksimum = " << maks << endl;
    cout << "Minimum  = " << min << endl;

    delete[] ptr;
}