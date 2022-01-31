#include <iostream>
using namespace std;

void interpolationSearch(int data[], int n, int key);


int main(){

    int n = 10;
    int data[n] = {2, 5, 9, 12, 14, 15, 19, 21, 28, 31};
    int key = 28;

    interpolationSearch(data, n, key);

    return 0;
} // akhir int main


void interpolationSearch(int data[], int n, int key){
    int low = 0; 
    int high = n-1; 
    int pos; 

    // algoritma Pencarian Interpolasi
    cout << "Memulai proses pencarian..." << endl;
    while(key > data[low] && key <= data[high]) { 
        // Formula Pencarian Interpolasi
        pos = low + ((key - data[low]) * (high - low) / (data[high] - data[low]));
        cout << "pos = " << pos << endl;

        // membandingkan
        if(key > data[pos]) {
            low = pos+1; 
        } else if (key < data[pos]) {
            high = pos-1; 
        } else {
            low = pos; 
        }
    } // akhir perulangan
    cout << "Proses pencarian selesai." << endl << endl;

    if(key == data[low]) {
        cout << key << " ditemukan pada indeks ke-" << low << endl; 
    } else {
        cout << key << "Tidak dapat ditemukan." << endl;
    }
}
