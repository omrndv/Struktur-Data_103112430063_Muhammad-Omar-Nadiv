#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    Stack S;
    createStack(S);

    int choice, value;

    while (true) {
        cout << "\nMenu: " << endl;
        cout << "1. Push (Masukkan elemen ke stack)" << endl;
        cout << "2. Pop (Ambil elemen dari stack)" << endl;
        cout << "3. Tampilkan Stack" << endl;
        cout << "4. Balik Stack" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nilai yang ingin dimasukkan ke stack: ";
                cin >> value;
                push(S, value);
                cout << value << " berhasil dimasukkan ke stack." << endl;
                break;
            case 2:
                cout << "Pop: " << pop(S) << endl;
                break;
            case 3:
                printInfo(S);
                break;
            case 4:
                cout << "Balik stack" << endl;
                balikStack(S);
                printInfo(S);
                break;
            case 5:
                cout << "Keluar dari program." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid. Coba lagi." << endl;
        }
    }
    
    return 0;
}