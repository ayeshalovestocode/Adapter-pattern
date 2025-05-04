#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Class to handle user input with validation
class UserInputHandler {
public:
    // Method to safely get a number from the user
    bool getNumber(int &number) {
        string input;
        cout << "Enter a number: ";
        cin >> input;

        // Use a stringstream to validate and parse the input
        // ss is m obj hy stringstream ka or yh input sy initialize kia h to parse it 
        //stringstream is a part of the <sstream>
        stringstream ss(input);
        ss >> number;

        // Check if the input is valid
        //eof mtlb enf of file... syntax h 
        if (ss.fail() || !ss.eof()) {
            return false; // Invalid input
        }
        return true; // Valid input
    }
};

// Class to check if a number is even or odd
class EvenOddChecker {
public:
    string checkEvenOdd(int number) {
        return (number % 2 == 0) ? "even" : "odd";
    }
};

// Adapter class to connect input and checker
class EvenOddAdapter {
private:
	// obj h , pehla input k liye or dusra check k liye 
    UserInputHandler inputHandler;
    EvenOddChecker checker;

public:
    void checkAndDisplay() {
        int number;

        // Validate input and process accordingly
        //Calls getNumber() to get a valid number.
        // yh wo hy jis sy number lia tha
        if (inputHandler.getNumber(number)) {
        	//Calls checkEvenOdd() to determine if the number is even or odd.
        	// checker method h ism 
            string result = checker.checkEvenOdd(number);
            cout << result << endl;
        } else {
            cout << "Invalid input. Please enter a valid number." << endl;
        }
    }
};

// Main function
int main() {
	// adapter obj h jo call kr rha h checkanddsiplay ko idhr
    EvenOddAdapter adapter;
    adapter.checkAndDisplay();
    return 0;
}
