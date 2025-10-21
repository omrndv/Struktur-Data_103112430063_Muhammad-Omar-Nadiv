#include "playlist.h"

void createPlaylist(Playlist &P)
{
    P.head = nullptr;
}

Lagu *createLagu(string judul, string penyanyi, float durasi)
{
    Lagu *L = new Lagu;
    L->judul = judul;
    L->penyanyi = penyanyi;
    L->durasi = durasi;
    L->next = nullptr;
    return L;
}

void insertFirst(Playlist &P, Lagu *L)
{
    L->next = P.head;
    P.head = L;
}

void insertLast(Playlist &P, Lagu *L)
{
    if (P.head == nullptr)
    {
        P.head = L;
    }
    else
    {
        Lagu *temp = P.head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = L;
    }
}

void insertAfter3(Playlist &P, Lagu *L)
{
    Lagu *temp = P.head;
    int count = 1;
    while (temp != nullptr && count < 3)
    {
        temp = temp->next;
        count++;
    }
    if (temp != nullptr)
    {
        L->next = temp->next;
        temp->next = L;
    }
    else
    {
        cout << "Kurang dari 3 lagu dalam playlist." << endl;
    }
}

void deleteByJudul(Playlist &P, string judul)
{
    if (P.head == nullptr)
    {
        cout << "Playlist kosong!" << endl;
        return;
    }

    Lagu *temp = P.head;
    Lagu *prev = nullptr;

    while (temp != nullptr && temp->judul != judul)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Lagu tidak ditemukan!" << endl;
        return;
    }

    if (prev == nullptr)
    {
        P.head = temp->next;
    }
    else
    {
        prev->next = temp->next;
    }

    delete temp;
    cout << "Lagu \"" << judul << "\" berhasil dihapus." << endl;
}

void tampilPlaylist(Playlist P)
{
    if (P.head == nullptr)
    {
        cout << "Playlist kosong." << endl;
        return;
    }

    Lagu *temp = P.head;
    int no = 1;
    while (temp != nullptr)
    {
        cout << no++ << ". " << temp->judul << " - " << temp->penyanyi
             << " (" << temp->durasi << " menit)" << endl;
        temp = temp->next;
    }
}
