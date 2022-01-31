#include <iostream>
using namespace std;

int main(){

    int n = 10;
    int data[n] = {9, 21, 1, 7, 5, 12, 17, 13, 4, 10};
    int cari = 10;
    int simpan;
    int i = 0;

    // penambahan elemen sentinel;
    simpan = data[n-1];
    data[n-1] = cari;

    // algoritma Sequential Search dengan Sentinel
    while(data[i] != cari){
        i++;
    }

    // pegembalian nilai indeks terakhir
    data[n-1] = simpan;

    // pengecekan
    if ( (i < n-1) or (data[n-1] == cari) ){
        cout << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    
    return 0;
}
