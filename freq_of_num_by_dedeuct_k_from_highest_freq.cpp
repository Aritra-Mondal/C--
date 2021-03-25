#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void square_sum_deductk(string str, int k){
    int freq_of_chars[26];
    memset(freq_of_chars, 0, sizeof(freq_of_chars));
    int n = str.length();
    for(int i = 0; i<n; i++){
        freq_of_chars[str[i] - 'a']++;
    }
    int maximum = *max_element(freq_of_chars,freq_of_chars + 26);
    int deducted_sum = 0;
    for(int i = 0; i<n; i++){
        deducted_sum = deducted_sum + (freq_of_chars[i]*freq_of_chars[i]);
    }
    int final = deducted_sum - (maximum*maximum) + ((maximum - k)*(maximum-k));
    cout << final;

}

int main(){
    string str;
    cin >> str ;
    int k;
    cin >> k;
    square_sum_deductk(str,k);
    return 0;
}