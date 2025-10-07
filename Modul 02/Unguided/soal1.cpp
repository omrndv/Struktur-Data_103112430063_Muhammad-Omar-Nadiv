#include <iostream>
using namespace std;

int main() {
    string nama[5];
    float nilai[5][3];
    float rata[5];
    int terbaik = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        cin >> nama[i];
        float total = 0;
        for (int j = 0; j < 3; j++) {
            cout << "  Nilai mata kuliah " << j + 1 << ": ";
            cin >> nilai[i][j];
            total += nilai[i][j];
        }
        rata[i] = total / 3;
        cout << endl;
    }

    for (int i = 1; i < 5; i++) {
        if (rata[i] > rata[terbaik]) {
            terbaik = i;
        }
    }

    cout << "\nDaftar Nilai Mahasiswa:\n";
    cout << "Nama\tNilai1\tNilai2\tNilai3\tRata-rata\n";

    for (int i = 0; i < 5; i++) {
        cout << nama[i] << "\t";
        for (int j = 0; j < 3; j++) {
            cout << nilai[i][j] << "\t";
        }
        cout << rata[i];
        if (i == terbaik) cout << "  <- Terbaik";
        cout << endl;
    }

    cout << "Mahasiswa terbaik: " << nama[terbaik] << " dengan rata-rata " << rata[terbaik] << endl;
}