#include<iostream>
#include <map>

using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,5};
    map<int ,int > m1;
    for(int i=0;i<7;i++){
        m1[arr[i]]=m1[arr[i]]+1;
    }
    //m[1]=1;
    //m[2]=1;
    map <int ,int > :: iterator it;
    for(it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<"    "<<it->second<<endl;
    }

    map <int,string > students;
    students[100]="ram";
    students[576]="ram1";
    students [4586]="usdvabhjdvf";
    map <int ,string > :: iterator it1;
    
    
    
    map<int ,string >::iterator it2;
    
    for(it1=students.begin();it1!=students.end();it1++){
        cout<<it1->first<<"    "<<it1->second<<endl;
    }

    return 0;
    return 0;
}