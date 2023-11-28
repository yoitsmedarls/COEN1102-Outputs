#include <iostream>
using namespace std;

int main()
{
    char calculatorReset;

    do
    {
        /* Declaration of the necessary variables */
        int selectedCalculator;
        double rectangleLength, rectangleWidth, rectangleArea, rectanglePerimeter,
            triangleBase, triangleHeight, triangleHypotenuse, trianglePerimeter, triangleArea,
            circleRadius, circleArea, circleCircumference;

        /* Prompting the user to select a calculator from the available options */
        cout << endl
             << "Please type the number corresponding to the calculator you want to use:" << endl
             << " (1) Rectangle area and perimeter" << endl
             << " (2) Right triangle area and perimeter" << endl
             << " (3) Circle area and circumference" << endl
             << endl
             << "Answer: ";
        cin >> selectedCalculator;

        /* Loads the requested calculator */
        switch (selectedCalculator)
        {
        case 1: // For rectangles
            /* Getting the length and width from the user */
            cout << endl
                 << "---------------------------" << endl
                 << " RECTANGLE CALCULATOR" << endl
                 << "---------------------------" << endl
                 << "Input the length: ";
            cin >> rectangleLength;

            cout << "Input the width: ";
            cin >> rectangleWidth;

            /* Calculating the area and perimeter of the rectangle */
            rectangleArea = rectangleLength * rectangleWidth;
            rectanglePerimeter = 2 * (rectangleLength + rectangleWidth);

            /* Displaying the result to the user */
            cout << endl
                 << "The rectangle with a length of " << rectangleLength << " units and a width of " << rectangleWidth
                 << " units has an area of " << rectangleArea << " square units and perimeter of " << rectanglePerimeter << " units.";
            break;
        case 2: // For right-angled triangles
            /* Getting the base, height, and hypotenuse from the user */
            cout << endl
                 << "---------------------------" << endl
                 << " TRIANGLE CALCULATOR" << endl
                 << "---------------------------" << endl
                 << "Input the Base: ";
            cin >> triangleBase;

            cout << "Input the Height: ";
            cin >> triangleHeight;

            cout << "Input the hypotenuse: ";
            cin >> triangleHypotenuse;

            /* Calculating the area and perimeter of the right-angled triangle */
            triangleArea = (triangleBase * triangleHeight) / 2;
            trianglePerimeter = triangleBase + triangleHeight + triangleHypotenuse;

            /* Displaying the result to the user */
            cout << endl
                 << "The right triangle with a base of " << triangleBase << " units, a height of " << triangleHeight << " units, and a hypotenuse of " << triangleHypotenuse
                 << " units has an area of " << triangleArea << " square units and perimeter of " << trianglePerimeter << " units.";
            break;
        case 3: // For circles
            /* Getting the radius from the user */
            cout << endl
                 << "---------------------------" << endl
                 << " CIRCLE CALCULATOR" << endl
                 << "---------------------------" << endl
                 << "Input the radius: ";
            cin >> circleRadius;

            /* Calculating the area and perimeter of the circle */
            circleArea = 3.14 * (circleRadius * circleRadius);
            circleCircumference = 2 * (3.14 * circleRadius);

            /* Displaying the result to the user */
            cout << endl
                 << "The circle with a radius of " << circleRadius << " units has an area of "
                 << circleArea << " square units and circumference of " << circleCircumference << " units.";
            break;
        default:
            cout << endl
                 << "Invalid input.";
        }

        cout << endl
             << endl
             << "---------------------------------------------"
             << endl
             << "Do you want to try another calculator (Y/N)? ";
        cin >> calculatorReset;

    } while (calculatorReset == 'y' || calculatorReset == 'Y');

    return 0;
}