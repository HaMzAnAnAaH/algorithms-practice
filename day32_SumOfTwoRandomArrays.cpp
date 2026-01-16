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

void FillArraysWithRandomNums(int ArraySize[100], int arrLength){
    for(int i=0 ; i<arrLength ; i++){
        ArraySize[i] = RandomNumber(1, 100);
        cout << ArraySize[i] << " ";
    }
}

void SumOfTwoArrays(int arr[100], int cpArr[100], int arrLength){
    cout << "\n\nSum of two arrays: ";
    for(int i=0; i<arrLength; i++){
            cout << arr[i] + cpArr[i] << " ";
    }
}

int main()
{
    // Seed the random number generator with the current time.
    // This ensures that the sequence of random numbers is different on each run.
    srand((unsigned)time(NULL));
    
    int arr[100];
    int cpArr[100];
    int arrLength;
    
        arrLength = readUserNum("Please enter the length of arrays: ");
        cout << "Array 1 elements: ";
    FillArraysWithRandomNums(arr, arrLength);
    cout << "\n\nAray 2 elements: ";
        FillArraysWithRandomNums(cpArr, arrLength);
    SumOfTwoArrays(arr, cpArr, arrLength);
    
    return 0;
}
