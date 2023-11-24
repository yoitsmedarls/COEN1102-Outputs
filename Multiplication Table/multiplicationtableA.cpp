#include <iostream>
using namespace std;

int main()
{
    int number;

    // Prompts user to enter a number, repeats if the input is less than 1
    do
    {
        cout << "Enter multiplication table of: ";
        cin >> number;
    } while (number < 1);

    cout << endl
         << "Version 1:" << endl;

    for (int x = 1; x <= 10; x++)
    {
        cout << (number * x) << "  ";

        if (x % 5 == 0)
        {
            cout << endl;
        }
    }

    cout << endl
         << "Version 2:" << endl;

    for (int x = 1; x <= 5; x++)
    {
        cout << (number * x) << "  " << (number * (x + 5)) << endl;
    }

    return 0;
}