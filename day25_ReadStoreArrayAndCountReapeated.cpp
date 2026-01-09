#include <iostream>
#include <string>

using namespace std;


short readUserNum(string message){
    
    short Num;
    do{
        cout << message;
        cin >> Num;
    }while(Num < 0);
    return Num;
}

void CheckNumRepitition(short arrayOfElements[], short SizeOfArray, short CheckNum){
    cout << "\nOriginal Array: ";
    short counter = 0;
    for(short i =0 ; i < SizeOfArray; i++){
        cout << arrayOfElements[i] << " ";
        if(arrayOfElements[i] == CheckNum){
            ++counter;
        }
    }
    cout << "\n" << CheckNum << " is repeated " << counter << " time(s)"; 
}

void FillArray(int SizeOfArray){
    short arrayOfElements[SizeOfArray];
    cout << "\nEnter array elements: " << endl;
    for(short i = 0; i < SizeOfArray; i++ ){
        cout << "\nElement [ " << i + 1 << " ] = ";
        arrayOfElements[i] = readUserNum("");
    }
    
    cout << "\n\nEnter the number you want to check: ";
    short CheckNum = readUserNum("");
    CheckNumRepitition(arrayOfElements, SizeOfArray, CheckNum);
}



int main()
{
    FillArray(readUserNum("Please Enter a positive number to determine the size of array: "));
    return 0;
}