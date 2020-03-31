/*
	Nama	    : Ahmad Irfan Fadholi
	Kelas	    : B
	NPM 	    : 140810180034
	Deskripsi   : Tilling Problem
*/
#include <iostream>
using namespace std;

// function to count the total number of ways
int countWays(int n, int m){
    int count[n + 1];
    count[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i > m)
            count[i] = count[i - 1] + count[i - m];
        else if (i < m)
            count[i] = 1;
        else
            count[i] = 2;
    }
    return count[n];
}

int main(){
    int n = 8, m = 2;
    cout << "Number of ways = "
         << countWays(n, m);
    return 0;
}
