#include<string>
#include<iostream>

using namespace std;

bool check_digit(char c){
    if (c >= '0' && c <= '9')
        return 1;
    else
    {
        return 0;
    }    
}
bool check_number(string str){
    for(int i = 0; i < str.length(); i++){
        if(check_digit(str[i] == false))
            return false;
    }
    return true;
}

int main(){
    string str;
    cin >> str;
    cout << check_number(str);
    return 0;
}