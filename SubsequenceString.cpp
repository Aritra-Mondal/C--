#include <iostream>
#include <algorithm>

using namespace std;

int sub_sequence (string str, string output[]){
        if(str.length() == 0){
            output[0] = "";
            return 1;
        }

        string smaller_string = str.substr(1);
        int smaller_size = sub_sequence(smaller_string, output);

        for(int i = 0; i < smaller_size; i++){
            output[i+smaller_size]=str[0]+output[i];
        }
        return 2* smaller_size;
    }

int main(){
    string str;
    cin>>str;
    string output[1000];
    int size_of_output=sub_sequence(str,output);
    sort(output,output+size_of_output);
    for(int i=0;i<size_of_output;i++){
        cout<<output[i]<<endl;
    }
}