#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please input a number: ";
    cin >> n;
    // y for line iterator
    // z for spaces iterator
    // x for stars iterator
    for (int y = 0; y < n; y++)
    {
        for (int z = y; z < n; z++)
        {
            cout << " ";
        }

        for (int x = (n - y); x < n; x++)
        {
            cout << "+ ";
        }

        cout << endl;
    }

    for (int y = 0; y < n; y++)
    {
        for (int z = (n - y); z < n; z++)
        {
            cout << " ";
        }
        for (int x = y; x < n; x++)
        {
            cout << "+ ";
        }

        cout << endl;
    }

    return 0;
}