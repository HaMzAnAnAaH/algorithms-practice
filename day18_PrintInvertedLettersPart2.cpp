#include <iostream>
#include <string>
using namespace std;       // Use the standard namespace to avoid prefixing std:: to standard functions.


int ReadUserNum(string Message){
    
    int Num=0;
    do{
        cout << Message; cin >> Num;
    }while(Num < 0);
    return Num;
}

void InvertLettersPattern(int Num){
    cout << "\nOutput:\n"; char c = 0;
    for(int i=1; i <= Num; i++){
        c = i + 65 - 1;
        for(int j = 1; j <= i; j++){
            cout << c;
        }
        cout << "\n";
    }
}

int main()
{
    InvertLettersPattern(ReadUserNum("Please enter a Positive Number:"));

    return 0;

}
