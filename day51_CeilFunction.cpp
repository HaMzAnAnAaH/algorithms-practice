#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify usage of standard functions.


// Function: MyRound
// Purpose: Rounds a floating-point number to the nearest integer.
// Parameters:
//   - Number: A floating-point number to be rounded.
// Returns: The rounded integer value of the input number.
int MyCeilFunc(float Number)
{
    
        if (Number > 0)
            return ++Number;  
        // If the number is negative, round down.
        else
            return Number;
    
}

// Function: ReadNumber
// Purpose: Reads a floating-point number from the user.
// Returns: The number entered by the user.
float ReadNumber()
{
    float Number;  // Variable to store user input.

    
    cout << "Please enter a float number? ";
    cin >> Number;  // Read input from the user.

    return Number;  // Return the input number.
}

// Main function: Entry point of the program.
int main()
{
    float Number = ReadNumber();  // Read a number from the user.

    // Print the rounded value using the custom MyRound function.
    cout << "My Ceil func Result : " << MyCeilFunc(Number) << endl;

    

    return 0;  // Return 0 to indicate successful program execution.
}