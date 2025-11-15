//This program prints all possible values for words from AAA to ZZZ
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

void PrintAllFromAAAtoZZZ(){
    for(char i=65; i<=90; i++){
       for(char j=65; j<=90; j++){
        for(char c=65; c<=90; c++){
        cout << i << j << c << "\n";
    }
    } 
    }
}

int main()
{
    PrintAllFromAAAtoZZZ();

    return 0;
}