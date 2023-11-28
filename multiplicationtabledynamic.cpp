#include <iostream>
using namespace std;

int main()
{
    int number, limit;

    // Prompts user to enter a number, repeats if the input is less than 1
    do
    {
        cout << "Table: ";
        cin >> number;
    } while (number < 1);

    do
    {
        cout << "Limit: ";
        cin >> limit;
    } while (limit < 1);

    cout << endl
         << "Version 1:" << endl;

    for (int x = 1; x <= limit; x++)
    {

        if (limit % 2 == 0)
        {
            cout << (number * x) << "  ";

            if (x == (limit / 2))
            {
                cout << endl;
            }
        }
        else
        {
            cout << (number * x) << "  ";

            if (x == ((limit + 1) / 2))
            {
                cout << endl;
            }
        }
    }

    cout << endl
         << endl
         << "Version 2:" << endl;

    if (limit % 2 == 0)
    {
        for (int x = 1; x <= (limit / 2); x++)
        {
            cout << (number * x) << "  " << (number * (x + (limit / 2))) << endl;
        }
    }
    else
    {
        for (int x = 1; x <= ((limit + 1) / 2); x++)
        {
            cout << (number * x) << "  ";

            if (x == ((limit + 1) / 2))
            {
                break;
            }
            else
            {
                cout << (number * (x + ((limit + 1) / 2))) << endl;
            }
        }
    }

    return 0;
}