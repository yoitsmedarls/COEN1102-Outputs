#include <iostream>
using namespace std;

int main()
{
    double length, width, area, perimeter;

    /* Gets the length and width of the rectangle */
    cout << "Please input the length of the rectangle: ";
    cin >> length;

    cout << "Please input the width of the rectangle: ";
    cin >> width;

    /* Calculates the area and the perimeter of the rectangle based from the input */
    area = length * width;
    perimeter = 2 * (length + width);

    /* Displays the resulting area and perimeter to the user */
    cout << endl << "The rectangle with a length of " << length << " units and a width of " << width << " units has an area of " << area << " square units and a perimeter of " << perimeter << " units.";

    return 0;
}