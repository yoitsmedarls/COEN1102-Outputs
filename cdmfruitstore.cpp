#include <iostream>
using namespace std;

// UNFINISHED!!!
int main()
{
    int itemNumber, itemQuantity;
    double totalPrice, applePrice = 17.35, bananaPrice = 7.45, lemonPrice = 12.50, watermelonPrice = 125.50;
    string itemName;

    cout << "=====================================================" << endl
         << "          COLEGIO DE MUNTINLUPA FRUIT STORE          " << endl
         << "=====================================================" << endl
         << "   ITEM NO.          FRUIT             PRICE         " << endl
         << "      1              Apple             " << applePrice << endl
         << "      2              Banana            " << bananaPrice << endl
         << "      3              Lemon             " << lemonPrice << endl
         << "      4            Watermelon          " << watermelonPrice << endl
         << "=====================================================" << endl
         << endl;

    cout << "Please input the item number of the fruit that you want to purchase: ";
    cin >> itemNumber;

    cout << "How many do you want to purchase? ";
    cin >> itemQuantity;

    if (itemNumber == 1)
    {
    }
    else if (itemNumber == 2)
    {
    }
    else if (itemNumber == 3)
    {
    }
    else if (itemNumber == 4)
    {
    }
    else
    {
    }

    cout << "The total cost of " << itemQuantity << " " << itemName << "";
    return 0;
}