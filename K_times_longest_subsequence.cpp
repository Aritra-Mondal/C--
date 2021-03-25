//5. Longest subsequence where every character appears at-least k times
/*
str = "aabbaabacabb"     ;       k = 5

 aabbaabaabb
*/

#include <iostream>
#include <string>

using namespace std;

void subseq_with_k(string str,int k){
    int freq[26] = {0};
    for(int i = 0; i< str.length(); i++){
        freq[str[i]-'a']++;
    }
    for(int i = 0; i<str.length();i++){
        if(freq[str[i]-'a']>=k)
            cout << str[i];
    }
}

int main(){
    string str;
    cin>>str;
    int k;
    cin>>k;
    subseq_with_k(str, k);
}