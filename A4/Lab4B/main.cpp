/* CSCI 261 Lab 4B: Find Max Value
 *
 * Author: Carter Fowler
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    int arraySize = 15;              //setting up array
    int userArrayInput [arraySize];
    
    cout << "Come one, come all, and witness the amazing power of regurgitation of this wonderful program." << endl;  //prompting user
    cout << "Please enter 15 values below so that I may repeat them back to you." << endl;
    
    for (int i = 0; i < arraySize; ++i) {           //assignning user input to each cell in the array
        cout << "Number " << i + 1 << ": ";
        cin >> userArrayInput[i];
    }
    
    cout << "The numbers are: ";
    
    for (int i = 0; i < arraySize; ++i) {           //printing array
        cout << userArrayInput[i] << " ";
    }
    
    cout << "\nHave a nice day!" << endl;
    
    //find largest number and print
    int largestNum = userArrayInput[0];
    for (int i = 0; i < arraySize; ++i) {
        if (userArrayInput[i] > largestNum) {
            largestNum = userArrayInput[i];
            continue;
        }
        else { //userArrayInput[i] is still the largest so nothing changes
            continue;
        }
    }
    cout << "The largest number is: " << largestNum << endl;
    
    //find smallest number and print
    int smallestNum = userArrayInput[0];
    for (int i = 0; i < arraySize; ++i) {
        if (userArrayInput[i] < smallestNum) {
            smallestNum = userArrayInput[i];
            continue;
        }
        else { //userArrayInput[i] is still the smallest so nothing changes
            continue;
        }
    }
    cout << "The smallest number is: " << smallestNum << endl;
    
    return 0;
}