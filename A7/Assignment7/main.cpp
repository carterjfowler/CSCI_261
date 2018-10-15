/* CSCI 261 Assignment 7: Magic Item Class
 *
 * Author: Carter Fowler
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

#include "math.h"

int main() {
    MagicItem math;
    
    cout << "\nPlease write your answer in the same format and order." << endl;
    cout << "Differentiate the following equation: f(x) = " << math.getEquation() << endl;
    
    cout << "Enter your answer here: f'(x) = ";
    string answer;
    getline(cin, answer);
    
    if (!math.isCorrect(math.getFirstDeriv(), answer)) {                           //if answer is wrong
        cout << "Sorry, that is incorrect. Would you like to try again, yes or no? ";
        string again;
        getline(cin, again);
        while (math.playAgain(again)) {                                                 //while answer is wrong and they want to play again
            cout << "Please write your answer in the same format and order." << endl;
            cout << "Differentiate the following equation: f(x) = " << math.getEquation() << endl;
            
            cout << "Enter your answer here: f'(x) = ";
            getline(cin, answer);
            if(math.isCorrect(math.getFirstDeriv(), answer)) {                           //answer is right so break and go to next conditional
                break;
            } else {                                                                   //allows the loop to end
                cout << "Sorry, that is still incorrect. Would you like to try again, yes or no? ";
                getline(cin, again);
            }
        } if (!math.playAgain(again)) {                                                //if they decide to stop playing
            cout << "Sorry to see you go. The answer was: " << math.getFirstDeriv() << endl;
        }
    }
    if(math.isCorrect(math.getFirstDeriv(), answer)) {                                  //if the answer is right
        cout << "Congratulations, that is correct! You have won a " << math.getFakePrize() << "!"<< endl;
        cout << "Unfortunately, you're not done yet. To get the actual prize you must find the second derivative." << endl;
        
        cout << "\nPlease write your answer in the same format and order." << endl;
        cout << "Differentiate the following equation: f'(x) = " << math.getFirstDeriv() << endl;
        
        cout << "Enter your answer here: f\"(x) = ";
        getline(cin, answer);
        if(!math.isCorrect(math.getSecondDeriv(), answer)) {                        //if the answer is wrong
            cout << "Sorry, that is incorrect. Would you like to try again, yes or no? ";
            string again;
            getline(cin, again);
            while (math.playAgain(again)) {                                        //while answer is wrong and they want to play again
                cout << "Please write your answer in the same format and order." << endl;
                cout << "Differentiate the following equation: " << math.getEquation() << endl;
                
                cout << "Enter your answer here: f\"(x) = ";
                getline(cin, answer);
                if(math.isCorrect(math.getSecondDeriv(), answer)) {                         //if answer is right break and move on
                    break;
                } else {                                                            //allows the loop to end
                    cout << "Sorry, that is still incorrect. Would you like to try again, yes or no? ";
                    getline(cin, again);
                }
            } if (!math.playAgain(again)) {                                          //if they decide to stop playing
                cout << "Sorry to see you go. The answer was: " << math.getFirstDeriv() << endl;
            }
        }
        if(math.isCorrect(math.getSecondDeriv(), answer)) {                          //if answer is right print this stuff
            cout << "Congratulations, that is correct!! You have won a " << math.getPrize() << "!" << endl;
        }
    }
    
    cout << "Thanks for playing!!" << endl;     //goodbye message
    
    return 0;
}