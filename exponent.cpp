#include <iostream>
using namespace std;

int main()
{
    double i, base, exponent, result = 1;

    cout << "Please input the base: ";
    cin >> base;

    cout << "Please input the exponent: ";
    cin >> exponent;

    if (exponent >= 0)
    {
        for (int i = 1; i <= exponent; i++)
        {
            result *= base;
        }
    }
    else
    {
        for (int i = 1; i <= (exponent * (-1)); i++)
        {
            result *= base;
        }

        result = 1 / result;
    }

    cout << endl
         << result;

    return 0;
}