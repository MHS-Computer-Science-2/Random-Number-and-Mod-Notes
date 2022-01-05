// Random numbers and Mod Notes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib> //C Standard Library
#include <ctime>   //C time

using namespace std;

int main()
{
    //Mod is a math operation that does division 
    //but gives the remainder instead of the quotient

    //In C++ "%" means Mod

    //Evaluate
    //  1. 7 % 2 = 1
    //  2. 10 % 5 = 0
    //  3. 12 % 7 = 5
    //  4. 2 % 5 = 2

    //Random numbers 

    //srand() uses the current time to make the random numbers random
    //Use ONLY ONCE at the top of main()
    srand((unsigned)time(0));

    //The rand() function generates a random number
    int num;
    num = rand();
    cout << "A random: " << num << endl;

    //We can use mod to restrict the number range
    num = rand() % 10;
    //possible remainders are 0-9
    cout << "A random from 0 - 9: " << num << endl;

    //If you don't want to start at zero, add to the end
    num = rand() % 10 + 1;
    //0-9 + 1 -> 1-10
    cout << "A random from 1 - 10: " << num << endl;

    //IN GENERAL
    // rand() % how_many_values + start_value

    //Random from 2-7
    num = rand() % 6 + 2;
    cout << "A random from 2 - 7: " << num << endl;


    system("pause");
}