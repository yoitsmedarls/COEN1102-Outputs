#include <iostream>
using namespace std;

int main()
{
    double millimeter, decameter;

    cout << "Please input the measurement in millimeters: ";
    cin >> millimeter;

    decameter = millimeter / 10000; //1 decameter = 10 meters; 1 meter = 100 centimeters; 1 centimeter = 10 millimeters

    cout << endl << millimeter << " millimeters when converted into decameters is equal to " << decameter << " decameters.";

    return 0;
}