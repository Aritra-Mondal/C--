#include <iostream>
#include <string>

using namespace std;

string find2s(string str){
    int n = str.length();
    int i;
    for(i = n-1 ; i >= 0; i--){
        if(str[i] == 1)
            break;
    }
    if(i==-1)
        return '1' + str;

    for(int k = i-1; k>=0 ;k++){
        if(str[k]=='1'){
            str[k]='0';
        }else{
            str[k]='1';
        }
    }
    return str;
}

int main(){
    string str;
    cin >> str;
    cout << find2s(str);
    return 0;
}