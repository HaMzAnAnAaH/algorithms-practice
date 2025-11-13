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

void InvertLettersPattern(int Num){
    cout << "\nOutput:\n"; char c = 0;
    for(int i=0; i<Num; Num--){
        c = Num + 65 - 1;
        for(int j=0; j<Num; j++){
            cout << c; // Print the digit 'Num' without a space.
        }
        cout << "\n";
    }
}

int main()
{
    InvertLettersPattern(ReadUserNum("Please enter a Positive Number:"));

    return 0;
}