#include <iostream>
using namespace std;

int main()
{
    /* DECLARATION OF VARIABLES */

    int hoursWorked;
    float payRate, grossPay, netPay, sssDeduction, taxDeduction, pagibigDeduction, philhealthDeduction, totalDeduction;
    string employeeName;

    /* GETTING INPUT FROM USER */

    cout << "Input the employee's name: ";
    cin >> employeeName;

    cout << "Input the number of hours that " << employeeName << " worked in a week: ";
    cin >> hoursWorked;

    cout << "Input the hourly pay rate: ";
    cin >> payRate;

    /* PERFORMING NECESSARY CALCULATIONS */

    grossPay = hoursWorked * payRate * 4;

    sssDeduction = grossPay * 0.2;
    taxDeduction = grossPay * 0.25;
    pagibigDeduction = grossPay * 0.05;
    philhealthDeduction = grossPay * 0.1;

    totalDeduction = sssDeduction + taxDeduction + pagibigDeduction + philhealthDeduction;
    netPay = grossPay - totalDeduction;

    /* DISPLAYING THE PAYROLL */

    cout << endl << endl
         << "=================================================================" << endl
         << "                         PAYROLL SUMMARY                         " << endl
         << "=================================================================" << endl
         << "   Employee's Name                                 : " << employeeName << endl
         << "   Number of Hours Worked in a Week                : " << hoursWorked << endl
         << "   Hourly Pay Rate                                 : " << payRate << endl << endl
         << "   GROSS PAY                                       : " << grossPay << endl
         << " --------------------------------------------------------------- " << endl
         << "   DEDUCTIONS                                                     " << endl
         << "     SSS (20%)                                     : " << sssDeduction << endl
         << "     TAX (25%)                                     : " << taxDeduction << endl
         << "     Pagibig (5%)                                  : " << pagibigDeduction << endl
         << "     PhilHealth (10%)                              : " << philhealthDeduction << endl
         << "   TOTAL DEDUCTIONS                                : " << totalDeduction << endl
         << " --------------------------------------------------------------- " << endl
         << "   NET PAY                                         : " << netPay << endl
         << "=================================================================";
    
    return 0;
}