//divide and conquer
//This simple program reads a number from user and then count the number of repetitions for each digit number 
#include <iostream>
#include <string>

using namespace std;

int ReadNum(string Message){
    
    int Num;
    do{
        cout << Message;
        cin >> Num;
    }while(Num < 0);
    
    return Num;
}

// Function: ReverseNumber
// Purpose: Reverses the digits of a given number.
//          For example, if the input is 123, the function returns 321.
// Parameter: Number - the positive integer whose digits are to be reversed.
// Returns: The reversed number.
void RevPrintNumFromLeftToRight(int Number){
    int Remainder = 0;
    while(Number > 0){
        Remainder = Number%10; 
        Number = Number/10;
        cout << "\n" << Remainder;
    }

}

// Function: PrintDigits
// Purpose: Prints each digit of the given number on a new line.
//          It extracts the digits using the modulo operator and division.
// Parameter: Number - the positive integer whose digits will be printed.
int FreqNum(int Number){
    int Remainder = 0;
    int Number2 =0;
    while(Number > 0){
        Remainder = Number%10; 
        Number = Number/10;
        Number2 = Number2 * 10 + Remainder;
    }
     return Number2;

}

int main(){
    
    RevPrintNumFromLeftToRight(FreqNum(ReadNum("Please Enter a positive Number:")));
    return 0;
}