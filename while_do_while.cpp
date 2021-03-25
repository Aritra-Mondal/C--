/*//Goal: understand the syntax of while loops

#include <iostream>

int main()
{
    int entry = 0;

    //with this while loop the condition is true
    //so the statements are executed
    while(entry <=5)
    {
        std::cout<<"incrementing entry = "<<entry<<"\n";
        entry++;
    }
        std :: cout<<"Entry out of 1st while loop is "<<entry<<std::endl;
    //with this while loop the condition is false
    //so the statements are not executed
    entry =0;
    while(entry > -5)
    {
        std::cout<<"decrementing entry = "<<entry<<"\n";
        entry--;
    }
     std :: cout<<"Entry out of 1st while loop is "<<entry<<std::endl;

    return 0;
}


*/

/*
//Goal: understand the do..while loop

#include <iostream>


int main()
{
    int count = 0;

    //This do..while loop will execute until count =5
    do
    {
        std::cout<<"Count = "<<count<<"\n";
        count++;
    }while(count < 5);


    int otherCount = 6;
    //This do..while loop will execute once. Even though
    //otherCount > 5
    do
    {
        std::cout<<"othercount = "<<otherCount<<"\n";
        otherCount++;
    }while(otherCount < 5);

    return 0;
}

*/












/*
//Goal: while loop and target number.

#include <iostream>
#include<sstream>

int main()
{
    int target = 55;
    std::string userString;
    int guess = -1;

    while(guess != target )
    {
        std::cout<<"Guess a number between 0 and 100: ";
        std::cin>>guess;
        std::cout<<guess<<"\n";
        if(guess > target)
            std::cout<<"Your guess is too high\n";
        else if(guess < target)
            std::cout<<"Your guess is too low\n";
        else
            std::cout<<"You guessed the target!\n";

        //Note I had to use double quotes around "q"
        //because it is a string
        if(guess == -1)
        {
            std::cout<<"good bye!";
            break;
        }
    }

    return 0;
}

*/




//Goal: understand the break and conitnue statements

#include<iostream>


int main()
{
    int a = 0;
    while(a < 5)
    {
        std::cout<<"a = "<<a<<"\n";
        a++;
        if(a == 3)
            break;
    }
    //a=3;
    std::cout<<"The first statement after the first while loop\n\n";


    while(a < 15)
    {
        a++;
        if(a == 10)
        {
            std::cout<<"\tWhen a=10, go back to the top of the loop";
            std::cout<<"\n\tThis means a=10 is skipped.\n";
            continue;
        }
        std::cout<<"After continue a = "<<a<<"\n";
    }
    std :: cout<<std::endl<<a;
    return 0;
}