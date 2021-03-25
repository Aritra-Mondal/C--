#include<iostream>
#include<string>

using namespace std;

string remove_punctuation(string str){
    int len = str.length();
    for(int i = 0; i< len; i++){
        if(ispunct(str[i])){
            str.erase(i,1);
            i--;
            len -= 1;
        }
    }
    return str;
}

int main(){
    string str;
    cin >> str;
    cout << remove_punctuation(str);
    return 0;
}