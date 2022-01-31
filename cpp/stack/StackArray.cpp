#include <iostream>
using namespace std;

const int stackMax = 5;
string stack[stackMax];
int top = 0;

// prototipe fungsi
bool isFull();
bool isEmpty();
void push(string data);
void pop();
void display();


// main function
int main(){

    /* Terdapat 6 Percobaan untuk menerapkan konsep stack */

    // menambahkan 2 data pada stack, kemudian menampilkannya
    cout << "#01 Menambahkan 2 data ke stack.." << endl;
    push("Data 1");
    push("Data 2");
    display();
    
    // menambahkan 3 data lagi dan menampilkannya
    cout << "#02 Menambahkan 3 data ke stack..." << endl;
    push("Data 3");
    push("Data 4");
    push("Data 5");
    display();

    cout << "#03 Mencoba menambahkan 1 data lagi ke stack..." << endl;
    push("Data 6");

    cout << endl << "#04 Menghapus 1 data dari stack..." << endl;
    pop();
    cout << "Hasil: " << endl;
    display();

    cout << "#05 Menghapus 4 data dari stack..." << endl;
    pop();
    pop();
    pop();
    pop();
    cout << "Hasil: " << endl;
    display();

    cout << "#06 Mencoba menghapus data lagi dari stack..." << endl;
    pop();

    cout << endl << "...Program Berakhir..." << endl;
    return 0;
} // akhir int main


// fungsi fungsi
bool isFull(){
    if(top == stackMax){
        return true;
    } else {
        return false;
    }
}

bool isEmpty(){
    if(top == 0){
        return true;
    } else {
        return false;
    }
}

void push(string data){
    if(isFull()){
        cout << "Stack penuh" << endl;
    } else{
        stack[top] = data;
        top++;
    }
}

void pop(){
    if(isEmpty()){
        cout << "Stack Kosong " << endl;
    } else {
        stack[top-1] = "";
        top--;
    }
}

void display(){
    if(isEmpty()){
        cout << "Stack Kosong" << endl;
    } else {
        cout << "== Data Stack Array ==" << endl;
        for(int i = stackMax - 1; i >= 0; i--){
            if(stack[i] != ""){
                cout << stack[i] << endl;
            }
        } 
    } cout << endl;
}
