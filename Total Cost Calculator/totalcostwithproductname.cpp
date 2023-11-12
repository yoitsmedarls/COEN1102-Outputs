#include <iostream>
using namespace std;

int main()
{
    double productPrice, productQuantity, totalCost;
    string productName = "";

    cout <<"What is the name of the product that you want to buy? ";
    cin >> productName;

    cout << "How much does one " << productName << " cost in pesos? ";
    cin >> productPrice;

    cout << "How many pieces of " << productName << " do you want to buy? ";
    cin >> productQuantity;

    totalCost = productPrice * productQuantity;

    cout << endl << "The total cost of buying " << productQuantity << " pieces of " << productName << ", which is priced at " << productPrice << " pesos each, is " << totalCost << " pesos.";

    return 0;
}