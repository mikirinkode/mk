/*
 * https://mikirinkode.online/bubble-sort/
 */

#include <iostream>
using namespace std;
void tukar(int *, int *);
void cetakArray(int arr[], int ukuranArray);

int main() {
    int ukuranArray = 5;
    int arr[ukuranArray] = {3, 7, 1, 9, 5};
    
    cout << "Keadaan awal array" << endl;
    cetakArray(arr, ukuranArray);
    cout << endl;

    // algoritma Bubble Sort
    for (int i = 0; i < ukuranArray-1; i++) {
        cout << "\nPerulangan ke #" << i+1 << endl;
        for (int j = 0; j < ukuranArray-i-1; j++) {
            // menampilkan keadaan array
            cetakArray(arr, ukuranArray);
            
            // logika pertukaran
            if (arr[j] > arr[j+1]) {
                cout << "[" << arr[j] << ">" << arr[j+1] << "] Tukar\n";   
                tukar(&arr[j], &arr[j+1]);
            } 
        }
    }

    cout << "\nHasil Akhir Pengurutan: " << endl;
    cetakArray(arr, ukuranArray);
    return 0;
} // akhir int main

void tukar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void cetakArray(int array[], int ukuranArray){
    for(int i = 0; i < ukuranArray; i++) {
        cout << array[i] << "  ";
    } cout << endl;
}
