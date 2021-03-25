#include<iostream>

using namespace std;

int binary_search(int array[], int strt, int end, int search){
    int mid =strt + (end-strt)/2;
    if(array[mid] == search){
        return mid;
    }
    else if(search < array[mid]){
        return binary_search(array, strt, (mid-1), search);
    }
    else if(search> array[mid]){
        return binary_search(array, (mid+1), end, search);
    }
    else
        return -1;
}

int main(){
    int arr [] = {2,3,4,10,40};
    int search = 10;
    int length = sizeof(arr)/ sizeof(arr[0]);
    int find = binary_search(arr, 0, length-1, search);
    (find == -1)?cout<<"404 not found!!!!!" :cout<< "The number found at position: " <<find + 1 << endl;
    return 0;
}