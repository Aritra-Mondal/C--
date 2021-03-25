//6. Number of subsequences as “ab” in a string repeated K times
/*
"abcb"    K = 2

 6

 output = (n_ab*k + kC2 * n_a * n_b)
*/
#include <iostream>
#include <algorithm>
using namespace std;

int occurence_of_ab(string str,int k){
    int n = str.length();
    int n_ab = 0, n_a = 0, n_b = 0;
    for(int i =0; i<n; i++){
        if (str[i] == 'a')
            n_a++;
        if (str[i] == 'b')
            n_b++;
            n_ab += n_a;
    }
    return ((n_ab)*k  +  (k*(k-1)*0.5)*n_a*n_b);
}

int main(){
    string str1;
    cin>>str1;
    int k;
    cin>>k;
    cout<<occurence_of_ab(str1,k);
    return 0;
}