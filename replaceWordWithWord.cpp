//Replace all occurrences of string AB with C without using extra space in string

#include<iostream>
#include<string>
using namespace std;

string replace_occurance(string str){
    int count = 0;
    for(int i = 0; i<str.length() -1; i++){
        if(str[i] == 'A' && str[i+1] == 'B'){
            str[i] = 'C';
            for(int k = i+1; k < str.length()-1;k++){
                str[k] = str[k+1];
            }
            count++;
        }
    }
    return str.substr(0,(str.length()-2));
}

int main(){
    string str;
    cin >> str;
    cout << replace_occurance(str);
    return 0; 
}