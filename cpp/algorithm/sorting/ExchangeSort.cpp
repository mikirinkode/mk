/*
 * https://mikirinkode.online/exchange-sort/
 */

#include <iostream>
using namespace std;
void tukar(int *, int *);
void cetakArray(int arr[], int ukuranArray);

int main() {

    int ukuranArray = 5;
    int arr[ukuranArray] = {4, 7, 3, 9, 2};
     
    cout << "Keadaan awal array" << endl;
    cetakArray(arr, ukuranArray);
    cout << endl;

    // Algoritma Exchange Sort
    for (int i = 0; i < ukuranArray-1; i++) {
        cout << "\nPerulangan ke #" << i+1 << endl;
        for (int j = i+1; j < ukuranArray; j++) {
            // menampilkan array
            cetakArray(arr, ukuranArray);
            
            // logika pertukaran
            if (arr[i] < arr[j]) {
                cout << "[" << arr[i] << "<" << arr[j] << "] Tukar\n";   
                tukar(&arr[i], &arr[j]);
            } 
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
