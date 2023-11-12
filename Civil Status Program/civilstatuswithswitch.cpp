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
    switch (civilStatus)
    {
    case 's':
    case 'S':
        cout << "Single";
        break;
    case 'm':
    case 'M':
        cout << "Married";
        break;
    case 'd':
    case 'D':
        cout << "Divorced";
        break;
    case 'w':
    case 'W':
        cout << "Widowed";
        break;
    default:
        cout << "Invalid Input";
    }

    return 0;
}