#include <iostream>

using namespace std;
enum enumCheckPrime {Prime = 1 , notPrime = 0};  //enums in c++ make some matters very easy and reliable :)

enumCheckPrime checkPrimeNum(int rUserNum){       //tests the number if it is prime or not prime
    
    if(rUserNum == enumCheckPrime::notPrime || rUserNum == enumCheckPrime::Prime){
    return enumCheckPrime::notPrime;}
    
    
    for(int i=2; i<=rUserNum/2; i++){
        if(rUserNum%i == notPrime)
        return enumCheckPrime::notPrime;
    }
    
    return enumCheckPrime::Prime;
}

void PrintPrimesFromTwotoN(int N){
    for(int i =2; i<=N; i++){
       if(checkPrimeNum(i) == enumCheckPrime::Prime)
       cout << i << "\n";
    }
}

int ReadUserNum(){
    int N;
    cin >> N; cout << "\n";
    return N;
}

int main(){
    
    PrintPrimesFromTwotoN(ReadUserNum());
    return 0;

}
