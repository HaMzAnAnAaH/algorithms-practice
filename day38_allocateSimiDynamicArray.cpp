#include <iostream>
#include <string>

using namespace std;

int readUserNum(string message){
    
    int Num;
        cout << message;
        cin >> Num;
    //cout << "\n";
    return Num;
}

void FillDynamicArray(int arr[100], int &arrLength){
    int i=0;
    int num;
    do{
        arrLength = arrLength + 1;
       arr[i] =  readUserNum("Please enter a number: ");
       do{
           cout << "Do you want to add more numbers? [0]No,[1]yes? "; num = readUserNum("");
       }while(num != 0 && num != 1);
       ++i;
       cout << "\n";
    }while(num == 1);
}

void PrintArray(int arr[100], int arrLength)
{
    // Loop through the array and print each element followed by a space.
    for (int i = 0; i < arrLength; i++){
        cout << arr[i] << " ";

    }
    cout << "\n";
    }


int main()
{
    int arr[100];
    int arrLength =0;
    FillDynamicArray(arr, arrLength);
    cout << "Array Length: " << arrLength << endl;
    cout << "Array Elements: ";
    PrintArray(arr, arrLength);
    
    

    return 0;
}