#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

bool check_division_4(string str){
    int n = str.length();
    if(n==0){
        return false;
    }
    if(n == 1){
        return (str[0] - '0')%4 == 0;
    }
    int last = str[n-1] - '0';
    int second_last = str[n-2] - '0';
    return ((last+second_last*10)%4 == 0);
}



int main(){
    string str;
    cin >> str;
    check_division_4(str);
    return 0;
}