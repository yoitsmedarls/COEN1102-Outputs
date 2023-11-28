#include <iostream>
using namespace std;

int main()
{
    float productPrice, productQuantity, totalCost;

    cout << "Please input the price of the product you wish to purchase in pesos: ";
    cin >> productPrice;

    cout << "Please input how many of the product you wish to purchase: ";
    cin >> productQuantity;

    totalCost = productPrice * productQuantity;

    cout << endl << "The total cost of buying " << productQuantity << " pieces of a product priced at " << productPrice << " pesos is " << totalCost << " pesos.";

    return 0;
}