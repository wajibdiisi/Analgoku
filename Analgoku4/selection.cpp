#include<iostream>
#include <chrono>
#include <unistd.h>
using namespace std;
void swap(int &a, int &b) {
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void printData(int *array, int length) {
   for(int i = 0; i<length; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selectionSort(int *array, int length) {
   int i, j, imin;
   for(i = 0; i<length-1; i++) {
      imin = i;   
      for(j = i+1; j<length; j++)
         if(array[j] < array[imin])
            imin = j;
         swap(array[i], array[imin]);
   }
}
int main() {
   int n;
   cout << "Masukkan banyak data : ";
   cin >> n;
   int arr[n];
   cout << "Masukkan Data : ";
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   auto start = std::chrono::steady_clock::now();
   selectionSort(arr, n);
   auto end = std::chrono::steady_clock::now();
   auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
   cout << "Data setelah di-Sorting : ";
   printData(arr, n);
   cout << "\nElapsed time in nanoseconds : " << elapsed.count()<< " ns" << endl;
}
