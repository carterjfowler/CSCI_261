/* CSCI 261 Assignment 8: Multiple Classes
 *
 * Author: Carter Fowler
 *
 * People who used my class: Austin Purdy, Amith Gona, Hammood Alshraij, Annie Jiang, Gillian Allison,
 * Carson Stevens, RuiXin Huang, Sam Elting, Milo Dietrick, Devvrat Singh, Matt Frankmore
 */

#include <iostream>
#include <string>

using namespace std;

#include "math.h"
#include "MagicItem.h"
#include "magicItem.h"
#include "HGrail.h"
#include "functions.h"

int main() {
    int answer;
    cout << "Please choose which mode you would like to do: " << endl;
    cout << "  1. Derivative Equation" << endl;
    cout << "  2. Trivia Questions" << endl;
    cout << "  3. Hitch Hiker's Guide to the Galaxy" << endl;
    cout << "  4. Monty Python and the Holy Grail" << endl;
    cout << "  5. All of the above, in order" << endl;
    cout << "Enter your answer here: ";
    cin >> answer;
    
    if (answer == 1) {
        math();
    } else if (answer == 2) {
        trivia();
    } else if (answer == 3) {
        hitchHiker();
    } else if (answer == 4) {
        holyGrail();
    } else if (answer == 5) {
        math();
        trivia();
        hitchHiker();
        holyGrail();
    } else {
        cout << "Wrong input." << endl;
    }
    cout << "Thank you for playing!! Have a wonderful day!" << endl;
    
    return 0;
}