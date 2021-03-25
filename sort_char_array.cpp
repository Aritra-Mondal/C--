#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

//sort(str.begin(), str.end())
void sort_string(string str){
    sort(str.begin(), str.end(), greater <int>());
    cout << str;
}

void sort_string2(string str){
    int freq[26] = {0};
    for(int i = 0; i<str.length(); i++){
        freq[str[i] - 'a']++;
    }

    for(int i = 0; i<26;i++){
        for(int j = 0; j<freq[i]; j++){
            cout << (char)(i + 'a');
        }
    }
}



int main(){
    string str;
    cin >> str;
    sort_string(str);
    return 0;
}