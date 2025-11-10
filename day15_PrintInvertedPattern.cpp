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

void InvertNumPattern(int Num){
    cout << "\nOutput:\n";
    for(int i=0; i<Num; Num--){
        for(int j=0; j<Num; j++){
            cout << Num; // Print the digit 'Num' without a space.
        }
        cout << "\n";
    }
}

int main()
{
    InvertNumPattern(ReadUserNum("Please enter a Positive Number:"));

    return 0;
}