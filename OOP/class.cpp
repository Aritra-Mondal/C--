#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
struct students
{   private:
        int age;
        char name[20];
    public:
        void input(){
            cin >> age;
            if(age<0){
                age *= -1;
            }
            cin >> name;
            }
    
        void display(){
            cout << name << "   " << age;
        }


};




int main(){
    students ram;
    ram.input();
    ram.display();

    
    
    return 0;
}
