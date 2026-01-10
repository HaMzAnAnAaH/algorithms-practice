#include <iostream>
#include <string>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.

using namespace std;


short readUserNum(string message){
    
    short Num;
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

void FillArrayWithRandomNums(int ArraySize){
    cout << "Array elements: ";
    int Arr[ArraySize];
    for(int i=0 ; i<ArraySize ; i++){
        Arr[i] = RandomNumber(1, 100);
        cout << Arr[i] << " ";
    }
}


int main()
{
    // Seed the random number generator with the current time.
    // This ensures that the sequence of random numbers is different on each run.
    srand((unsigned)time(NULL));


    FillArrayWithRandomNums(readUserNum("Please Enter a positive number to determine the size of array and filling it with random numbers: "));
    return 0;
}