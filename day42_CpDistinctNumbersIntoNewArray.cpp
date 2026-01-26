#include <iostream>
#include <string>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.

using namespace std;

enum enumCheckPrime{notPrime =0, Prime =1};

void FillArrayHardCoded(int arr[100], int &arrLength){
    
    arrLength = 10;  // Set the array length to 10 elements.
    
    // Manually assign values to the array elements.
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
    
}



// Function: AddArrayElement
// Purpose: Adds a new element to the array.
// Parameters:
//   - Number: The number to add to the array.
//   - arr: The array to which the number will be added.
//   - arrLength: A reference to the variable tracking the number of elements in the array.
// Behavior: Increments the array length and stores the new element at the new last position.
void AddArrayElement(int Number, int cpArr[100], int &arrLength)
{
    // Since it's a new element, increase the array length by 1.
    arrLength++;
    // Store the new element at the index corresponding to the updated length (using zero-based indexing).
    cpArr[arrLength - 1] = Number;
}

short FindNumberIndex(int arr[100], int arrLength, int destinationNumber){
    for(int i=0; i<arrLength; i++){
        if(arr[i] == destinationNumber){
            return i;
        }
    }
    return -1;
}

bool isNumberInArray(int Number, int cpArrDestination[100], int arrLength){
    return FindNumberIndex(cpArrDestination, arrLength, Number) != -1;
}

void CopyOddsNumsArrayUsingAddArrayElement(int arrSource[100], int cpArrDestination[100], int arrLength, int &arrLength2){
    for(int i=0 ; i<arrLength; i++){
        if(!isNumberInArray(arrSource[i], cpArrDestination, arrLength))
        AddArrayElement(arrSource[i], cpArrDestination, arrLength2);
    }
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
    
    int cpArr[100];
    int arrLength2 =0;
    CopyOddsNumsArrayUsingAddArrayElement(arr, cpArr, arrLength, arrLength2);
    
    cout << "Array Length: " << arrLength << endl;
    cout << "Array 1 Elements: ";
    PrintArray(arr, arrLength);
    
    
    cout << "Array 2 Elements after copy: ";
    PrintArray(cpArr, arrLength2);

    return 0;
}