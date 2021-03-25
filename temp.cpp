//1. Power Set in Lexicographic order "abc"={a ab abc ac b bc c ""}

/*

generating subsequences and order must  not be same */



//2. 2’s complement of a Binary Number
//3. Replace all occurrences of string AB with C without using extra space in string
//4. Given two strings, find if first string is a subsequence of second

/*
str1 = "AXY", str2 = "ADXCPY"

true

*/

//5. Longest subsequence where every character appears at-least k times
/*
str = "aabbaabacabb"     ;       k = 5

 aabbaabaabb
*/


//6. Number of subsequences as “ab” in a string repeated K times
/*
"abcb"    K = 2

 6
*/


//7. Convert all substrings of length ‘k’ from base ‘b’ to decimal
/*
str = "12212",    k = 3, b = 3.

122, 221, 212.

 17 25 23

*/


#include <iostream>
#include <algorithm>
using namespace std;

int sub_sequence(string str,string output[]){
    if(str.length()==0){
        output[0]="";
        return 1;
    }
    string smaller_string=str.substr(1);
    int smaller_size=sub_sequence(smaller_string,output);

    for(int i=0;i<smaller_size;i++){
        output[i+smaller_size]=str[0]+output[i];
    }
    return 2*smaller_size;
}

string find2s(string str){
    int n=str.length();
    int i;
    for(i=n-1;i>=0;i--){
        if(str[i]=='1'){
            break;
        }
    }
    if(i==-1){
        return '1'+str;
    }
    for(int k=i-1;k>=0;k--){
        if(str[k]=='1'){
            str[k]='0';
        }else{
            str[k]='1';
        }
    }
    return str;
}
bool is_sub_sequence(string str1,string str2,int l1,int l2){
    int j=0;
    for(int i=0;i<l2 && j<l1;i++){
        if(str1[j]==str2[i]){
            j++;
        }
    }

    return (j==l1);
}

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

void subseq_with_k(string str,int k){
    int l=str.length();
    int freq[26]={0};
    for(int i=0;i<l;i++){
        freq[str[i]-'a']++;
    }
    for(int i=0;i<l;i++){
        if(freq[str[i]-'a']>=k){
            cout<<str[i];
        }
    }
}

int occurence_of_ab(string str,int k){
    int n=str.length();
    int n_ab=0,n_a=0,n_b=0;
    for(int i=0;i<n;i++){
        if(str[i]=='a'){
            n_a++;
        }if(str[i]=='b'){
            n_b++;
            n_ab+=n_a;
        }
    }
    return ((n_ab)*k  +  (k(k-1)*0.5)*n_a*n_b);
}


int main(){
    string str1;
    cin>>str1;
    int k;
    cin>>k;
    //string str2;
    //cin>>str2;
    /*string output[1000];
    int size_of_output=sub_sequence(str,output);
    sort(output,output+size_of_output);
    for(int i=0;i<size_of_output;i++){
        cout<<output[i]<<endl;
    }*/

    //cout<<find2s(str);
    //int l1=str1.length();
    //int l2=str2.length();
    //i am saying you must give str1 as subsequence as str2 where we have to check
    //cout<<is_sub_sequence(str1,str2,l1,l2);
    //cout<<is_sub_sequence_R(str1,str2,l1,l2);
    //subseq_with_k(str1,k);
    cout<<occurence_of_ab(str1,k);
    return 0;
}