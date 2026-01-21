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

int RandomNumber(int From, int To)
{
    // Calculate a random number in the range [From, To]:
    // rand() % (To - From + 1) gives a value between 0 and (To - From),
    // then adding From shifts this range to [From, To].
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  // Return the generated random number.
}


void FillArrayWithRandomNums(int ArraySize[100], int arrLength){
    for(int i=0 ; i<arrLength ; i++){
        ArraySize[i] = RandomNumber(1, 100);
    }
}

short FindNumberIndex(int arr[100], int arrLength, int destinationNumber){
    for(int i=0; i<arrLength; i++){
        if(arr[i] == destinationNumber){
            return i;
        }
    }
    return -1;
}

bool IsNumberInArray(int arr[100], int arrLength, int destinationNumber)
{
    // Use FindNumberPositionInArray and check if the result is not -1.
    return FindNumberIndex(arr, arrLength, destinationNumber) != -1;
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
    
    int arr[100];
    int arrLength;
    int destinationNumber;
    arrLength = readUserNum("Please enter the length of array: ");
    cout << "Array 1 elements: ";
    FillArrayWithRandomNums(arr, arrLength);
    PrintArray(arr, arrLength);
    
    destinationNumber = readUserNum("Please enter a number to search for: ");
    cout << "The number you are looking for is: " << destinationNumber << endl;
    
    
    // Output the result.
    if (!IsNumberInArray(arr, arrLength, destinationNumber))
        cout << "The number is not found :-(\n";
    else
    {
        cout << "The number is found :)" << endl;
    }
    

    return 0;
}