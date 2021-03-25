#include<iostream>
#include<string>

using namespace std;

string check_missing_charecter(string str){
    bool mark[26] = {false};
    int index;
    for(int i = 0 ; i < str.length() ; i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            index = str[i] - 'A';

        if(str[i] >= 'a' && str[i] <= 'z')
            index = str[i] - 'a';
        else
        {
            continue;
        }
        mark[index] = true;
    }
    string res = "";

    for(int i = 0; i < 26; i++){
        if(mark[i] == false){
            res+= ('A'+i); //res.push_back((char)(i+'a'));
        }
    }
    return res;
}

int main(){
    string str;
    cin >> str;
    cout << check_missing_charecter(str);
}