#include <iostream>
using namespace std;

int main()
{
    double radius, pi, area, circumference;
    pi = 3.14;

    /* Gets the radius of the circle */
    cout << "Please input the radius of the circle: ";
    cin >> radius;

    /* Calculates the area and circumference of the circle based from the input */
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    /* Displays the resulting area and circumference to the user */
    cout << endl << "The circle with a radius of " << radius << " units has an area of " << area << " square units and a circumference of " << circumference << " units.";

    return 0;
}