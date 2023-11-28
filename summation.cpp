#include <iostream>
using namespace std;

int main()
{
    int upperBound, lowerBound, summation = 0;

    cout << "Please input the lower bound: ";
    cin >> lowerBound;

    cout << "Please input the upper bound: ";
    cin >> upperBound;

    for (int i = lowerBound; i <= upperBound; i++)
    {
        summation += i;
    }

    cout << "The sum of numbers from " << lowerBound << " to " << upperBound << " is " << summation << '.';

    return 0;
}