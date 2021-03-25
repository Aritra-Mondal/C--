//Array and Recursion
//1.Sum of array using Recursion
//2.Linearly search Using Recursion
//3.Binary Search Using Recursion
//4.Find Min and max element using recursion
//5.Mean of array using recursion
//6.First index of a number in an array
//7.Last index of a number in an array
#include <iostream>
#include <math.h>
using namespace std;
int sum(int arr[],int sizes){
    if(sizes==0){
        return 0;
    }
    //int small_sum=sum(arr+1,sizes-1);
    //return small_sum+arr[0];

    int small_sum2=sum(arr,sizes-1);
    return small_sum2+arr[sizes-1];
}

int linear_search(int arr[],int sizes,int x){
    if(sizes==0){
        return -1;
    }

    if(arr[0]==x){
            return 0;
    }
    int small_linear_search=linear_search(arr+1,sizes-1,x);
    if(small_linear_search==-1){
        return small_linear_search;
    }else{
        return small_linear_search+1;
    }

}

int binary_searchs(int arr[],int l,int r,int x){
    if(r>=l){
        int mid=(l+r)/2; l+(r-l)/2;
       if(arr[mid]==x){
        return mid;
       }
       if(arr[mid]>x){
        return binary_searchs(arr,l,mid-1,x);
       }
       if(arr[mid]<x){
        return binary_searchs(arr,mid+1,r,x);
       }
    }
    return -1;
}



int minimum_of_array(int arr[],int sizes){
    if(sizes==0){
        return 0;
    }
    if(sizes==1){
        return arr[0];
    }
    int min_smaller_array=minimum_of_array(arr+1,sizes-1);
    return min(arr[0],min_smaller_array);
}

double mean(int arr[],int sizes){
    if(sizes==0){
        return 0;
    }
    if(sizes==1){
        return arr[0];
    }
    double smaller_mean=mean(arr+1,sizes-1);
    return (arr[0]+smaller_mean*(sizes-1))/sizes;
}

int last_index_element(int arr[],int sizes,int x){
    if(sizes==0){
        return -1;
    }

    int smaller_last_element=last_index_element(arr+1,sizes-1,x);
    if(smaller_last_element==-1){
        if(arr[0]==x){
            return smaller_last_element+1;
        }else{
            return smaller_last_element;
        }
    }
    return smaller_last_element+1;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,6,10};

    //cout<<sum(arr,10);
    //cout<<linear_search(arr,10,6);
    //cout<<binary_searchs(arr,0,9,7);
    //cout<<minimum_of_array(arr,10);
    //cout<<mean(arr,10);
    cout<<last_index_element(arr,10,10);
    return 0;
}