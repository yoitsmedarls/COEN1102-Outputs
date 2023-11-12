#include <iostream>
using namespace std;

int main()
{
    int m;

    cout << "Please input an integer: ";
    cin >> m;

    if (m < 0)
    {
        cout << endl
             << "The value of n is -1";
    }
    else if (m > 0)
    {
        cout << endl
             << "The value of n is 1";
    }
    else
    {
        cout << endl
             << "The value of n is 0";
    }

    return 0;
}