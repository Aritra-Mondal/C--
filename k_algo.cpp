#include <iostream>

using namespace std;


void build_z(int* z,string z_str){
    int l=0;
    int r=0;
    int n=z_str.length();
    for(int i=1;i<n;i++){
        if(i>r){
            l=i;
            r=i;
            while(z_str[r]==z_str[r-l]  && r<n){
                r++;
            }
            z[i]=r-l;
            r--;
        }else{
            int k=i-l;
            if(i + z[k] <= r){
                z[i]=z[k];
            }else{
                l=i;
                while(z_str[r]==z_str[r-l]  && r<n){
                r++;
            }
            z[i]=r-l;
            r--;
            }
        }
    }
}

void z_search(string str , string pat){
    string z_str=pat+"$"+str;
    int n=z_str.length();
    int* z= new int [n];
    build_z(z,z_str);
    for(int i=0;i<n;i++){
        if(z[i]==pat.length()){
            cout<<i-pat.length()-1<<endl;
        }
    }
}

int main()
{
    string str="jhsdbnmlkjdfbnml";
    string pat="bnml";
    z_search(str,pat);
    return 0;
}