#include <iostream>
using namespace std;

int main()
{
    double P1_X, P1_Y, P2_X, P2_Y, midpoint_X, midpoint_Y; // Variables for the X and Y coordinates for P1, P2, and the midpoint
    string P1_quadrant, P2_quadrant;                       // Stores the quadrant that each point is located in

    // Gets the x and y coordinates of P1 from the user
    cout << "Please input the coordinates of Point 1"
         << endl
         << " x-coordinate: ";
    cin >> P1_X;
    cout << " y-coordinate: ";
    cin >> P1_Y;

    // Gets the x and y coordinates of P2 from the user
    cout << endl
         << "Please input the coordinates of Point 2"
         << endl
         << " x-coordinate: ";
    cin >> P2_X;
    cout << " y-coordinate: ";
    cin >> P2_Y;

    // Determines the quadrant of P1 and stores it in a variable
    if (P1_X > 0) // if P1(+,?)
    {
        if (P1_Y > 0) // if P1(+,+)
        {
            P1_quadrant = "in Quadrant 1";
        }
        else if (P1_Y < 0) // if P1(+,-)
        {
            P1_quadrant = "in Quadrant 4";
        }
        else if (P1_Y == 0) // if P1(+,0)
        {
            P1_quadrant = "in between Quadrant 1 and 4";
        }
    }
    else if (P1_X < 0) // if P1(-,?)
    {
        if (P1_Y > 0) // if P1(-,+)
        {
            P1_quadrant = "in Quadrant 2";
        }
        else if (P1_Y < 0) // if P1(-,-)
        {
            P1_quadrant = "in Quadrant 3";
        }
        else if (P1_Y == 0) // if P1(-,0)
        {
            P1_quadrant = "in between Quadrant 2 and 3";
        }
    }
    else if (P1_X == 0) // if P1(0,?)
    {
        if (P1_Y > 0) // if P1(0,+)
        {
            P1_quadrant = "in between Quadrant 1 and 2";
        }
        else if (P1_Y < 0) // if P1(0,-)
        {
            P1_quadrant = "in between Quadrant 3 and 4";
        }
        else if (P1_Y == 0) // if P1(0,0)
        {
            P1_quadrant = "at the origin";
        }
    }

    // Determines the quadrant of P2 and stores it in a variable
    if (P2_X > 0) // if P2(+,?)
    {
        if (P2_Y > 0) // if P2(+,+)
        {
            P2_quadrant = "in Quadrant 1";
        }
        else if (P2_Y < 0) // if P2(+,-)
        {
            P2_quadrant = "in Quadrant 4";
        }
        else if (P2_Y == 0) // if P2(+,0)
        {
            P2_quadrant = "in between Quadrant 1 and 4";
        }
    }
    else if (P2_X < 0) // if P2(-,?)
    {
        if (P2_Y > 0) // if P2(-,+)
        {
            P2_quadrant = "in Quadrant 2";
        }
        else if (P2_Y < 0) // if P2(-,-)
        {
            P2_quadrant = "in Quadrant 3";
        }
        else if (P2_Y == 0) // if P2(-,0)
        {
            P2_quadrant = "in between Quadrant 2 and 3";
        }
    }
    else if (P2_X == 0) // if P2(0,?)
    {
        if (P2_Y > 0) // if P2(0,+)
        {
            P2_quadrant = "in between Quadrant 1 and 2";
        }
        else if (P2_Y < 0) // if P2(0,-)
        {
            P2_quadrant = "in between Quadrant 3 and 4";
        }
        else if (P2_Y == 0) // if P2(0,0)
        {
            P2_quadrant = "at the origin";
        }
    }
    else
    {
        cout << "An error occured. Please restart the program.";
    }

    // Calculates the coordinates of the midpoint of the P1 and P2

    midpoint_X = (P2_X + P1_X) / 2; // Formula: (X2 + X1)/2
    midpoint_Y = (P2_Y + P1_Y) / 2; // Formula: (Y2 + Y1)/2

    // Displays the two points in P(X,Y) format, the quadrant that each point is in, and the midpoint of the two points
    cout << endl
         << "==============================" << endl
         << " COORDINATES:" << endl
         << "  P1(" << P1_X << ',' << P1_Y << ')' << endl
         << "  P2(" << P2_X << ',' << P2_Y << ')' << endl
         << "------------------------------" << endl
         << " QUADRANTS:" << endl
         << "  P1 is " << P1_quadrant << endl
         << "  P2 is " << P2_quadrant << endl
         << "------------------------------" << endl
         << " MIDPOINT:" << endl
         << "  M(" << midpoint_X << ',' << midpoint_Y << ')' << endl
         << "==============================" << endl;

    return 0;
}