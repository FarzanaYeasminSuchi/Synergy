#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidPIN(const  string& pin) {
    // Check if the PIN has either 4 or 6 characters
    if (pin.length() == 4 || pin.length() == 6) {
        // Check if all characters in the PIN are digits
        for (char c : pin) {
            if (!isdigit(c)) {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}

int main() {
    // Example usage
     string inputPIN;
     cout << "Enter a PIN code: ";
     cin >> inputPIN;

    if (isValidPIN(inputPIN)) {
         cout << "Valid PIN code." <<  endl;
    } else {
         cout << "Invalid PIN code." <<  endl;
    }

    return 0;
}