#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    // vector<int> v1(5);
    // for(int i = 0; i<5; i++){
    //     v1[i] = i+10;
    // }
    // vector<int> :: iterator it;
    // for(it = v1.begin(); it!=v1.end(); it++){
    //     cout << *it << " ";
    // }

    vector <int>  v1;
    v1.push_back(10);
    v1.push_back(11);
    v1.push_back(-56);
    v1.push_back(-100);
    v1.push_back(1000);
    vector  <int> :: iterator it;
    for(it=v1.begin();it!=v1.end();it++){
            cout<<*it<<" ";}
    sort(v1.begin(),v1.end());
    cout<<endl;
    for(it=v1.begin();it!=v1.end();it++){
            cout<<*it<<" ";}

    return 0;
}