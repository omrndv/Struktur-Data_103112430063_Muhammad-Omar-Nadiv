#include "Doublylist.h"

int main()
{
    List L;
    createList(L);

    int n;
    cout << "Masukkan jumlah kendaraan: ";
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; i++)
    {
        Kendaraan k;
        cout << "\nData kendaraan ke-" << i + 1 << endl;
        cout << "Nomor Polisi : ";
        getline(cin, k.nopol);
        cout << "Warna        : ";
        getline(cin, k.warna);
        cout << "Tahun Buat   : ";
        cin >> k.thnBuat;
        cin.ignore();

        insertLast(L, alokasi(k));
    }

    cout << "\n=== Data Kendaraan ===" << endl;
    printInfo(L);

    string cari;
    cout << "\nMasukkan nomor polisi yang ingin dicari: ";
    getline(cin, cari);
    address found = findElm(L, cari);
    if (found != NULL)
        cout << "Ditemukan: " << found->info.nopol << " - " << found->info.warna << endl;
    else
        cout << "Data tidak ditemukan." << endl;

    string hapus;
    cout << "\nMasukkan nomor polisi yang ingin dihapus: ";
    getline(cin, hapus);
    address target = findElm(L, hapus);
    if (target != NULL)
    {
        if (target == L.first)
            deleteFirst(L);
        else if (target == L.last)
            deleteLast(L);
        else
            deleteAfter(L, target->prev);
        cout << "Data berhasil dihapus!" << endl;
    }
    else
    {
        cout << "Data tidak ditemukan!" << endl;
    }

    cout << "\n=== Data Setelah Dihapus ===" << endl;
    printInfo(L);

    return 0;
}
