#include<iostream>
#include<string>

int main()
{
    //instead of printing 0 and 1, create an array where
    //0 = False, 1 = True
    std::string TorF[] = {"False", "True"};
    //TorF[0]=False;
    //TorF[1]=True;

    //false=0;
    //true=1;


    int a = 100;
    int b = 33;
    int c = 33;

    //Print out the string values of each relational operation
    std::cout<<"a < b is "<<TorF[a<b];
    std::cout<<"\n a > b is "<<TorF[a>b];
    std::cout<<"\n a != b is "<<TorF[a!=b];
    std::cout<<"\n c >= b is "<<TorF[c>=b];
    std::cout<<"\n c <= b is "<<TorF[c<=b];
    return 0;
}




/*
//Goal: use if statements

#include<iostream>

int main()
{
    int a = 12;

    std::cout<<"This program checks the value of a.\n";

    if(a == 6)
    {
        std::cout<<"a is equal to a half dozen.\n";
    }
    else{
        std :: cout<<"a is not equal to half a dozen. \n";
    }

    std::cout<<"There is not much to say about a\n";
    return 0;
}

*/




/*
//Goal: learn if-else statements in C++


#include<iostream>

int main()
{
    int TARGET = 33;
    int guess;
    std::cout<<"Guess a number between 0 - 100\n";
    std::cin>>guess;

    std::cout<<"You guessed: "<<guess<<"\n";


    if(guess < TARGET)
    {
        std::cout<<"Your guess is too low.\n";
    }
    else if( guess > TARGET)
    {
        std::cout<<"Your guess is too high.\n";
    }
    else
    {
        std::cout<<"Yay! You guessed correctly.\n";
    }


    return 0;
}


*/













/*

Goal: demonstrate use cases for the switch statement.

#include <iostream>

int main()
{
    int menuItem = 1;

    std::cout<<"What is your favorite winter sport?: \n";
    std::cout<<"1.Skiing\n2: Sledding\n3: Sitting by the fire";
    std::cout<<"\n4.Drinking hot chocolate\n";
    std::cout<<"\n\n";

    switch(menuItem)
    {
        case(1): std::cout<<"Skiing?! Sounds dangerous!\n";
                 break;
        case(2): std::cout<<"Sledding?! Sounds like work!\n";
                 break;
        case(3): std::cout<<"Sitting by the fire?! Sounds warm!\n";
                 break;
        case(4): std::cout<<"Hot chocolate?! Yum!\n";
                 break;
        default: std::cout<<"Enter a valid menu item";
    }

    char begin;
    std::cout<<"\n\nWhere do you want to begin?\n";
    std::cout<<"B. At the beginning?\nM. At the middle?";
    std::cout<<"\nE. At the end?\n\n";
    begin = 'M';

    switch(begin)
    {
        case('B'): std::cout<<"Once upon a time there was a wolf.\n";
        case('M'): std::cout<<"The wolf hurt his leg.\n";
        case('E'): std::cout<<"The wolf lived happily everafter\n";
    }
    return 0;
}
*/



/*

Goal: understand the switch statement in C++



#include<iostream>

int main()
{
    char menuItem;
    std::cout<<"Choose your holiday package:\n";
    std::cout<<"L: luxury package\nS: standard package\n";
    std::cout<<"B: basic package ";

    std::cin>>menuItem;
    std::cout<<menuItem<<"\n";
        std::cout<<"The "<<menuItem<<" package includes:\n";

    switch(menuItem)
    {
        case 'L':
        {
            std::cout<<"\tSpa Day\n";
            std::cout<<"\tSailboat Tour\n";
        }
        break;
        case 'S':
        {
            std::cout<<"\tCity Tour\n";
            std::cout<<"\tComplimentary Happy Hour\n";
        }
        break;
        case 'B':
        {
            std::cout<<"\tAirport Transfers\n";
            std::cout<<"\tComplimentary Breakfast\n";
            break;
        }
        default:
            std::cout<<"Please select the L,S,B package.\n";
    }
    return 0;
}




*/




//Write a program that asks a user for five numbers.
//Print out the sum and average of the five numbers.

/*
#include <iostream>

int main()
{
    float input;
    float sum = 0;

    for(int i=0;i<5;i++)
    {
        std::cout<<"What is the next number?\n";
        std::cin>>input;
        sum+=input;
    }//end of for loop

    std::cout<<"Sum = "<<sum<<"\n";
    std::cout<<"Average = "<<sum/5<<"\n";
    return 0;
}
*/