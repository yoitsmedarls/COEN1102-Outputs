#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand((unsigned)time(NULL));

    int computerNumber = (rand() % 3) + 1;
    int userInput;
    string userChoice, computerChoice, winner;

    do
    {
        cout << "Enter your choice (Rock - 0, Paper - 1, Scissors - 2): ";
        cin >> userInput;
    } while (userInput < 1 || userInput > 3);

    cout << endl;

    switch (userInput)
    {
    case 1:
        userChoice = "Rock";
        break;
    case 2:
        userChoice = "Paper";
        break;
    case 3:
        userChoice = "Scissors";
        break;

    default:
        break;
    }

    switch (computerNumber)
    {
    case 1:
        computerChoice = "Rock";
        break;
    case 2:
        computerChoice = "Paper";
        break;
    case 3:
        computerChoice = "Scissors";
        break;

    default:
        break;
    }

    if ((userChoice == "Rock" && computerChoice == "Scissors") ||
        (userChoice == "Paper" && computerChoice == "Rock") ||
        (userChoice == "Scissors" && computerChoice == "Paper"))
    {
        winner = "User";
    }

    if ((userChoice == "Rock" && computerChoice == "Paper") ||
        (userChoice == "Paper" && computerChoice == "Scissors") ||
        (userChoice == "Scissors" && computerChoice == "Rock"))
    {
        winner = "Computer";
    }

    cout << "User picked " << userChoice << '.' << endl
         << "Computer picked " << computerChoice << '.' << endl
         << endl;

    if (winner == "")
    {
        cout << "Tie!";
    }
    else
    {
        cout << winner << " wins!";
    }

    return 0;
}