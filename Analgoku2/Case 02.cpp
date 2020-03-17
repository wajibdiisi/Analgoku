/*
Nama : Ahmad Irfan Fadholi
NPM : 14081080034
Tgl : 10 Maret 2020
Deskripsi : Studi Kasus No 2*/

#include <iostream>
using namespace std;

int main()
{
    int x[5] = {739, 323, 69, 1, 33};
    int find = 739;
    int n = sizeof(x) / sizeof(x[0]);

    int index;
    int i = 1;
    bool found = false;

    while (i <= n && not found){
        if (x[i] == find)
            found = true;
        else
            i = i + 1;
    }

    if (found == true){
        index = i;
        cout << "Ditemukan pada Index " << index;
    }

    else{
        index = 0;
        cout << "Not Found";
    }

    return 0;
}
