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
void bubbleSort(int *array, int length) {
   for(int i = 0; i<length; i++) {
      int isSwap = 0;
      for(int j = 0; j<length-i-1; j++) {
         if(array[j] > array[j+1]) {
            swap(array[j], array[j+1]);
            isSwap = 1;
         }
      }
      if(!isSwap)
         break;       
   }
}
int main() {
   int n,arr[30];
   cout<< "Bubble Sort\n";
   cout << "Masukkan banyak Data: ";
   cin >> n;
   cout << "Masukkan Data : ";
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   auto start = std::chrono::steady_clock::now();
   bubbleSort(arr, n);
   auto end = std::chrono::steady_clock::now();
   auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
   cout << "Array setelah di-Sorting: ";
   printData(arr, n);
   cout << "\nElapsed time in nanoseconds : " << elapsed.count()<< " ns" << endl;
}
