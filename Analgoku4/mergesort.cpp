#include <iostream>
#include <chrono>
#include <unistd.h>
using namespace std;
void merge(int *,int, int , int );
void merge_sort(int *arr, int low, int high){
	
    int mid;
    if (low < high){
      
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }
}

void merge(int *arr, int low, int high, int mid){
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}


int main(){
    int arr[20], num;
    cout<<"Masukkan banyak data : ";
    cin>>num;
    cout<<"Masukkan Data : ";
    for (int i = 0; i < num; i++) {
		cin>>arr[i];
    }
    auto start = std::chrono::steady_clock::now();
    merge_sort(arr, 0, num-1);
    auto end = std::chrono::steady_clock::now();
	auto elapsed =
    std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    
    cout<<"Data setelah di sorting\n";
    for (int i = 0; i < num; i++){
        cout<<arr[i]<<" ";
    }
    cout << "\nElapsed time in nanoseconds : " << elapsed.count()<< " ns" << endl;
  
}
