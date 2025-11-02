//divide and conquer
//This simple program reads a number from user and then print it in reverse order
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

void PrintReverseNum(int Number){
    int i = 0;
    cout << "\nReversed is: ";
    while(Number%10 != 0){
        i = Number%10; 
        Number = Number/10;
        cout << i;
    }
}

int main(){
    
    
    PrintReverseNum(ReadNum("Please Enter a positive Number:"));
    return 0;
}