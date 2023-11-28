#include <iostream>
using namespace std;

int main()
{
    double salary, netPay;

    cout << "Please input the employee's salary per year: ";
    cin >> salary;

    if (salary >= 450000)
    {
        netPay = salary * 0.75; // 25% tax = 75% net pay

        cout << endl
             << "Tax: 25%" << endl
             << "Net Pay: " << netPay << " Php" << endl
             << "Cateogry: D";
    }
    else if (salary >= 250000)
    {
        netPay = salary * 0.80; // 20% tax = 80% net pay

        cout << endl
             << "Tax: 20%" << endl
             << "Net Pay: " << netPay << " Php" << endl
             << "Cateogry: C";
    }
    else if (salary >= 120000)
    {
        netPay = salary * 0.87; // 13% tax = 87% net pay

        cout << endl
             << "Tax: 13%" << endl
             << "Net Pay: " << netPay << " Php" << endl
             << "Cateogry: B";
    }
    else if (salary >= 56000)
    {
        netPay = salary * 0.95; // 5% tax, 95% net pay

        cout << endl
             << "Tax: 5%" << endl
             << "Net Pay: " << netPay << " Php" << endl
             << "Cateogry: A";
    }
    else if (salary < 0)
    {
        cout << endl
             << "Input for salary should not be negative.";
    }
    else
    {
        netPay = salary;

        cout << endl
             << "Tax: 0%" << endl
             << "Net Pay: " << netPay << " Php" << endl
             << "Cateogry: Tax Exempted";
    }
    return 0;
}
