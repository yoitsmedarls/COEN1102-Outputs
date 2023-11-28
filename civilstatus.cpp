#include <iostream>
using namespace std;

int main()
{
    // Declaring the necessary variables
    char civilStatus;

    // Getting the civil status from the user
    cout << "Please input your civil status:" << endl
         << " (S/s) Single" << endl
         << " (M/m) Married" << endl
         << " (D/d) Divorced" << endl
         << " (W/w) Widowed" << endl
         << endl
         << "Answer: ";
    cin >> civilStatus;

    // Displaying different outputs based on the input
    if (civilStatus == 'S' || civilStatus == 's')
    {
        cout << "\nSingle";
    }
    else if (civilStatus == 'M' || civilStatus == 'm')
    {
        cout << "\nMarried";
    }
    else if (civilStatus == 'D' || civilStatus == 'd')
    {
        cout << "\nDivorced";
    }
    else if (civilStatus == 'W' || civilStatus == 'w')
    {
        cout << "\nWidowed";
    }
    else
    {
        cout << "\nInvalid input. Please try again.";
    }

    return 0;
}