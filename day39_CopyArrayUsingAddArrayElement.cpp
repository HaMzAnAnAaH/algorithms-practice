#include <iostream>
#include <string>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.

using namespace std;

int readUserNum(string message){
    
    int Num;
        cout << message;
        cin >> Num;
    //cout << "\n";
    return Num;
}

int RandomNumber(int From, int To)
{
    // Calculate a random number in the range [From, To]:
    // rand() % (To - From + 1) gives a value between 0 and (To - From),
    // then adding From shifts this range to [From, To].
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  // Return the generated random number.
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

void FillArrayWithRandoms(int arr[100], int arrLength){
    for(int i=0; i<arrLength; i++){
        arr[i] = RandomNumber(1, 100);
    }
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int cpArrDestination[100], int arrLength, int arrLength2){
    for(int i=0 ; i<arrLength; i++){
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
    
    
    int arrLength =0;
    arrLength = readUserNum("Please Insert Array Length: ");
    
    int arr[100];
    FillArrayWithRandoms(arr, arrLength);
    
    int cpArr[100];
    int arrLength2 =0;
    CopyArrayUsingAddArrayElement(arr, cpArr, arrLength, arrLength2);
    
    cout << "Array Length: " << arrLength << endl;
    cout << "Array 1 Elements: ";
    PrintArray(arr, arrLength);
    
    
    cout << "Array 2 Elements after copy: ";
    PrintArray(cpArr, arrLength);

    return 0;
}