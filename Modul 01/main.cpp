#include <iostream>
using namespace std;

int main()
{
    // int nomor = 11;
    // cout << nomor << endl;

    // if (nomor == 1)
    // {
    //     cout << "bas << endl" << endl;
    // }

    // cout << sizeof(nomor) << endl;

    // cout << "Nama : Nadiv \nNIM : 103112430063" << endl;
    // return 0;

    int hari;
    cout << "Hari 1 - 7 : ";
    cin >> hari;

    if (hari == 7)
    {
        cout << "hari minggu" << endl;
    }
    else
    {
        cout << "hari kerja" << endl;
    }

    switch (hari)
    {
    case 7:
        cout << "hari minggu" << endl;
        break;

    default:
        cout << "hari kerja" << endl;
        break;
    }
}