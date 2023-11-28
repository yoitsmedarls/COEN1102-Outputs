#include <iostream>
using namespace std;

int main()
{
    double foot, centimeters;

    cout << "Please input the measurement in foot: ";
    cin >> foot;

    centimeters = foot * (2.54 * 12);

    cout << endl << "The input " << foot << " feet when converted into centimeters is equal to " << centimeters << " centimeters.";

    return 0;
}