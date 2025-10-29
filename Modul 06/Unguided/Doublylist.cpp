#include "Doublylist.h"

void createList(List &L)
{
    L.first = NULL;
    L.last = NULL;
}

address alokasi(infotype x)
{
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

void dealokasi(address &P)
{
    delete P;
    P = NULL;
}

void printInfo(List L)
{
    if (L.first == NULL)
    {
        cout << "List kosong." << endl;
        return;
    }
    address P = L.first;
    while (P != NULL)
    {
        cout << P->info.nopol << " | " << P->info.warna
             << " | " << P->info.thnBuat << endl;
        P = P->next;
    }
}

void insertLast(List &L, address P)
{
    if (L.first == NULL)
    {
        L.first = P;
        L.last = P;
    }
    else
    {
        L.last->next = P;
        P->prev = L.last;
        L.last = P;
    }
}

address findElm(List L, string nopol)
{
    address P = L.first;
    while (P != NULL && P->info.nopol != nopol)
    {
        P = P->next;
    }
    return P;
}

void deleteFirst(List &L)
{
    if (L.first == NULL)
        return;
    address P = L.first;
    if (L.first == L.last)
    {
        L.first = NULL;
        L.last = NULL;
    }
    else
    {
        L.first = P->next;
        L.first->prev = NULL;
    }
    dealokasi(P);
}

void deleteLast(List &L)
{
    if (L.last == NULL)
        return;
    address P = L.last;
    if (L.first == L.last)
    {
        L.first = NULL;
        L.last = NULL;
    }
    else
    {
        L.last = P->prev;
        L.last->next = NULL;
    }
    dealokasi(P);
}

void deleteAfter(List &L, address prec)
{
    if (prec == NULL || prec->next == NULL)
        return;
    address P = prec->next;
    prec->next = P->next;
    if (P->next != NULL)
    {
        P->next->prev = prec;
    }
    else
    {
        L.last = prec;
    }
    dealokasi(P);
}