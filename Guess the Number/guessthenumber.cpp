#include <iostream>
using namespace std;

int main()
{
    // Variables for the magic numbers, user inputs, and user chances
    int magicNumber1 = 8, magicNumber2 = 39, magicNumber3 = 98;
    int userChances = 3;
    int userGuess;

    // Prints the game title and instructions
    cout << "=======================================================" << endl
         << "                     GUESSING GAME                     " << endl
         << "=======================================================" << endl
         << " Do or Die: Guess the number from the given ranges for " << endl
         << "            each round. Game resets if you run out of  " << endl
         << "            chances.                                   " << endl
         << " ----------------------------------------------------- " << endl
         << "                        LEVEL 1                        " << endl
         << " ----------------------------------------------------- " << endl;

    // LEVEL 1: Guess the number from 1-10. User has 3 chances
    while (userChances != 0)
    {
        cout << " You have " << userChances << " chances left." << endl
             << " Guess the number between 1-10: ";
        cin >> userGuess;

        userChances--; // Deducts the used chance from the user

        // Compares the user's guess to the magic number
        if (userGuess > magicNumber1)
        {
            cout << endl
                 << " Woops! Try to give a lower number :)" << endl
                 << endl;
        }
        else if (userGuess < magicNumber1)
        {
            cout << endl
                 << " Woops! Try to give a higher number :)" << endl
                 << endl;
        }
        else if (userGuess == magicNumber1)
        {
            userChances += 5; // Adds 5 more chances in preparation for Level 2

            cout << endl
                 << " ----------------------------------------------------- " << endl
                 << "                   LEVEL 1: COMPLETE                   " << endl
                 << " ----------------------------------------------------- " << endl
                 << "           Congrats! You guessed the number!           " << endl
                 << "             - Loading Level 2...                      " << endl
                 << "             - Loading the magic number...             " << endl
                 << "             - Adding 5 more chances...                " << endl
                 << " ----------------------------------------------------- " << endl
                 << " ----------------------------------------------------- " << endl
                 << "                        LEVEL 2                        " << endl
                 << " ----------------------------------------------------- " << endl;

            break;
        }
        else // If ever the user types in a random/unsupported input
        {
            cout << endl
                 << " Invalid input! Please try again." << endl
                 << endl;
        }

        // Checks the number of chances after checking the user's guess
        // If the user has no chances left, the game ends
        if (userChances == 0)
        {
            cout << "=======================================================" << endl
                 << "                    NO CHANCES LEFT                    " << endl
                 << "=======================================================" << endl
                 << "                  Please try again :)                  " << endl;

            break;
        }
    }

    // LEVEL 2: Guess the number from 1-50. User has 5 plus their remaining chances from Level 1
    while (userChances != 0)
    {
        cout << " You have " << userChances << " chances left." << endl
             << " Guess the number between 1-50: ";
        cin >> userGuess;

        userChances--; // Deducts the used chance from the user

        // Compares the user's guess to the magic number
        if (userGuess > magicNumber2)
        {
            cout << endl
                 << " Woops! Try to give a lower number :)" << endl
                 << endl;
        }
        else if (userGuess < magicNumber2)
        {
            cout << endl
                 << " Woops! Try to give a higher number :)" << endl
                 << endl;
        }
        else if (userGuess == magicNumber2)
        {
            userChances += 7; // Adds 7 more chances in preparation for Level 3

            cout << endl
                 << " ----------------------------------------------------- " << endl
                 << "                   LEVEL 2: COMPLETE                   " << endl
                 << " ----------------------------------------------------- " << endl
                 << "           Congrats! You guessed the number!           " << endl
                 << "             - Loading Level 3...                      " << endl
                 << "             - Loading the magic number...             " << endl
                 << "             - Adding 7 more chances...                " << endl
                 << " ----------------------------------------------------- " << endl
                 << " ----------------------------------------------------- " << endl
                 << "                        LEVEL 3                        " << endl
                 << " ----------------------------------------------------- " << endl;

            break;
        }
        else // If ever the user types in a random/unsupported input
        {
            cout << endl
                 << " Invalid input! Please try again." << endl
                 << endl;
        }

        // Checks the number of chances after checking the user's guess
        // If the user has no chances left, the game ends
        if (userChances == 0)
        {
            cout << "=======================================================" << endl
                 << "                    NO CHANCES LEFT                    " << endl
                 << "=======================================================" << endl
                 << "                  Please try again :)                  " << endl;

            break;
        }
    }

    // LEVEL 3: Guess the number from 1-100. User has 7 plus their remaining chances from Level 2
    while (userChances != 0)
    {
        cout << " You have " << userChances << " chances left." << endl
             << " Guess the number between 1-100: ";
        cin >> userGuess;

        userChances--; // Deducts the used chance from the user

        // Compares the user's guess to the magic number
        if (userGuess > magicNumber3)
        {
            cout << endl
                 << " Woops! Try to give a lower number :)" << endl
                 << endl;
        }
        else if (userGuess < magicNumber3)
        {
            cout << endl
                 << " Woops! Try to give a higher number :)" << endl
                 << endl;
        }
        else if (userGuess == magicNumber3)
        {
            cout << endl
                 << " ----------------------------------------------------- " << endl
                 << "                   LEVEL 3: COMPLETE                   " << endl
                 << " ----------------------------------------------------- " << endl
                 << "           Congrats! You guessed the number!           " << endl
                 << "=======================================================" << endl
                 << "         GAME FINISHED: THANK YOU FOR PLAYING!         " << endl
                 << "=======================================================" << endl;

            break;
        }
        else // If ever the user types in a random/unsupported input
        {
            cout << endl
                 << " Invalid input! Please try again." << endl
                 << endl;
        }

        // Checks the number of chances after checking the user's guess
        // If the user has no chances left, the game ends
        if (userChances == 0)
        {
            cout << "=======================================================" << endl
                 << "                    NO CHANCES LEFT                    " << endl
                 << "=======================================================" << endl
                 << "                  Please try again :)                  " << endl;

            break;
        }
    }

    return 0;
}