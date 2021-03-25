#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

string ConvertCamelCase(string str){
    int n=str.length();
    int point_2_position=0;
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            str[i+1]=toupper(str[i+1]);
            continue;
        }else{
            str[point_2_position++]=str[i];
        }
    }
    str[0]=toupper(str[0]);
    return str.substr(0,point_2_position);
}

int main(){
    string str;
    getline(cin, str);
    string st = ConvertCamelCase(str);
    cout << st;
    return 0;
}