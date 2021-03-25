#include <iostream>
#include<array>

using namespace std;

int main(){
    array<int, 5> a1 = {10,15,20,25,30};
    cout << a1.front() << endl;
    cout << a1.back() << endl;
    cout << a1.at(2) << endl;
    array<int, 5> a2 = {1,2,3,4,5};
    a1.swap(a2);
    for(int i = 0; i<5; i++){
        cout << a1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i<5; i++){
        cout << a2[i] << " ";
    }
    return 0;
}
