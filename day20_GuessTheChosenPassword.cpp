//This program prints all possible values for words from AAA to ZZZ
#include <iostream>
#include <string>
using namespace std;   // Use the standard namespace to avoid prefixing std:: to standard functions.


string ReadUserStr(){
    string Message;
    cout << "Please enter your chars in capital letters: "; cin >> Message;

    return Message;
}

bool GuessPassword(string str){
    int counter = 1;
    string word = "";
    // Three nested loops to generate all combinations of three uppercase letters.
    for(int i=65; i<=90; i++){
       for(int j=65; j<=90; j++){
        for(int c=65; c<=90; c++){
            word = word + char(i);
            word = word + char(j);
            word = word + char(c);
            cout << "Trial [" << counter << "] = " << word << endl;
            if(word == str){
                cout << "Password is: " << word << "\nFound after " << counter << " Trial(s)";
            return true;
            }
            word = "";  // Reset the word variable for the next guess.
            counter++;
    }
    } 
    }
    return false;
}

int main()
{
  GuessPassword(ReadUserStr());

    return 0;
}