#include<iostream>

using namespace std;

template <class type>
type largest(type a , type b){
    if(a > b)
        return a;
    else 
        return b;
}

int main(){
    cout << largest(4.75, 5.099);
    return 0;
}