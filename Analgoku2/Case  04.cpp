/*
Nama : Ahmad Irfan Fadholi
NPM : 14081080034
Tgl : 10 Maret 2020
Deskripsi : Studi Kasus No 4 - Insertion Sort*/

#include <iostream>
using namespace std;

int x[100], y[100], n;

void InsertionSort(){
    int temp, i, j;
    for (i = 1; i <= n; i++){
        temp = x[i];
        j = i - 1;
        while (x[j] > temp && j >= 0){
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = temp;
    }
}

int main(){
    cout << "Insertion Sort\nMasukkan Banyak data : ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << "Masukkan data ke-" << i << " : ";
        cin >> x[i];
        y[i] = x[i];
    }
    InsertionSort();
    cout << "\nHasil Output : ";

    for (int i = 1; i <= n; i++){
        cout << x[i] << " ";
    }
}
