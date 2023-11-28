#include <iostream>
using namespace std;

int main()
{
    int numberOfSides;

    cout << "Please input the number of sides: ";
    cin >> numberOfSides;

    if (numberOfSides < 3)
    {
        cout << endl << "A polygon must have a minimum of three sides.";
    }
    else if (numberOfSides == 3)
    {
        cout << endl << "A polygon with " << numberOfSides << " sides is called a Triangle.";
    }
    else if (numberOfSides == 4)
    {
        cout << endl << "A polygon with " << numberOfSides << " sides is called a Quadrilateral.";
    }
    else if (numberOfSides == 5)
    {
        cout << endl << "A polygon with " << numberOfSides << " sides is called a Pentagon.";
    }
    else if (numberOfSides == 6)
    {
        cout << endl << "A polygon with " << numberOfSides << " sides is called a Hexagon.";
    }
    else if (numberOfSides == 7)
    {
        cout << endl << "A polygon with " << numberOfSides << " sides is called a Heptagon.";
    }
    else if (numberOfSides == 8)
    {
        cout << endl << "A polygon with " << numberOfSides << " sides is called a Octagon.";
    }
    else if (numberOfSides == 9)
    {
        cout << endl << "A polygon with " << numberOfSides << " sides is called a Nonagon.";
    }
    else if (numberOfSides == 10)
    {
        cout << endl << "A polygon with " << numberOfSides << " sides is called a Decagon.";
    }
    else if (numberOfSides == 11)
    {
        cout << endl << "A polygon with " << numberOfSides << " sides is called a Hendecagon.";
    }
    else if (numberOfSides == 12)
    {
        cout << endl << "A polygon with " << numberOfSides << " sides is called a Dodecagon.";
    }
    else
    {
        cout << endl << "A polygon with that many sides is not supported by this program.";
    }

    return 0;
}