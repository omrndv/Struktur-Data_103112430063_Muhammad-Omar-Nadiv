#include <iostream>
#include "playlist.h"
using namespace std;

void inputLagu(Playlist &P, int mode = 0)
{
    string judul, penyanyi;
    float durasi;

    cin.ignore();
    cout << "Judul: ";
    getline(cin, judul);
    cout << "Penyanyi: ";
    getline(cin, penyanyi);
    cout << "Durasi (menit): ";
    cin >> durasi;

    switch (mode)
    {
    case 1:
        insertFirst(P, createLagu(judul, penyanyi, durasi));
        break;
    case 2:
        insertLast(P, createLagu(judul, penyanyi, durasi));
        break;
    case 3:
        insertAfter3(P, createLagu(judul, penyanyi, durasi));
        break;
    }
}

int main()
{
    Playlist P;
    createPlaylist(P);

    int pilihan;
    do
    {
        cout << "\n=== MENU PLAYLIST ===\n";
        cout << "1. Tambah lagu di awal\n";
        cout << "2. Tambah lagu di akhir\n";
        cout << "3. Tambah lagu setelah lagu ke-3\n";
        cout << "4. Hapus lagu berdasarkan judul\n";
        cout << "5. Tampilkan playlist\n";
        cout << "6. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "\nTambah lagu di awal:\n";
            inputLagu(P, 1);
            break;
        case 2:
            cout << "\nTambah lagu di akhir:\n";
            inputLagu(P, 2);
            break;
        case 3:
            cout << "\nTambah lagu setelah lagu ke-3:\n";
            inputLagu(P, 3);
            break;
        case 4:
        {
            cin.ignore();
            string judulHapus;
            cout << "\nMasukkan judul lagu yang ingin dihapus: ";
            getline(cin, judulHapus);
            deleteByJudul(P, judulHapus);
            break;
        }
        case 5:
            cout << "\n=== Playlist Saat Ini ===\n";
            tampilPlaylist(P);
            break;
        case 6:
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Pilihan tidak valid, coba lagi.\n";
        }

    } while (pilihan != 6);

    return 0;
}