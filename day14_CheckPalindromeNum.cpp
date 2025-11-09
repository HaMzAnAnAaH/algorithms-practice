#include <iostream>
#include <string>
using namespace std;   // Use the standard namespace to avoid prefixing std:: to standard functions.


int ReadUserNum(string Message){
    
    int Num=0;
    do{
        cout << Message; cin >> Num;
    }while(Num < 0);
    return Num;
}

int ReverseDigit(int Num){
    int Remainder =0;
    int Rev =0;
    while(Num > 0){
        Remainder = Num%10;
        Num =Num/10;
        Rev = Rev*10 + Remainder;

    }
    return Rev;
}

void CheckPalindrome(int Num){
    int PalNum= ReverseDigit(Num);
    if(PalNum == Num){
        cout << "\n" << Num << " is a Palindrome Number";
    }else
            cout << "\n" << Num << " is NOT a Palindrome Number";

}



int main(){
    
    CheckPalindrome(ReadUserNum("Enter a positive number to check it's Palindrome:"));
    return 0;
}