#include <iostream>
using namespace std;

void tampilPola(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    tampilPola(n);
}