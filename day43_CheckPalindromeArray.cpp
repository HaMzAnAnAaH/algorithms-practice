#include <iostream>
#include <string>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.

using namespace std;


void FillArrayHardCoded(int arr[100], int &arrLength){
    
    arrLength = 6;  // Set the array length to 6 elements.
    
    // Manually assign values to the array elements.
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
    
}

bool IsPalindromeArray(int arr[100], int Length)
{
    // Loop through each element of the array.
    // We only need to check up to the middle of the array.
    for (int i = 0; i < Length; i++)
    {
        // Compare the element at position i with its corresponding element from the end.
        if (arr[i] != arr[Length - i - 1])
        {
            return false;  // If any pair doesn't match, the array is not a palindrome.
        }
    }
    
    // If all corresponding pairs match, the array is a palindrome.
    return true;
}

void PrintArray(int arr[100], int arrLength)
{
    // Loop through the array and print each element followed by a space.
    for (int i = 0; i < arrLength; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    }


int main()
{
    // Seed the random number generator with the current time.
    // This ensures that the sequence of random numbers is different on each run.
    srand((unsigned)time(NULL));
    
    
    int arrLength;
    int arr[100];
    FillArrayHardCoded(arr, arrLength);
    
    
    cout << "Array Length: " << arrLength << endl;
    cout << "Array 1 Elements: ";
    PrintArray(arr, arrLength);
    
    
    // Check if the array is a palindrome and display the result.
    if (IsPalindromeArray(arr, arrLength))
        cout << "\nYes array is Palindrome\n";
    else
        cout << "\nNO array is NOT Palindrome\n";

    return 0;
}