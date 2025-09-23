//divide and conquer

#include <iostream>   // Header library
#include <string>  //String library
using namespace std;


int ReadUserNum(string Message){                          //This function Reads a num from user
   
   int Number =0;
    do
    {
        cout << Message << endl; // Display the prompt message.
        cin >> Number;           // Read the number from user input.
    } while (Number <= 0);       // Repeat if the entered number is not positive.
    
    return Number;  // Return the valid positive number.
}

void checkPerfectNum(int UserNum1){                      //This function checks the number if is it perfect or not
    int sumDivisor=0;
    for(int i =1; i <= UserNum1/2; i++){
        if(UserNum1%i == 0){
            sumDivisor += i;
        }
    }
    if(sumDivisor == UserNum1){
        cout << UserNum1 << " is A Perfect Number";

    }else{
        cout << UserNum1 << " is NOT A Perfect Number";
    }
}

void PerfectNumFromOneToN(int Num){                      // It counts all numbers from 1 to user number and send them to chckPerfect function
    for(int i=1;i<=Num; i++){
        checkPerfectNum(i);
        cout << "\n";
    }
}

int main(){                                              //Main function
   
   PerfectNumFromOneToN(ReadUserNum("Please, Enter a positive Number:"));
   
   return 0; 
}
    