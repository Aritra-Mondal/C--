#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    int flag = 0;
;    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
}

void printarray(int arr[], int n){
    for(int i = 0; i<n; i++)
        cout << arr[i] << endl;
}

int main(){
    int array [] = {44,55,97,01,10,52,98,25,66};
    int size = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, size);
    printarray(array,size);
    return 0;
}