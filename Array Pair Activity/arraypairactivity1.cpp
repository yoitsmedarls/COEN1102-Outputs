#include <iostream>
using namespace std;

int main()
{
    int data[] = {10, 15, 2, 42, 25, 18};

    cout << "Original Array:" << endl
         << '[';
    for (int i = 0; i < sizeof(data) / 4; i++)
    {
        cout << data[i];

        if (i < (sizeof(data) / 4) - 1)
        {
            cout << '|';
        }
    }
    cout << ']' << endl;

    cout << endl
         << "Modified Array:" << endl
         << '[';
    for (int i = 0; i < sizeof(data) / 4; i++)
    {
        if (data[i] % 2 == 0)
        {
            data[i] /= 2;
        }
        else
        {
            data[i] += 3;
        }

        cout << data[i];

        if (i < (sizeof(data) / 4) - 1)
        {
            cout << '|';
        }
    }
    cout << ']';

    return 0;
}