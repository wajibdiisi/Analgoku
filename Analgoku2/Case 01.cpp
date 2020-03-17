/*
Nama : Ahmad Irfan Fadholi
NPM : 14081080034
Tgl : 10 Maret 2020
Deskripsi : Studi Kasus No 1*/

#include <iostream>
using namespace std;

int main(){
    int x[5] = {500, 333, 231, 5, 1};
    int n = sizeof(x)/sizeof(x[0]);
    int maks = x[0];
    int i = 2;

    while (i <= n){
        if (x[i] > maks)
            maks = x[i];
        i = i + 1;
    }
    cout << "Maximum = " << maks;

    return 0;
}
