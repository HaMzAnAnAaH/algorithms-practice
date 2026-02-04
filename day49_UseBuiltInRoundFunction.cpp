#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify usage of standard functions.



// Function: ReadNumber
// Purpose: Reads a floating-point number from the user.
// Returns: The number entered by the user.
float ReadNumber()
{
    float Number;  // Variable to store user input.
    
    // Prompt the user to enter a number.
    cout << "Please enter a number? ";
    cin >> Number;  // Read input from the user.
    
    return Number;  // Return the input number.
}

int MyRoundFunc(float number){
    number = number*10;
    int fractionNumber = (int)number%10; 
    if(fractionNumber >= 5){
        return number /10 +1;
    }else{
        return number/10;
    }
}

// Main function: Entry point of the program.
int main()
{
    float Number = ReadNumber();  // Read a number from the user.

    cout << "\n" << "My round function result: " << MyRoundFunc(Number);

    return 0;  // Return 0 to indicate successful program execution.
}