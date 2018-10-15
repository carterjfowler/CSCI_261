/* CSCI 261 Assignment 8: Multiple Classes
 *
 * Author: Carter Fowler
 */
#include "math.h"
#include "MagicItem.h"
#include "magicItem.h"
#include "HGrail.h"
#include "functions.h"

void math() {
    MagicItem math;
    
    cout << "\nPlease write your answer in the same format and order." << endl;
    cout << "Differentiate the following equation: f(x) = " << math.getEquation() << endl;
    
    cout << "Enter your answer here: f'(x) = ";
    string answer;
    cin.ignore(256, '\n');
    cin.clear();
    getline(cin, answer);
    
    if (math.isCorrect(math.getFirstDeriv(), answer) == false) {                           //if answer is wrong
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
}
void trivia() {
    JackpotTrivia trivia;
    
    trivia.introduction();
    trivia.trivia1();
}
void hitchHiker() {
    magicItem hitchHikers;
    
    hitchHikers.introduction();
    cin.ignore(256, '\n');
    cin.clear();
    hitchHikers.guess();
}
void holyGrail() {
    HolyGrail holyGrail;
    
    holyGrail.introduction();
    bool playAgain;
    do {
        if (holyGrail.question1()) {
            if (holyGrail.question2()) {
                if (holyGrail.question3()) {
                    holyGrail.setItem("[King Arthur] What do you mean, an African or European swallow?");
                    holyGrail.setGold("[BridgeKeeper] (confused) Huh? What?  I...I don't know that...");
                    
                    cout << endl << holyGrail.getItem() << endl;
                    cout << holyGrail.getGold() << endl;
                }
            }
        }
        string answer;
        cout << "Would you like to play again, yes or no? ";
        cin >> answer;
        if (answer == "yes" || answer == "Yes") {
            playAgain = true;
        } else {
            playAgain = false;
        }
    } while (playAgain);
}