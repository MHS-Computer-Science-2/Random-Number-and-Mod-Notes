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

    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    if (num % 4 == 0) {
        cout << num << " is a multiple of 4" << endl << endl;
    }
    else {
        cout << num << " is NOT a multiple of 4" << endl << endl;
    }

    //Random numbers 

    //srand() uses the current time to make the random numbers random
    //Use ONLY ONCE at the top of main()
    srand((unsigned)time(0));

    //The rand() function generates a random number
    int num2;
    num2 = rand();
    cout << "A random: " << num2 << endl;

    //We can use mod to restrict the number range
    num2 = rand() % 10;
    //possible remainders are 0-9
    cout << "A random from 0 - 9: " << num2 << endl;

    //If you don't want to start at zero, add to the end
    num2 = rand() % 10 + 1;
    //0-9 + 1 -> 1-10
    cout << "A random from 1 - 10: " << num2 << endl;

    //IN GENERAL
    // rand() % how_many_values + start_value

    //Random from 12-17
    num2 = rand() % 6 + 12;
    cout << "A random from 12 - 17: " << num2 << endl;


    system("pause");
}
