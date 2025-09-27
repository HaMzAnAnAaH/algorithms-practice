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

void PrintReverseNum(int Number){
    int i = 0;
    while(Number%10 != 0){
        i = Number%10; 
        Number = Number/10;
        cout << "\n" << i;
    }
}

int main(){
    
    
    PrintReverseNum(ReadNum("Please Enter your Number:"));
    return 0;
}