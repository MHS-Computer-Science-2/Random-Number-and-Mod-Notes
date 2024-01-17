// Random numbers and Mod Notes
//I CAN explain the mod (%) operator and use it to solve problems
//I CAN create a random number in any range

#include <iostream>
#include <cstdlib> //C Standard Library
#include <ctime>   //C time

using namespace std;

int main()
{
    // Mod is a math operation that does division 
    // but gives the remainder instead of the quotient

    // In C++ "%" means Mod

    // Example: 7 % 2

    /*      3
          ------
         2| 7
          - 6
          ----
            1 <- Remainder

    */

    //Evaluate:
    //  1. 7 % 4  = 
    //  2. 10 % 5 = 
    //  3. 12 % 7 = 
    //  4. 2 % 5  = 
    //  5. 50 % 8 =

    // When the result of a mod is 0 such as  10 % 5 = 0 it means that:
    //  1. 
    //  2.
    //  3. 

    int num;
    cout << "Enter a number: " << endl;
    cin >> num;


    //Random numbers 

    //srand() uses the current time to make the random numbers random
    //Use ONLY ONCE at the top of main()
    //srand((unsigned)time(0));

    //The rand() function generates a random number
    int num2;
    
    cout << "A random: " << num2 << endl;

    //We can use mod to restrict the number range
    
    //possible remainders are 0-9
    cout << "A random from 0 - 9: " << num2 << endl;

    //If you don't want to start at zero, add to the end
    
    //0-9 + 1 -> 1-10
    cout << "A random from 1 - 10: " << num2 << endl;

    //IN GENERAL
    // rand() % how_many_values + start_value

    //Random from 12-17
    
    cout << "A random from 12 - 17: " << num2 << endl;


    system("pause");
}
