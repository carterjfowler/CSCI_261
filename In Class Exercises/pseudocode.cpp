/* Author: Carter Fowler
   Assignment: Pseudocode as comments
*/

#include <iostream>
using namespace std;

int main () {
    // Declare variables (two for reading, two for storing in order)
    int userInput1, userInput2, lowValue, highValue;
    // Ask the user to enter two numbers
    cout << "Please enter a whole number: ";
    cin >> userInput1;
    cout << endl << "Please enter another whole number: ";
    cin >> userInput2;
    
    // Reorder the numbers, smaller first
    if (userInput1 <= userInput2) {
        lowValue = userInput1;
        highValue = userInput2;
    }
    else {
        lowValue = userInput2;
        highValue = userInput1;
    }
    // Print every odd number between the two entered numbers
    // Loop through
    for (int i = lowValue; i <= highValue; ++i) {
        switch (i % 2) {
            case 0:
               break;
            case 1:
               cout << i << endl;
               break;
        }
    }
    return 0;
}