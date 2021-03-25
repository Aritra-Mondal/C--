#include<iostream>
#include<utility>
using namespace std;
//pair is not a part of a container
int main(){
    pair<string, string> p1;
    p1 = make_pair("India", "New Delhi");
    cout << p1.first<< "  " << p1.second;
    cout << endl;
    pair<string, int> p2;
    p2 = make_pair("Mathematics", 98);
    cout << p2.first<< "  " << p2.second;

    return 0;
}