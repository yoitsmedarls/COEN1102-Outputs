#include <iostream>
using namespace std;

int main()
{
    int numberOfSides;
    string polygonName;

    cout << "Please input the number of sides: ";
    cin >> numberOfSides;

    if (numberOfSides < 3)
    {
        cout << "\nA polygon must have a minimum of three sides.";
    }

    else if (numberOfSides < 13)
    {
        if (numberOfSides == 3)
        {
            polygonName = "Triangle";
        }
        if (numberOfSides == 4)
        {
            polygonName = "Quadrilateral";
        }
        if (numberOfSides == 5)
        {
            polygonName = "Pentagon";
        }
        if (numberOfSides == 6)
        {
            polygonName = "Hexagon";
        }
        if (numberOfSides == 7)
        {
            polygonName = "Heptagon";
        }
        if (numberOfSides == 8)
        {
            polygonName = "Octagon";
        }
        if (numberOfSides == 9)
        {
            polygonName = "Nonagon";
        }
        if (numberOfSides == 10)
        {
            polygonName = "Decagon";
        }
        if (numberOfSides == 11)
        {
            polygonName = "Hendecagon";
        }
        if (numberOfSides == 12)
        {
            polygonName = "Dodecagon";
        }

        cout << "\nA polygon with " << numberOfSides << " sides is called a " << polygonName << '.';
    }

    else
    {
        cout << "That polygon is currently unsupported by this program.";
    }

    return 0;
}