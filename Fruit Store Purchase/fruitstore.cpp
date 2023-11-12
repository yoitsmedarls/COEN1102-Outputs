#include <iostream>
using namespace std;

int main ()
{
    double productPrice, totalPrice;
    int productQuantity;
    string productName = "";

    cout << "Please input the fruit that you want to buy: ";
    cin >> productName;

    cout << "Please input the quantity that you wish to purchase: ";
    cin >> productQuantity;

    if (productName == "Apple")
    {
        productPrice = 17.35;
    }
    else if (productName == "Banana")
    {
        productPrice = 7.45;
    }
    else if (productName == "Lemon")
    {
        productPrice = 12.50;
    }
    else if (productName == "Watermelon")
    {
        productPrice = 125.50;
    }
    else {
        cout << "Please type in the correct fruit name.";
    }

    totalPrice = productPrice * productQuantity;

    cout << endl << "The total cost of buying " << productQuantity << " " << productName << "s, which costs " << productPrice << " pesos each, is " << totalPrice << " pesos.";

    return 0;
}