#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

bool check_division_11(string str){
    int n = str.length();
    if(n==0){
        return false;
    }
    int odd_places = 0;
    int even_places = 0;

    for(int i=0; i<n;i++){
        if(i%2 == 0){
            even_places+=(str[i] - '0');
        }else{
            odd_places += (str[i] - '0');
        }
    }
    return ((even_places - odd_places)%11 == 0);
}



int main(){
    string str;
    cin >> str;
    cout << check_division_11(str);
    return 0;
}