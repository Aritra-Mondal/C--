/*
str1 = "AXY", str2 = "ADXCPY"

true

*/

#include<iostream>
#include<string>

using namespace std;

bool is_sub_sequence(string str1, string str2, int n1, int n2){
    int i, j=0;
    for(i = 0; i<n1 && j <n2; i++){
        if(str2[j] == str1[i]){
            j++;
        }
    }
    return j == n2;

}
//recursive way
bool is_sub_sequence_R(string str1,string str2,int l1,int l2){
    if(l1==0){
        return true;
    }
    if(l2==0){
        return false;
    }
    if(str1[l1-1]==str2[l2-1]){
            return is_sub_sequence_R(str1,str2,l1-1,l2-1);
    }

    return is_sub_sequence_R(str1,str2,l1,l2-1);
}

int main(){
    string str2 = "AXY", str1 = "ADXCPY";
    cout << is_sub_sequence(str1, str2, str1.length(), str2.length());
    return 0;
}