/*
Nama : Ahmad Irfan Fadholi
NPM : 14081080034
Tgl : 10 Maret 2020
Deskripsi : Studi Kasus No 5 - Selection Sort*/

#include <iostream>
using namespace std;

int x[100], y[100],n;

void swap(int a, int b){
    int temp;
    temp = x[b];
    x[b] = x[a];
    x[a] = temp;
}

void SelectionSort(){
    int pos, i, j;
    for (i = 1; i <= n - 1; i++){
        pos = i;
        for (j = i + 1; j <= n; j++){
            if (x[j] < x[pos])
                pos = j;
        }
        if (pos != i)
            swap(pos, i);
    }
}

int main(){
    cout << "Selection Sort \nMasukkan banyak data : ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        cout << "Masukkan data ke-" << i << " : ";
        cin >> x[i];
        y[i] = x[i];
    }
    SelectionSort();
    cout << "\nHasil Output : ";
    for (int i = 1; i <= n; i++){
        cout << " " << x[i];
    }
    return 0;
}
