/*
Nama : Ahmad Irfan Fadholi
NPM : 140810180034
Kelas : B
Deskripsi : Adjacency List
Tgl : 7 April 2020 */
#include<iostream>
#include<list>
#include<iterator>

using namespace std;

void displayAdjList(list<int> adjList[], int g) {
   for(int i = 0; i<g; i++) {
      cout <<"Adjacency list of vertex "<< i << "\nhead";
	  list<int> :: iterator j;
      for(j = adjList[i].begin(); j != adjList[i].end(); ++j) {
         cout <<"-> "<<*j;
      }
      cout << endl;
   }
}
void addEdge(list<int> adjList[], int u, int g) {   
   adjList[u].push_back(g);
   adjList[g].push_back(u);
}
int main() {
   int g = 8;    
   list<int> adjList[g];
   addEdge(adjList, 0, 1);
   addEdge(adjList, 0, 2);
   addEdge(adjList, 1, 2);
   addEdge(adjList, 1, 3);
   addEdge(adjList, 1, 4);
   addEdge(adjList, 2, 4);
   addEdge(adjList, 2, 6);
   addEdge(adjList, 2, 7);
   addEdge(adjList, 3, 4);
   addEdge(adjList, 4, 5);
   addEdge(adjList, 6, 7);
   
   
   displayAdjList(adjList, g);
}
