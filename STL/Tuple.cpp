#include<iostream>
#include <tuple>

using namespace std;

int main(){
    tuple <string ,int ,int ,int > tuple1;
    tuple1= make_tuple("maths",10,15,20);
    cout<<get<0>(tuple1)<<endl;
    cout<<get<1>(tuple1)<<endl;
    cout<<get<2>(tuple1)<<endl;
    cout<<get<3>(tuple1)<<endl;
    return 0;
}