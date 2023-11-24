#include <iostream>
using namespace std;

int main()
{
    char option;

    do
    {
        system("cls"); // clears the terminal

        int numberOfProducts, productQuantity;
        float productPrice, productSubtotal, discountRate, productDiscount, finalPrice;

        // Prompts user to enter the number of products. Repeats if the user enters zero or below.
        do
        {
            cout << "Enter the number of products: ";
            cin >> numberOfProducts;
        } while (numberOfProducts < 1);

        // Repeatedly asks the user for the price and quantity of each product.
        for (int i = 1; i <= numberOfProducts; i++)
        {
            productPrice = 0;
            productQuantity = 0;

            cout << endl
                 << "Enter the price of Product " << i << ": ";
            cin >> productPrice;

            cout << "Enter the quantity of Product " << i << ": ";
            cin >> productQuantity;

            productSubtotal += productPrice * productQuantity;
        }

        // Sets the discount rate based on the product subtotal.
        if (productSubtotal > 5000)
        {
            discountRate = 0.15;
        }
        else if (productSubtotal > 4000)
        {
            discountRate = 0.10;
        }
        else if (productSubtotal > 2000)
        {
            discountRate = 0.09;
        }
        else if (productSubtotal > 1000)
        {
            discountRate = 0.07;
        }
        else if (productSubtotal >= 500)
        {
            discountRate = 0.05;
        }
        else
        {
            discountRate = 0;
        }

        // Calculates the product discount and final price based from all the input.
        productDiscount = productSubtotal * discountRate;
        finalPrice = productSubtotal - productDiscount;

        // Displays the results to the user.
        cout << endl
             << "Subtotal: " << productSubtotal << endl
             << "Discount Rate: " << discountRate * 100 << '%' << endl
             << "Discount: " << productDiscount << endl
             << "Final Price: " << finalPrice << endl;

        // Prompts the user to enter 'Y' or 'y' if they want to restart the program
        cout << endl
             << "Do you want to restart the program (Y/y)? ";
        cin >> option;

    } while (option == 'Y' || option == 'y');

    return 0;
}