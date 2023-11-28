#include <iostream>
using namespace std;

int main()
{
    /* INPUT */

    double temperature;

    cout << "Please input the temperature in degrees Celsius: ";
    cin >> temperature;

    /* PROCESS */

    if (temperature < 10)
    {
        cout << "HINDI PART";
    }
    else if (temperature >= 10 && temperature < 21)
    {
        cout << "Cold";
    }

    return 0;
}