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
    //  1. 7 % 4  = 3
    //  2. 10 % 5 = 0
    //  3. 12 % 7 = 5
    //  4. 2 % 5  = 2
    //  5. 50 % 8 = 2

    // When the result of a mod is 0 such as  10 % 5 = 0 it means that:
    //  1. 5 divides 10 evenly
    //  2. 5 is a factor of 10
    //  3. 10 is a multiple of 5

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
