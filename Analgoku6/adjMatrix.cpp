/* Nama : Ahmad Irfan Fadholi
NPM : 140810180034
Kelas : B
Deskripsi : Adjacency Matrix
Tgl : 7 April 2020 */
#include<iostream>
#define NODE 8
using namespace std;

int verArray[20][20];
int count = 0;

void traversal(int v) {
   int i, j,x,temp;
   cout<<"Adjacency Matrix dari graf : \n\n   ";
   for (x = 0; x< v; x++){
   		temp = x +1;
   		cout<<temp<<" ";
	   	}
	   	cout<<endl;
   for(i = 0; i < v; i++) {
		   	temp = i +1;
			cout<<temp<<"  ";
      for(j = 0; j < v; j++) {
         cout << verArray[i][j] << " ";
      }
      cout << endl;
   }
}

void addEdge(int u, int v) {      
   verArray[u][v] = 1;
   verArray[v][u] = 1;
}
int main() {
   addEdge(1, 2);
   addEdge(1, 3);
   addEdge(2, 4);
   addEdge(2, 5);
   addEdge(3, 2);
   addEdge(3, 8);
   addEdge(4, 5);
   addEdge(5, 6);
   addEdge(7, 3);
   addEdge(8, 7);
   traversal(NODE);
}
