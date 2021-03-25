/*
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    float cubeSide = 5.4;
    float sphareRadius = 2.33;
    float coneRadius = 7.64;
    float coneHeight = 14;

    float volCube, volSphare, volCone;
    volCube  = pow(cubeSide,3);
    volSphare  = (4)*M_PI *pow(sphareRadius,3)/3;
    volCone=M_PI*pow(coneRadius,2)*coneHeight/3;
    cout<<volCube<<"     "<<volSphare<<"    "<<volCone;
    return 0;
}
*/
/*

//In c++ data type should be known at compile time.
#include <iostream>

     int main()
     {
          float width = 4.5;
          float height = 5.5;
          string  str ="abdjdd";
          auto str1 ="ashish";
          auto area = width * height;
          std::cout << "area = " << area<<"\n";
          std::cout<<str;
          return 0;
     }

*/

/*
#include <iostream>
#include <bits/stdc++.h>

     int main()
     {
         int numerator = 4;
         int denominator = 5;

         float answer = numerator / denominator;
         std::cout<<"answer = "<<answer;
         //std::cout<<typeof(numerator/denominator);
         return 0;
     }

*/


#include <iostream>

int main()
{
    int n1 = 1;
    int n2 = ++n1;//prefix n2=2 & n1=2;
    int n3 = ++ ++ ++n1; //prefix  n1=4; n3=4;
    int n4 = n1++;//postfix n4=4;n1=5;
    //int n5 = n1++ ++;   // error
//  int n6 = n1 + ++n1; // undefined behavior
    std::cout << "n1 = " << n1 << '\n'
              << "n2 = " << n2 << '\n'
              << "n3 = " << n3 << '\n'
              << "n4 = " << n4 << '\n';
}

