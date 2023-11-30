#include <iostream>
using namespace std;

int getSizeOfArray(string promptMessage);
void getEachElementAndStoreInArray(int sizeOfArray, int numbers[]);
void displayOriginalArray(int sizeOfArray, int numbers[]);
int findOddNumberWithMostOccurences(int sizeOfArray, int numbers[]);

int main()
{
    int sizeOfArray = getSizeOfArray("Enter the size of the array: ");

    int numbers[sizeOfArray];

    getEachElementAndStoreInArray(sizeOfArray, numbers);

    displayOriginalArray(sizeOfArray, numbers);

    cout << "\nNumber which occurs odd number of times: " << findOddNumberWithMostOccurences(sizeOfArray, numbers);

    return 0;
}

// Prompts the user with the function argument 'promptMessage', then asks them to input the size of the array
int getSizeOfArray(string promptMessage)
{
    int sizeOfArray;

    cout << promptMessage;
    cin >> sizeOfArray;

    return sizeOfArray;
}

// Loops through each index of the 'numbers' array, storing whatever integer the user inputs in it
void getEachElementAndStoreInArray(int sizeOfArray, int numbers[])
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "Enter a number: ";
        cin >> numbers[i];
    }
}

// Displays the value of each index of the 'numbers' array using a loop
void displayOriginalArray(int sizeOfArray, int numbers[])
{
    cout << endl
         << "Original Array: ";

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << numbers[i] << " ";
    }
}

// Runs through the 'numbers' array and counts the number of occurences for each odd number
// Outputs the odd number with the most number of occurences
int findOddNumberWithMostOccurences(int sizeOfArray, int numbers[])
{
    int numberOfOccurences[sizeOfArray] = {0}, currentMostOccurences = 0, oddNumberWithMostOccurences = 0;

    for (int i = 0; i < sizeOfArray; i++)
    {
        if (numbers[i] % 2 == 1)
        {
            for (int j = 0; j < sizeOfArray; j++)
            {
                if (numbers[i] == numbers[j])
                {
                    numberOfOccurences[i]++;
                }
            }
        }
    }

    for (int i = 0; i < sizeOfArray; i++)
    {
        if (numberOfOccurences[i] > currentMostOccurences)
        {
            currentMostOccurences = numberOfOccurences[i];
            oddNumberWithMostOccurences = numbers[i];
        }
    }

    return oddNumberWithMostOccurences;
}
