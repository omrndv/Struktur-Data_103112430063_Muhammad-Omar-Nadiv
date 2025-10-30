#include "Singlylist.h"

void CreateList(List &L){
    L.First = Nil;
}

address alokasi(infotype x){
    address P = new Elmlist;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P){
    delete P;
    P = Nil;
}

void insertFirst(List &L, address P){
    P->next = L.First;
    L.First = P;
}

void insertLast(List &L, address P){
    if (L.First == Nil){
        insertFirst(L, P);
    } else {
        address Last = L.First;
        while (Last->next != Nil){
            Last = Last->next;
        }
        Last->next = P;
    }
}

void printInfo(List L){
    address P = L.First;
    if (P == Nil){
        cout << "List Kosong!" << endl;
    } else{
        while (P != Nil)
        {
            cout << P->info << " ";
            P = P->next;
        }

        cout << endl;
        
    }
}