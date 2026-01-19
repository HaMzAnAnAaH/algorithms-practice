#include <iostream>   // Include the iostream library for input/output operations.
#include <string>     // Include the string library (not used in this example but available if needed).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function, used for seeding the random number generator.

using namespace std;  // Use the standard namespace to simplify access to standard library functions.

int readUserNum(string message){
    
    int Num;
    do{
        cout << message;
        cin >> Num;
    }while(Num < 0);
    cout << "\n";
    return Num;
}

// Function: RandomNumber
// Purpose: Generates a random integer between two specified values, inclusive.
// Parameters:
//    From - The lower bound of the desired random range.
//    To   - The upper bound of the desired random range.
// Returns: A random integer between From and To (inclusive).
int RandomNumber(int From, int To)
{
	// Calculate a random number in the range [From, To]:
	// rand() % (To - From + 1) gives a value between 0 and (To - From),
	// then adding From shifts this range to [From, To].
	int randNum = rand() % (To - From + 1) + From;
	return randNum;  // Return the generated random number.
}

// Enumeration: enCharType
// Purpose: Defines different character types for random character generation.
enum enCharType {
	SamallLetter = 1,    // Represents lowercase letters (ASCII 97 to 122).
	CapitalLetter = 2,   // Represents uppercase letters (ASCII 65 to 90).
	SpecialCharacter = 3,// Represents special characters (ASCII 33 to 47).
	Digit = 4            // Represents digits (ASCII 48 to 57).
};

// Function: GetRandomCharacter
// Purpose: Returns a random character based on the specified character type.
// Parameters:
//    CharType - an enCharType value indicating which category of character to generate.
// Returns: A random character of the specified type.
char GetRandomCharacter(enCharType CharType)
{
	// Use a switch-case to handle the different character types.
	switch (CharType)
	{
	case enCharType::SamallLetter:
	{
		// Generate a random lowercase letter (ASCII codes 97 to 122).
		return char(RandomNumber(97, 122));
		break;  // break is not strictly needed after a return.
	}
	case enCharType::CapitalLetter:
	{
		// Generate a random uppercase letter (ASCII codes 65 to 90).
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::SpecialCharacter:
	{
		// Generate a random special character (ASCII codes 33 to 47).
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::Digit:
	{
		// Generate a random digit (ASCII codes 48 to 57).
		return char(RandomNumber(48, 57));
		break;
	}
	}
	// If an invalid type is passed, return a null character.
	return '\0';
}

void FillArrayWithKeys(string arr[100], int arrLength){
    
    for(int i=0; i < arrLength; i++){
        arr[i] = "";
        for(int j=0; j<4; j++){
            for(int k=0; k<4; k++){
                arr[i] = arr[i] + GetRandomCharacter(enCharType::CapitalLetter);
            }
            if(j != 3){
            arr[i] = arr[i] + "-";
            }
        }
    }
}

void PrintArray(string arr[100], int arrLength)
{
    // Loop through the array and print each element followed by a space.
    for (int i = 0; i < arrLength; i++){
        cout << "Array[ " << i << " ] ==> " << arr[i];
    cout << "\n";  // Print a newline after printing all elements.

    }
    }

int main()
{
    string arr[100];
    int arrLength = readUserNum("Please enter the size of array: ");
	FillArrayWithKeys(arr, arrLength);
	
	PrintArray(arr, arrLength);

	return 0;
}