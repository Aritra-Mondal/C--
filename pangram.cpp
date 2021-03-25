#include<iostream>
#include<string>

using namespace std;

bool pangram_check(string &str){
    bool mark[26] = {false};
    int index;
    for(int i = 0; i < str.length(); i++){
        if('A' <= str[i] && str[i] <= 'Z')
            index = str[i] - 'A';

        if('a' <= str[i] && str[i] <= 'z')
            index = str[i] - 'a';
        else
        {
            continue;
        }
        mark[index] = true;
        
    }
    for(int i = 0; i <26; i++){
        if(mark[i]==false){
            return false;
        }
    }
    return true;
}

int main(){
    string str;
    cout << "Enter Your String: ";
    cin >> str;
    cout << pangram_check(str);
}