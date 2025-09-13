//Divide and conquer
#include <iostream>
using namespace std;

int UserNum; //global variable 

enum enumCheckPrime {Prime = 1 , notPrime = 0};  //enums in c++ make some matters very easy and reliable :)


int EnterUserNum(){                     //this function enables users to enter their number to test if is it prime or not

    cin >> UserNum;
    return UserNum;
}

enumCheckPrime checkPrimeNum(int rUserNum){       //tests the number if it is prime or not prime
    
    if(rUserNum == 0 || rUserNum == 1){
    return enumCheckPrime::notPrime;}
    
    
    for(int i=2; i<rUserNum; i++){
        if(rUserNum%i == notPrime)
        return enumCheckPrime::notPrime;
    }
    
    return enumCheckPrime::Prime;
}

void PrintResult(enumCheckPrime){                 //Print the result in acceptable format
    if(enumCheckPrime::Prime){
       cout << UserNum << " is a prime number";
    } else
    cout << UserNum << "is not a prime number";
}

int main()                                           //main func
{
    PrintResult(checkPrimeNum(EnterUserNum()));

    return 0;
}