#include <iostream>
using namespace std;

int main()
{
    int numberOfSides, interiorAngleSum;

    cout << "Please input the number of sides of the polygon: ";
    cin >> numberOfSides;

    interiorAngleSum = (numberOfSides - 2) * 180;

    cout << endl << "The sum of the interior angles of a " << numberOfSides << "-sided polygon is " << interiorAngleSum << " degrees.";
    
    return 0;
}