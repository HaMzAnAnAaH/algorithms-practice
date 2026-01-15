#include <iostream>
#include <string>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.

using namespace std;

enum enumCheckPrime {Prime = 1 , notPrime = 0};  //enums in c++ make some matters very easy and reliable :)

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

void FillArrayWithRandomNumsAndCopyItIntoAnotherArray(int ArraySize[100], int &arrLength, int cpArr[100]){
    arrLength = readUserNum("Please enter the length of array: ");
    cout << "Array 1 elements: ";
    for(int i=0 ; i<arrLength ; i++){
        ArraySize[i] = RandomNumber(1, 100);
        cpArr[i] = ArraySize[i];
        cout << ArraySize[i] << " ";
    }
}

enumCheckPrime checkPrimeNum(int rUserNum){       //tests the number if it is prime or not prime
    
    // Compute M as roughly half of Number.
    // Note: Using round(Number / 2) here might not be the best approach
    // since for small numbers it may not be accurate; typically, we check until sqrt(Number).
    int M = rUserNum / 2;
    
    if(rUserNum == 0 || rUserNum == 1){
    return enumCheckPrime::notPrime;}
    
    
    for(int i=2; i<M; i++){
        if(rUserNum%i == notPrime)
        return enumCheckPrime::notPrime;
    }
    
    return enumCheckPrime::Prime;
}

void checkPrimeInsecondArray(int cpArr[100], int arrLength){
    cout << "\n\nPrime numbers in array 2: ";
    for(int i=0; i<arrLength; i++){
            if(checkPrimeNum(cpArr[i])){
                cout << cpArr[i] << " ";
            }
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
    FillArrayWithRandomNumsAndCopyItIntoAnotherArray(arr, arrLength, cpArr);
    checkPrimeInsecondArray(cpArr, arrLength);
    
    return 0;
}
