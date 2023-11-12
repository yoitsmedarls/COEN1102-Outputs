#include <iostream>
using namespace std;

int main()
{
    // Declare necessary variables
    char customerCode;
    int accountNumber, premiumChannels, basicServiceConnections;
    double billingAmount;

    // Ask for account number and customer code
    cout << "=============================================================" << endl
         << "                      ABC Cable Company                      " << endl
         << "=============================================================" << endl
         << "                                                             " << endl
         << " Good day, User!                                             " << endl
         << " Please input your account number: ";
    cin >> accountNumber;

    cout << " Please input your customer code (R/B): ";
    cin >> customerCode;

    cout << "                                                             " << endl
         << " ----------------------------------------------------------- " << endl;

    if (customerCode == 'r' || customerCode == 'R') // Process for residential users
    {
        // Asks for the number of premium channels
        cout << endl
             << " How many premium channels are you subscribed to?: ";
        cin >> premiumChannels;

        // Calculation of the bill
        billingAmount = 4.50 + 20.50 + (7.50 * premiumChannels);

        // Displaying the billing amount
        cout << endl
             << "=============================================================" << endl
             << "                       BILLING SUMMARY                       " << endl
             << "=============================================================" << endl
             << "                                                             " << endl
             << " Account Number: " << accountNumber << endl
             << " Account Type: Residential Account                           " << endl
             << " Bill Processing Fee:                                  $4.50 " << endl
             << " Basic Service Fee:                                   $20.50 " << endl
             << " Premium Channels:                             $7.50/channel " << endl
             << "                                                             " << endl
             << "=============================================================" << endl
             << " TOTAL BILL:                                         $" << billingAmount << endl
             << "=============================================================" << endl;
    }
    else if (customerCode == 'b' || customerCode == 'B')
    {
        // Asks for the number of premium channels and the number of basic service connections
        cout << endl
             << " How many basic connections do you have?: ";
        cin >> basicServiceConnections;

        cout << endl
             << " How many premium channels are you subscribed to?: ";
        cin >> premiumChannels;

        // Calculation of the bill
        billingAmount = (basicServiceConnections <= 10) ? 15.00 + 75.00 + (50.00 * premiumChannels) : 15.00 + 75.00 + ((basicServiceConnections - 10) * 5.00) + (50.00 * premiumChannels);

        // Displaying the billing amount
        cout << endl
             << "=============================================================" << endl
             << "                       BILLING SUMMARY                       " << endl
             << "=============================================================" << endl
             << "                                                             " << endl
             << " Account Number: " << accountNumber << endl
             << " Account Type: Business Account                              " << endl
             << " Bill Processing Fee:                                 $15.00 " << endl
             << " Basic Service Fee:                $75.00 + $5.00/connection " << endl
             << " Premium Channels:                            $50.00/channel " << endl
             << "                                                             " << endl
             << "=============================================================" << endl
             << " TOTAL BILL:                                         $" << billingAmount << endl
             << "=============================================================" << endl;
    }
    else
    {
        cout << "             Please enter a proper customer code             "
             << "                                                             " << endl
             << " ----------------------------------------------------------- " << endl;
    }

    return 0;
}