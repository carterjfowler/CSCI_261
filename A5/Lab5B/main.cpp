/* CSCI 261 Lab 5B: Find Max Value with Vectors
 *
 * Author: Carter Fowler
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    vector <int> userInput(1);
    
    cout << "Come one, come all, and witness the amazing power of regurgitation of this wonderful program." << endl;  //prompting user
    cout << "Enter as many non-negative numbers you would like. When you are done entering numbers, please enter -1." << endl;
    
    int i = 0;
    do {           //assignning user input to each cell in the array
        cout << "Number " << i + 1 << ": ";
        cin >> userInput.at(i);
        if (userInput.at(i) == -1) {
            break;
        }
        ++i;
        userInput.push_back(1);
    } while (userInput.at(i) != -1);
    userInput.pop_back();
    userInput.shrink_to_fit();
    int vectorSize = userInput.size();
    for (int i = 0; i < vectorSize; ++i) {           //printing array
        cout << userInput.at(i) << " ";
    }
    
    cout << "\nHave a nice day!" << endl;
    
    //find largest number and print
    int largestNum = userInput.at(0);
    for (int i = 0; i < vectorSize; ++i) {
        if (userInput.at(i) > largestNum) {
            largestNum = userInput.at(i);
            continue;
        }
        else { //userInput.at(i) is still the largest so nothing changes
            continue;
        }
    }
    cout << "The largest number is: " << largestNum << endl;
    
    //find smallest number and print
    int smallestNum = userInput.at(0);
    for (int i = 0; i < vectorSize; ++i) {
        if (userInput.at(i) < smallestNum) {
            smallestNum = userInput.at(i);
            continue;
        }
        else { //userInput.at(i) is still the smallest so nothing changes
            continue;
        }
    }
    cout << "The smallest number is: " << smallestNum << endl;
    
    return 0;
}