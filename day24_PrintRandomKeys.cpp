#include <iostream>   // Include the iostream library for input/output operations.
#include <string>     // Include the string library (not used in this example but available if needed).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.

using namespace std;  // Use the standard namespace to simplify access to standard library functions.


int ReadUserNum(string txt){
    cout << txt << endl;
    int Num; cin >> Num;
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

void PrintRandomKeys(int KeyNums){
    for(int q=1; q <= KeyNums; q++){
        cout << "Key [" << q << "] : ";
    for(int i=0; i <= 3; i++){
        for(int j=0; j <= 3; j++){
            cout << char(RandomNumber(65, 90));
        }
        if(i != 3)
        cout << "-";
    }
    cout << "\n";
    }
}

int main()
{
    
    srand((unsigned)time(NULL));

    PrintRandomKeys(ReadUserNum("Please enter the Number of keys you want to generate: "));
    return 0;
}