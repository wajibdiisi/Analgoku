/*
Nama : Ahmad Irfan Fadholi
NPM : 140810180034
Kelas : B
Deskripsi : BFS
Tgl : 7 April 2020 */
#include <iostream>
using namespace std;
#define NODE 8
int main(){
     int adjacency[NODE][NODE] = {
        {0, 1, 1, 0, 0, 0, 0, 0},
        {1, 0, 1, 1, 1, 0, 0, 0},
        {1, 1, 0, 0, 1, 0, 1, 1},
        {0, 1, 0, 0, 1, 0, 0, 0},
        {0, 1, 1, 1, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 1},
        {0, 0, 1, 0, 0, 0, 1, 0}};
    bool discovered[NODE];
    for (int i = 0; i < NODE; i++)
    	discovered[i] = false;
    	
    int output[NODE];
    discovered[0] = true;
    output[0] = 1;
    int counter = 1;
    for (int i = 0; i < NODE; i++){
        for (int j = 0; j < NODE; j++){
            if ((adjacency[i][j]==1) && (discovered[j] == false)){
                output[counter]=j + 1;
                discovered[j]=true;
                counter++;
            }
        }
    }
    cout << "BFS : \n";
    for (int i = 0; i < NODE; i++)
        cout << output[i] << " ";
}
