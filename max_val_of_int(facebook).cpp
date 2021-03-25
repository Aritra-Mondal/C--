#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int maximum_of_string(string str){
    int result = str[0] - '0';
    for(int i = 1; i< str.length(); i++){
        if(str[i] == '0' || str[i] == '1' || result< 2){
            result+=(str[i]-'0');
        }
        else{
            result *= (str[i] - '0');
        }
    }
}


int main(){
    string str;
    int max = maximum_of_string(str);
    cout << max;
    return 0;
}