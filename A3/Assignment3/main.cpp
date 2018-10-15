/* CSCI 261 Assignment 3: Guess the number game
 *
 * Author: Carter Fowler
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    int number;                             //computer number
    int userGuess;                          //user input variable
    bool gameWon = false;                   //loop controller
    int numTries = 1;                       //game counter
    const int LOW = 0;                      //low end variable
    const int HIGH = 100;                   //high end variable
    const int TOO_CLOSE_DIFFERENCE = 5;     //variable for close scenario
    const int TOO_HIGH_DIFFERENCE = 25;     //varible for too high scenario
    srand (time(0));                        //makes it psuedorandom
    number = (rand() % (HIGH + 1));         //make computer number
    
    cout << "Welcome to Guess the Number Game!! Good luck!" << endl;                    //welcome line
    while (gameWon == false) {                                                          //game loop
        cout << "Pick a number between 0 and 100: ";
        cin >> userGuess;
        if ((userGuess < LOW) || (userGuess > HIGH)) {                                  //check if userGuess in range
            cout << "You entered a wrong number, please try again." << endl;
        } else if (userGuess == number) {                                               //check if guess is correct
            cout << "Correct!! You won the game in " << numTries << " tries!" << endl;
            gameWon = true;                                                             //exit loop
        } else if (userGuess < number) {                                                //checks if guess is below
            cout << "Too low!";
            if ((number - userGuess) <= TOO_CLOSE_DIFFERENCE) {                         //checks how close parameters
                cout << "Oooh you're close!";
            } else if ((number - userGuess) >= TOO_HIGH_DIFFERENCE) {
                cout << "Not even close!";
            }
            cout << endl;
        } else if (userGuess > number) {                                                //checks if guess is above
            cout << "Too high!";
            if ((userGuess - number) <= TOO_CLOSE_DIFFERENCE) {                         //checks how close parameters
                cout << "Oooh you're close!";
            } else if ((userGuess - number) >= TOO_HIGH_DIFFERENCE) {
                cout << "Not even close!";
            }
            cout << endl;
        }
        ++numTries;                                                                     //keeps track of number of tries
    }
    
    
    return 0;
}