//divide and conquer
//This simple program reads a number from user and then count the number of repetitions for this number 
#include <iostream>
#include <string>

using namespace std;

long ReadNum(string Message){
    
    long Num;
    do{
        cout << Message;
        cin >> Num;
    }while(Num < 0);
    
    return Num;
}

void FreqNum(long num2, long Number){
    long count = 0;
    long Remainder = 0;
    while(Number > 0){
        Remainder = Number%10; 
        Number = Number/10;
        if(Remainder == num2){
            count += 1;
        }
    }
    cout << "Digit " << num2 << " Frequency is " << count << " Time(s)"; 

}

int main(){
    
    FreqNum(ReadNum("Enter your Number to see how much it frequented: "), ReadNum("Please Enter a positive Number:"));
    return 0;
}