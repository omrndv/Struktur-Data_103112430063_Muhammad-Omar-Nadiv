#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string NIM;
};

int main()
{
    Mahasiswa mhs;
    mhs.nama = "Nadiv";
    mhs.NIM = "103112430063";

    cout << "nama : " << mhs.nama << endl << "NIM : " << mhs.NIM << endl;
}