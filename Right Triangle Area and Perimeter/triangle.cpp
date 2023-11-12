#include <iostream>
using namespace std;

int main()
{
    double base, height, hypotenuse, area, perimeter;

    /* Gets the base, height, and hypotenuse from the user as input */
    cout << "Please input the base of the right triangle: ";
    cin >> base;

    cout << "Please input the height of the right triangle: ";
    cin >> height;

    cout << "Please input the hypotenuse of the right triangle: ";
    cin >> hypotenuse;

    /* Calculates the area and perimeter from the input */
    area = (base * height) / 2;
    perimeter = base + height + hypotenuse;
    
    /* Displays the area and perimeter to the user */
    cout << endl << "The triangle with a base of " << base << " units, a height of " << height << " units, and a hypotenuse of " << hypotenuse << " units has an area of " << area << " square units and a perimeter of " << perimeter << " units.";

    return 0;
}