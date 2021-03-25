#include<iostream>
#include<string>
using namespace std;

int main(){
    string n;
    cout << "What is your name???"<<endl;
    getline(cin, n);
    cout << n;
}

/* 
int main(){
    string name1;
    getline(cin,name1);

    string address1;
    getline(cin,address1);

    string phone1;
    getline(cin,phone1);

    cout<<"\n";
    cout<<"\n";
    cout<<"\n";

    string name2;
    getline(cin,name2);

    string address2;
    getline(cin,address2);

    string phone2;
    getline(cin,phone2);
    cout<<name1<<"    "<<address1<<"    " <<phone1<<"\n";
    cout<<name2<<"    "<<address2<<"    " <<phone2;

    return 0;
}
*/

/*
int main()
{
    int year = 0;
    int age = 0;
    std::string name = " ";
    //print a message to the user
    std::cout<<"What year is your favorite? ";

    //get the user response and assign it to the variable year
    std::cin >> year;

    //output response to user
    std::cout<<"How interesting, your favorite year is "<<year<<"!\n";

    //print a message to the user
    std::cout<<"At what age did you learn to ride a bike? ";

    //get the user response and assign it to the variable age
    std::cin >> age;

    //output response to user
    std::cout<<"How interesting you learned to ride at "<<age<<"!\n";

    std::cout<<"What is your name? ";
    std::cin>>name;
    std::cout<<"Hello "<<name<<" !\n";
    return 0;
}
*/

/*
#include<string>
#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string s_l,s_b;
     //cin>>s_l>>s_b;
    getline(cin,s_l);
    getline(cin,s_b);
    float l,b;
    stringstream(s_l) >> l;
    stringstream(s_b) >> m;
    
    cout << l*b;

    return 0;
}
*/