#include<iostream>
#include <set>

using namespace std;

int main(){
    int arr[10]={10,-15,86,-15,18,75,18,15,26,15};
    set <int> s;
    for(int i=0; i<10; i++){
        s.insert(arr[i]);
    }

    set<int> :: iterator it;
    for(it= s.begin(); it!= s.end(); it++)
        cout<<*it<<"   "<<endl;
    cout<< *s.find(55);
    return 0;
}