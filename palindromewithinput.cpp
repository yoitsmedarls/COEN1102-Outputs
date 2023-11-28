#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(char word[], int size);

int main()
{
    string userInput;

    // Prompts the user to enter a word and stores the input to the string variable 'userInput'
    cout << "Please enter a word: ";
    cin >> userInput;

    // Stores the size of the string 'userInput' using the .length() function from the <string> library
    int size = userInput.length();

    // Declares the array with the size of the userInput + 1 (for the null terminating character)
    char word[size + 1];

    // Terminates the char array with null by assigning '\0' at index 'size' (which is the last element in the array)
    word[size] = '\0';

    // Copies every character from the string 'userInput' to the newly created char array 'word'
    for (int i = 0; i < size; i++)
    {
        word[i] = userInput[i];
    }

    // Displays the initial array
    cout
        << "Word: ";

    for (int i = 0; i < size; i++)
    {
        cout << word[i];
    }

    cout << endl;

    // If the function 'isPalindrome' returns true, then the word is a palindrome
    // Otherwise, it is not a palindrome.
    if (isPalindrome(word, size) == true)
    {
        cout << endl
             << userInput << " is a palindrome!";
    }
    else
    {
        cout << endl
             << userInput << " is not a palindrome!";
    }

    return 0;
}

// Compares the first and last character in an input word, converging towards the middle character
// Returns false if any of the pairs of characters are not equal
bool isPalindrome(char word[], int size)
{
    for (int i = 0; i < (size / 2); i++)
    {
        if (word[i] != word[(size - 1) - i])
        {
            return false;
        }
    }

    return true;
}
