#include <iostream>

using namespace std;

int main(){
    int i=65;
    char c=i;//implicit
    cout<<c<<endl;
    int * p = &i;
    //char * pc = p explicit type conversion is required
    char * pc  =(char *)p;
    cout<<*p<<endl;
    cout<<*pc<<endl;
    cout<<*(pc+1)<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+4)<<endl;
    return 0;
}