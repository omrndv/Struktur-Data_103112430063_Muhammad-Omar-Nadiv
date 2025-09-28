#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    string NIM;
};

int main()
{
    Mahasiswa mhs;

    cout << "nama : ";
    getline(cin, mhs.nama);
    cout << "nim : ";
    cin >> mhs.NIM;

    cout << endl;

    cout << "nama : " << mhs.nama << endl << "NIM : " << mhs.NIM << endl;
}