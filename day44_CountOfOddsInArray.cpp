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


void FillArrayWithRandoms(int arr[100], int arrLength){
    for(int i=0; i<arrLength; i++){
        arr[i] = RandomNumber(1, 100);
    }
}

int countOddsInArray(int arr[100], int arrLength){
    int count =0;
    for(int i=0 ; i<arrLength; i++){
        if(arr[i]%2 != 0)
        count += 1;
    }
    return count;
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
    
    cout << "Array Length: " << arrLength << endl;
    
    int arr[100];
    FillArrayWithRandoms(arr, arrLength);
    
    cout << "Array 1 Elements: ";
    PrintArray(arr, arrLength);
    
    
    cout << "Odd numbers count is: " << countOddsInArray(arr, arrLength);

    return 0;
}