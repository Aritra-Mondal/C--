#include<iostream>

using namespace std;

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//select the min element's position and swap with elements from starting of the array
void selection(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int min_pos = i;
        for(int j = i; j<n; j++){      // finding the minimum position
            if(arr[min_pos]<arr[j])
                min_pos = j;
        }
        swap(&arr[i], &arr[min_pos]);
    }  
}

void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
} 

int main()  
{  
    int arr[] = {64, 25, 12, 22, 11};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    selection(arr, n);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  