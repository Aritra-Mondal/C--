/*#include <iostream>

using namespace std;

int main()
{
     int a = 54;
     cout<<"a = "<<a<<"\n";
     cout<<"address of a is at &a = "<< &a<<"\n";
     int *pointer = &a;
     cout<< pointer<<endl;
     cout<< &pointer<<endl;
     cout<< *pointer<<endl;
     int* *p_2_p = &pointer;
     cout<< p_2_p<<endl;
     cout<< &p_2_p<<endl;
     cout<< *p_2_p<<endl;
     cout<< **p_2_p<<endl;
    return 0;
}
*/
/*
Goal: Find out why you care about pointers

#include<iostream>
#include<string>

int main ()
{
  int * pointerI;
  int number;
  char character;
  char * pointerC;
  std::string sentence;
  std::string *pointerS;

  pointerI = &number;
  *pointerI = 45;

  pointerC = &character;
  *pointerC = 'f';

  pointerS = &sentence;
  *pointerS = "Hey look at me, I know pointers!";

  std::cout << "number = "<<number<<"\n";
  std::cout<<"character = "<<character<<"\n";
  std::cout<<"sentence = "<<sentence<<"\n";

  return 0;
}
*/

/*

//Goal: practice functions that do not return a value and do not accept parameters


#include<iostream>

void printMessage(); //note, this is placed BEFORE main()

int main()
{
    printMessage();
    return 0;
}

//note, the definition is conventionally placed after main
void printMessage()
{
    std::cout<<"HEY! I'm from a function!";
}

*/

/*
Printing product of two number using function
#include<iostream>

void printProduct(int m1, int m2, int product);

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;

    printProduct(m1, m2, product);
    return 0;
}

void printProduct(int m1, int m2, int product)
{
    std::cout<<m1<<" * "<<m2<<" = "<<product;
}
*/



/*
//Function Pass by value

#include<iostream>

void increment(int input);
int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    return 0;
}
void increment(int input)
{
    input++;
    std::cout<<"In the function call a = "<<input<<"\n";
}
*/






// Pass by reference
#include<iostream>

using namespace std;

void my_function(int &x){
	x = 55;
	cout << "Value of x from my_function: " << x << endl;
}

main(){
	int x = 10;
	my_function(x);
  	cout << "Value of x from main function: " << x;
}





/*
#include<iostream>

using namespace std;

void swap(int *x,int *y){
    //int temp;
    //temp=*x;
    //*x=*y;
    //y=temp;

    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

main(){
	int x = 10;
	int y=20;
	swap(&x,&y);
  	cout << x<<"         "<<y;
}

*/