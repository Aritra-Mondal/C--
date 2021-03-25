#include<iostream>
#include<string>

using namespace std;

bool check_duck(string str){
    int len = str.length();
    int i = 0;
    while(i < len && str[i] == '0'){
        i++;
    }
    while(i < len){
        if (str[i] == '0') return 1;
        i++;
    }
    return 0;

}


int main()
{

    string str;
    cin>>str;
    cout<<check_duck(str);
    return 0;
}