/* CSCI 261 Lab 4A: Get Array Values and Print
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
    
    return 0;
}