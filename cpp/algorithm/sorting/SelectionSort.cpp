#include <iostream>
using namespace std;
void tukar(int *, int *);
void cetakArray(int arr[], int ukuranArray);

int main() {
    int pos; // untuk menampung indeks dari nilai yg dicari
    int ukuranArray = 5;
    int arr[ukuranArray] = {4, 7, 3, 9, 2};
     
    cout << "Keadaan awal array" << endl;
    cetakArray(arr, ukuranArray);
    cout << endl;

    // algoritma Selection Sort
    for (int i = 0; i < ukuranArray - 1; i++) {
        pos = i;
        for (int j = i + 1; j < ukuranArray; j++) {
            // mencari nilai terkecil
            if (arr[j] < arr[pos]) {
                pos = j;
            }
        }
        if (pos != i) {
            tukar(&arr[pos], &arr[i]);
            cetakArray(arr, ukuranArray);
        }
    }

    cout << "\nHasil Akhir Pengurutan: " << endl;
    cetakArray(arr, ukuranArray);
    return 0;
}

void tukar(int *a, int *b){
     int t=*a;
     *a=*b;
     *b=t;
}

void cetakArray(int array[], int ukuranArray){
    for(int i = 0; i < ukuranArray; i++) {
        cout << array[i] << "  ";
    } cout << endl;
}
