/*
#include <iostream>

using namespace std;

int main (){
    int a=10;
    int b=a;
    int * ptr =&a;

    (*ptr)++;//a=11;
    int& referer =a;
    cout<<*ptr<<endl;
    referer=50;
    cout<<a<<endl;
    return 0;
}
*/

//Goal: Examine pointers!/
/*
#include <iostream>

using namespace std;

int main()
{
     int a = 54;
     cout<<"a = "<<a<<"\n";
     cout<<"address of a is at &a = "<< &a<<"\n";
    // int  * pointer2 = &a;
     //double b= 5.4;
     //double * pointer_float=&b;
     //cout<<pointer_float;
     int * pointer=&a;
     cout<<pointer<<endl;
     //*pointer=20;
     //a=20;
     cout<<*pointer<<endl;
     int* *pointer_to_pointer=&pointer;
     cout<<pointer_to_pointer<<endl;
     cout<<**pointer_to_pointer<<endl;
     cout<<*pointer_to_pointer<<endl;
     //int** *p_2_2_p=&pointer_to_pointer;
     //cout<<***p_2_2_p<<endl;
     //cout<<pointer_float<<endl;

     //pointer_float+=2;
     //cout<<pointer_float<<endl;
     //cout<<sizeof(pointer_float)<<endl;
    return 0;
}

*/



/*
//Goal: Find out why you care about pointers

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

void print_Message() ; //note, this is placed BEFORE main()

int main()
{
    print_Message();
    return 0;
}

//note, the definition is conventionally placed after main
void print_Message()
{
    std::cout<<"HEY! I'm from a function!";
}

*/


/*
//Printing product of two number using function
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

void printProduct(int m_a, int m_b, int product_f)
{
    std::cout<<m_a<<" * "<<m_b<<" = "<<product_f;
}


*/

/*
Function Pass by value

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


/*
 //Reference Variable
#include<iostream>
using namespace std;

int main()
{
int x = 10;

// ref is a reference to x.
int& refer = x;

// Value of x is now changed to 20
refer = 20;
cout << "x = " << x << endl ;

// Value of x is now changed to 30
x = 30;
cout << "refer = " << refer << endl ;

return 0;
}

*/


/*
// Pass by refererence in c++
//Pass by refererence is not Available in C language.refererence is exclusive for C++
//In C language Pass by Pointers is sometime called as Pass by refererence
#include<iostream>

using namespace std;

void my_function(int& refer){
	refer = 55;
	cout << "Value of x from my_function: " << refer << endl;
}

main(){
	int x = 10;
	cout<<x<<endl;
	my_function(x);
  	cout << "Value of x from main function: " << x;
}

*/




//Pass by pointers or Call by address.
#include <iostream>
using namespace std;

void swap(int * x,int * y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    //Formal Parameter

    //*x=*x+*y;
    //*y=*x-*y;
    //*x=*x-*y;
}

main(){
	int x = 10;
	int y=20;
	swap(&x,&y);//Actual Parameter
	//int * ptr =&a;
  	cout << x<<"         "<<y;
}
