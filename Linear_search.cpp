#include<iostream>

using namespace std;

int linear_search(int arr[], int len, int search){
    int flag = 0;
    for(int i=0; i<len; i++){
        if(arr[i] == search){
            cout <<"the number is found at position:"<<i << endl;
            flag = 1;
        }
    }
    if(flag == 0){
         cout <<"Number not found!!";
    }
    return 0;
}

int main(){
    int n, search;
    
    cout << "Enter the size of the array:";
    cin >> n;
    int arr[n];
    
    for(int i=0 ; i<n; i++){
        
        cout << "Array["<<i<<"]=";
        cin >> arr[i];
    }
    cout << "Enter the element that you want to search:";
    cin >> search;
    linear_search(arr, n, search);
}