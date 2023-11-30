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

    cout << "\nOdd number with the most occurences: " << findOddNumberWithMostOccurences(sizeOfArray, numbers);

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

/*
   Runs through the elements in the 'numbers' array and determines which odd number occurs the most
   Pseudocode:
    - Get all unique odd numbers from the input array
    - Count the occurences of each odd number in the input array
    - Compare the counteed occurences
    - Output the odd number with the most occurence
*/
int findOddNumberWithMostOccurences(int sizeOfArray, int numbers[])
{
    // TODO: Optimize this function by thinking of a better algorithm that takes less time and memory

    /*
    STEP 1: Create an array containing all the unique odd numbers that are in the 'numbers' array.
            This will be used as the test case for later, allowing us to count the occurences of each of the
            odd numbers in the 'uniqueOddNumbers' array.
    */

    int uniqueOddNumbers[sizeOfArray] = {0};

    for (int i = 0; i < sizeOfArray; i++)
    {
        // Filters out the even numbers in the 'numbers' array
        if (numbers[i] % 2 == 1)
        {
            bool isNumberRepeated = false;

            for (int j = 0; j < sizeOfArray; j++)
            {
                if (numbers[i] == uniqueOddNumbers[j])
                {
                    isNumberRepeated = true;
                    break;
                }
            }

            // Filters out the odd numbers that are already stored in the 'uniqueOddNumbers' array;
            if (isNumberRepeated == false)
            {
                uniqueOddNumbers[i] = numbers[i];
            }
        }
    }

    /*
    RESULT OF STEP 1: An array with size equal to the size of the original array, containing all the unique
                      odd numbers. However, there will be random zeros because of Step 1's poor design.

                      Ex. Input:  {3, 2, 3, 5, 4, 7}
                      Ex. Output: {3, 0, 0, 5, 0, 7}
    */

    /*
    STEP 2: Creates an array storing the number of occurence of the odd numbers in the same index.
    */

    int occurencesPerNumber[sizeof(uniqueOddNumbers) / 4] = {0};

    for (int i = 0; i < sizeof(uniqueOddNumbers) / 4; i++)
    {
        // Increments the value at the index corresponding to the unique odd number for every occurence
        for (int j = 0; j < sizeOfArray; j++)
        {
            if (uniqueOddNumbers[i] == numbers[j])
            {
                occurencesPerNumber[i]++;
            }
        }
    }

    /*
    RESULT OF STEP 2: An array with size equal to the size of the 'uniqueOddNumbers' array, containing the number
                      of occurence of each odd number. There will be random zeros once again.

                      Ex. Input: {3, 0, 0, 5, 0, 7}

                      If 3 is repeated 2 times, 5 is repeated 4 times, and 7 is repeated 1 time;

                      Ex. Output: {2, 0, 0, 4, 0, 1}.
    */

    /*
    STEP 3: Compares the values in the 'occurencesPerNumber' array and outputs the odd number with the most occurences
    */

    int oddNumberWithMostOccurences = 0, currentMostOccurences = 0;

    for (int i = 0; i < sizeof(occurencesPerNumber) / 4; i++)
    {
        if (occurencesPerNumber[i] > currentMostOccurences)
        {
            currentMostOccurences = occurencesPerNumber[i];
            oddNumberWithMostOccurences = uniqueOddNumbers[i];
        }
    }

    return oddNumberWithMostOccurences;
}
