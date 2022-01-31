#include <iostream>
using namespace std;

void cetakArray(int array[], int ukuranArray, int l, int m, int r);
void binarySearch(int array[], int ukuranArray, int cari);


int main(){

    int n = 10;
    int data[n] = {2, 5, 9, 12, 14, 15, 19, 21, 28, 31};
    int cari = 19;

    binarySearch(data, n, cari);

    return 0;
} // akhir int main


void binarySearch(int array[], int ukuranArray, int cari){
    int mid; 
    int left = 0; 
    int right = ukuranArray-1; 
    int flag = 0; 
    int stepCounter = 0;

    // Algoritma Binary Search
    while( (left <= right) && (flag == 0) ) { 
        stepCounter++;
        mid = (left+right) / 2; 
        cout << "\n#Tahap " << stepCounter << endl;
        cout << " Left: " << left << ", Mid: " << mid << ", Right: " << right << endl;
        cout << " Data tengah: " << array[mid] << ", Cari: " << cari << endl; 

        // menampilkan proses
        cetakArray(array, ukuranArray, left, mid, right);

        // proses binary search
        if (array[mid] == cari){
            flag = 1; 
        } else if (cari < array[mid]) { 
            cout << cari << " < " << array[mid] << ", maka cari di kiri" << endl; 
            right = mid-1; 
        } else { 
            cout << cari << " > " << array[mid] << ", maka cari di kanan" << endl; 
            left = mid+1; 
        } 
    }

    // mengecek apakah angka yang dicari dapat ditemukan
    cout << endl;
    if(flag == 1) {    
        cout << "angka " << cari << " dapat ditemukan"  << endl; 
    } else {
        cout << "angka " << cari << " tidak dapat ditemukan"  << endl;
    }
        cout << "Jumlah langkah: " << stepCounter << endl;
}

void cetakArray(int array[], int ukuranArray, int l, int m, int r){
    for(int i = 0; i < ukuranArray; i++){
        cout << " ";
        if((i < l) or (i > r)){
            cout << "x";
        } else{
            if(i == m){
                cout << "[" << array[i] << "]";
            } else {
                cout << array[i]; 
            }
        }
    } cout << "\n ";
}
