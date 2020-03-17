/*
Nama : Ahmad Irfan Fadholi
NPM : 14081080034
Tgl : 10 Maret 2020
Deskripsi : Studi Kasus No 3 - Binary Search*/

#include <iostream>
using namespace std;

int main(){
    int x[5] = {14, 31, 59, 72, 98};
    int find = 59;
	int mid;
    int n = sizeof(x) / sizeof(x[0]);
	int index;
	int i = 1;
    int j = n;
    bool found = false;

    while (not found && i <= j){
        mid = (i + j) / 2;
        if (x[mid] == find)
            found = true;
        else if (x[mid] < find)
            i = mid + 1;
        else
            j = mid - 1;
    }
    
    if (found){
        index = mid;
        cout << "Index ditemukan pada :  " << index;
    }
    else{
        index = 0;
        cout << "Not Found";
    }

    return 0;
}
