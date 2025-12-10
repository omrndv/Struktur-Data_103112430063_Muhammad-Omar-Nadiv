#include <iostream>
#include "multilist.h"
using namespace std;

int main() {
    listinduk L;
    CreateList(L);

    cout << "=== INSERT DATA INDUK ===" << endl;
    insertLast(L, alokasi(10));
    insertLast(L, alokasi(20));
    insertLast(L, alokasi(30));
    printInfo(L);

    cout << "\n=== INSERT DATA ANAK ===" << endl;
    address P10 = findElm(L, 10);
    address P20 = findElm(L, 20);

    insertLastAnak(P10->lanak, alokasiAnak(101));
    insertLastAnak(P10->lanak, alokasiAnak(102));
    insertLastAnak(P20->lanak, alokasiAnak(201));

    printInfo(L);

    cout << "\n=== DELETE ANAK (102 dari induk 10) ===" << endl;
    delPAnak(P10->lanak, 102);
    printInfo(L);

    cout << "\n=== DELETE INDUK (30) ===" << endl;
    delP(L, 30);
    printInfo(L);

    cout << "\n=== JUMLAH DATA ===" << endl;
    cout << "Jumlah Induk: " << nbList(L) << endl;
    cout << "Jumlah Anak Induk 10: " << nbListAnak(P10->lanak) << endl;
    cout << "Jumlah Anak Induk 20: " << nbListAnak(P20->lanak) << endl;

    return 0;
}