#include <iostream>
using namespace std;

const int BARIS = 3;
const int KOLOM = 3;

void tampilArray(int arr[BARIS][KOLOM]) {
    for (int i = 0; i < BARIS; i++) {
        for (int j = 0; j < KOLOM; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarPosisi(int arr1[BARIS][KOLOM], int arr2[BARIS][KOLOM], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[BARIS][KOLOM] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[BARIS][KOLOM] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int *ptr1 = &A[0][0];
    int *ptr2 = &B[0][0];

    cout << "Array A awal:\n";
    tampilArray(A);
    cout << "Array B awal:\n";
    tampilArray(B);

    tukarPosisi(A, B, 1, 1);

    cout << "\nArray A setelah tukar posisi [1][1]:\n";
    tampilArray(A);
    cout << "Array B setelah tukar posisi [1][1]:\n";
    tampilArray(B);

    tukarPointer(ptr1, ptr2);

    cout << "\nArray A setelah tukar pointer A[0][0] dan B[0][0]:\n";
    tampilArray(A);
    cout << "Array B setelah tukar pointer A[0][0] dan B[0][0]:\n";
    tampilArray(B);

    return 0;
}
