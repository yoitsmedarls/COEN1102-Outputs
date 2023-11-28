#include <iostream>
using namespace std;

bool isPalindrome(char word[], int size);

int main()
{
    // Declares the array of each character in a word
    char word[] = {'r', 'a', 'd', 'a', 'r'};

    // Stores the size of the array 'word'
    int size = sizeof(word);

    // Displays the initial array
    cout << "Word: ";

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
             << "PALINDROME!";
    }
    else
    {
        cout << endl
             << "NOT A PALINDROME!";
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
