#include<iostream>

using namespace std;

void insertion_sort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int key = arr[i];
        int  j = i-1;

        // Compare key with each element on the left of it until an element smaller than
        // it is found.
        // For descending order, change key<array[j] to key>array[j].
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int array [] = {44,55,97,01,10,52,98,25,66};
    int length = sizeof(array)/sizeof(array[0]);
    insertion_sort(array, length); 
    return 0;
}