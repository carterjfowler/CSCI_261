/* CSCI 261 Assignment 1: Hello World and ASCII Art
 *
 * Author: XXXX (_INSERT_YOUR_NAME_HERE_)
 *
 * More complete description here...
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.
   int myAge = 18;         //How old I am
   int theatreTime = 8;    //How many years I have done theatre
   int numActed = 25;      //How many shows I have acted in
   int numTeched = 9;      //How many shows I have teched
   int numDirected = 3;    //How many shows I have directed
// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    cout << "Ready to code!! Wait, I need to fill it all in myself?" << endl;
    
    cout << "          *****         " << endl;       //Smiley face print start
    cout << "       **       **      " << endl;
    cout << "    **             **   " << endl;
    cout << "  *     o       o     * " << endl;
    cout << " *                     *" << endl;
    cout << "**                     **" << endl;
    cout << " *       \\     /      *" << endl;
    cout << "  *       \\___/      * " << endl;
    cout << "    **             **   " << endl;
    cout << "       **       **      " << endl;
    cout << "          *****         " << endl;       //Smiley face print ends

    cout << "Hello world!!" << endl;                      //Interesting facts start, all printing text to screen
    cout << "I am " << myAge << " years old." << endl;
    cout << "I have been doing theatre for " << theatreTime << " years now." << endl;
    cout << "I have acted in " << numActed << " shows, teched " << numTeched << " shows, and I have directed " << numDirected << " shows." << endl;
    cout << "Goodbye, and have a nice day!!" << endl;     //Interesting facts end

    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}