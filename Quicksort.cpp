#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int i = start;
    for(auto j=start; j<end; j++){
        if(arr[j]<pivot){
            
            swap(&arr[j], &arr[i]);
            i++;
        }    
    }
    swap(&arr[i], &arr[end]);
    return i;
}

void quickSort(int arr[], int start, int end){
    if (start<end){
        auto pi = partition(arr,start,end);
        quickSort(arr, start, pi-1);
        quickSort(arr, pi+1, end);

    }
}
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
} 

int main()
{  
    int arr[] = {10, 7, 8, 9, 1, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    quickSort(arr, 0, n - 1);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
} 