#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void lps_array(string pat,int len_pat,int lps_array[]){
    int lps[len_pat];
    lps[0]=0;
    int i=1;
    int j=0;
    while(i<len_pat){
        if(pat[i]==pat[j]){
            lps[i]=j+1;
            i++;
            j++;
        }else{
            if(j!=0){
                    j=lps[j-1];
            }else{
                lps[i]=0;
                i++;
            }
        }
    }
    for(int i=0;i<len_pat;i++){
        lps_array[i]=lps[i];
        cout<<lps[i];
    }
}


void kmp_search(string str,string pat){
    int len_pat=pat.length();
    int len_str=str.length();
    int lps_arr[len_pat];
    lps_array( pat,len_pat,lps_arr);
    int i=0;
    int j=0;
    while(i<len_str){
        if(str[i]==pat[j]){
            i++;
            j++;
        }
        if(j==len_pat){
            cout<<endl<<i-j<<endl;
            j=lps_arr[j-1];
        }
        else{

        }
        if(pat[j]!=str[i]){
            if(j!=0){
            j=lps_arr[j-1];
            }
            else{
                i++;
            }
        }
    }
}

int main()
{
    string str="abcabccca";
    string pat="cabc";
    int len_pat=pat.length();

    kmp_search( str,pat);
    return 0;
}