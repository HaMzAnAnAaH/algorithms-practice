//divide and conquer
//This simple program reads a number from user and then print it in reverse order
#include <iostream>
#include <string>

using namespace std;

int ReadNum(string Message){
    int Num;
    cout << Message << endl;
    cin >> Num; return Num;
}

int SumOfDigits(int Number){
    int Remainder = 0; int sum =0;
    while(Number > 0){
        Remainder = Number%10; 
        Number = Number/10;
        sum += Remainder;
    }
    cout << "Sum Of Digits = ";
    return sum;
}

int main(){
    
    
    // Prompt the user to enter a positive number and then calculate the sum of its digits.
    // The result is then printed to the console with an explanatory message.
    cout << "" 
         << SumOfDigits(ReadNum("Please enter a positive number?"))
         << "\n";
    
    return 0;

}

