#include <iostream>
using namespace std;

float hitungRata(float nilai[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += nilai[i];
    }
    return total / n;
}

void cariNilai(float nilai[], int n, float &maks, float &min) {
    maks = nilai[0];
    min = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] > maks) maks = nilai[i];
        if (nilai[i] < min) min = nilai[i];
    }
}

int main() {
    int N;
    cout << "Masukkan jumlah siswa: ";
    cin >> N;

    float nilai[N];
    for (int i = 0; i < N; i++) {
        cout << "Nilai siswa ke-" << i + 1 << " : ";
        cin >> nilai[i];
    }

    float rata = hitungRata(nilai, N);
    float maks, min;
    cariNilai(nilai, N, maks, min);

    cout << "\nHasil Perhitungan:" << endl;
    cout << "Rata-rata kelas = " << rata << endl;
    cout << "Nilai tertinggi = " << maks << endl;
    cout << "Nilai terendah  = " << min << endl;
}