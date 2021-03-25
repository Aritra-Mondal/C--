#include<iostream>
#include<string>

using namespace std;

void print_initials(string str){
    cout << (char)toupper(str[0]);
    for(int i = 0; i<str.length(); i++){
        if(str[i] == ' '){
            cout<< " " << (char)toupper(str[i+1]);
        }
    }
}

int main(){
    string str;
    getline(cin, str);
    print_initials(str);
    return 0;
}
