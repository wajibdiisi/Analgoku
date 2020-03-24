#include<iostream>
#include <chrono>
#include <unistd.h>
using namespace std;
void insertionSort(int *array, int length) {
   int temp, j;
   for(int i = 1; i<length; i++) {
      temp = array[i];
      j = i;
      while(j > 0 && array[j-1]>temp) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = temp;   
   }
}
void printData(int *array, int length) {
   for(int i = 0; i<length; i++)
      cout << array[i] << " ";
   cout << endl;
}

int main() {
   int n,arr[30];
   cout << "Masukkan banyak data: ";
   cin >> n;
       
   cout << "Masukkan Data : ";
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array sebelum di-Sorting: ";
   printData(arr, n);
   auto start = std::chrono::steady_clock::now();
   insertionSort(arr, n);
   auto end = std::chrono::steady_clock::now();
   auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
   cout << "Array setelah di-Sorting: ";
   printData(arr, n);
   cout << "\nElapsed time in nanoseconds : " << elapsed.count()<< " ns" << endl;
}
