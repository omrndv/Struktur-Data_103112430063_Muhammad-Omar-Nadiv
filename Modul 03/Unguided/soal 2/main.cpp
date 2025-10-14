#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    string nama, kode;
    cout << "Masukkan nama mata pelajaran : ";
    getline(cin, nama);
    cout << "Masukkan kode mata pelajaran : ";
    getline(cin, kode);

    Pelajaran pel = create_pelajaran(nama, kode);
    cout << "\n=== DATA PELAJARAN ===" << endl;
    tampil_pelajaran(pel);

    return 0;
}