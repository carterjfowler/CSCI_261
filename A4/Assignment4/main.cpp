/* CSCI 261 Assignment 4: Wheel of Fortune
 *
 * Author: Carter Fowler
 */
 
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

#include "Functions.h"

int main() {
    char secWordArray[8] = {'C', 'O', 'L', 'O', 'R', 'A', 'D', 'O'};
    char currGuessArray[8] = {'_', '_', '_', '_', '_', '_', '_', '_'};
    char wrongGuessArray[12];
    char userGuess;
    bool inWord;
    int i = 12;
    int numLetters = 0;
    
    cout << "Wheel of Fortune!!" << endl;
    while (i > 0) {
        inWord = false;
        cout << "Take a guess: ";
        cout << printCurr(currGuessArray) << endl;
        cout << "Your guess: ";
        cin >> userGuess;
        if (userGuess >= 97 && userGuess <= 122) {    //makes every user input a capital letter
            userGuess -= 32;
        } else {
            userGuess = userGuess;
        }
        if (guessed(userGuess, wrongGuessArray, currGuessArray)) {
            cout << "You already guessed " << userGuess << endl;
            continue;
        }
        for (int j = 0; j < 8; ++j) {
            if (userGuess == secWordArray[j]) {
                currGuessArray[j] = userGuess;
                inWord = true;
                ++numLetters;
                continue;
            } else {
                continue;
            }
        }
        if (inWord) {
            cout << "There's a(n) " << userGuess << endl << endl;
        } else {
            --i;
            cout << "Sorry, there is no " << userGuess << ". You have " << i << " wrong guesses remaining." << endl << endl;
        }
        if (numLetters == 8) {
            cout << "Congrats!! You solved the puzzle: ";
            cout << printSec(secWordArray) << endl;
            break;
        } else {
            continue;
        }
    }
    if (i == 0) {
        cout << "Sorry you're out of guesses. The correct word was: ";
        cout << printSec(secWordArray) << endl;
    }
    return 0;
}