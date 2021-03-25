#include <iostream>
#include <iomanip>
#include "add.h"
using namespace std;
namespace A
{
    int x = 5;
    void printx() {
        cout << x << endl;
     }
}

namespace B 
{
    int x = 10;
    void printx() {
        cout << x << endl;
    }
}

int main()
{
    A::printx();
    B::printx();
    int a = add(50);
    cout << endl << endl << a <<endl;
    return 0;
}


