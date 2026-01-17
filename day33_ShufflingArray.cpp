#include <iostream>
#include <string>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.

using namespace std;


int readUserNum(string message){
    
    int Num;
    do{
        cout << message;
        cin >> Num;
    }while(Num < 0);
    cout << "\n";
    return Num;
}

void Swap(int& A, int& B)
{
    int Temp;    // Temporary variable to hold the value of A.
    Temp = A;    // Save the value of A in Temp.
    A = B;       // Copy the value of B into A.
    B = Temp;    // Copy the value of Temp (original A) into B.
}


int RandomNumber(int From, int To)
{
    // Calculate a random number in the range [From, To]:
    // rand() % (To - From + 1) gives a value between 0 and (To - From),
    // then adding From shifts this range to [From, To].
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  // Return the generated random number.
}

void ArrayBeforeShuffle(int ArraySize[100], int arrLength){
    for(int i=1 ; i <= arrLength ; i++){
        
        ArraySize[i-1] = i;
    }
}

void shuffleArray(int ArraySize[100], int arrLength){
    cout << "\n\nArray after shuffling: ";
    for(int i=0; i<arrLength; i++){
           Swap(ArraySize[RandomNumber(1, arrLength) -1], ArraySize[RandomNumber(1, arrLength)-1]);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    // Loop through the array and print each element followed by a space.
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";  // Print a newline after printing all elements.
}

int main()
{
    // Seed the random number generator with the current time.
    // This ensures that the sequence of random numbers is different on each run.
    srand((unsigned)time(NULL));
    
    int arr[100];
    int arrLength;
    arrLength = readUserNum("Please enter the length of array: ");
    
    cout << "\nArray before shuffling: ";
    ArrayBeforeShuffle(arr, arrLength);
    PrintArray(arr, arrLength);
    
    
    shuffleArray(arr, arrLength);
    PrintArray(arr, arrLength);
    
    
    return 0;
}
