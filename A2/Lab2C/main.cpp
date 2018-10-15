/* CSCI 261 Lab 2C: Step two in Rock Paper Scissors algorithm
 *
 * Author: Carter Fowler
 */


#include <iostream> 
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
   char playerChoice;   //player's input variable
   srand( time(0) );
   int computerChoice = (rand() % 3);
   
   cout << "Welcome one and all to a round of Rock, Paper Scissors! (Enter P, R or S)" << endl;    //welcome line
   cout << "Player one: " << endl;                                                                 //input prompt line
   cin >> playerChoice;                                                                            //assigns user input to appropriate variable
   if (playerChoice == 'S' || playerChoice == 's') {
       cout << "Player choose Scissors" << endl;                                  //displays player's choice as scissors as verification
   }
   else if (playerChoice == 'R' || playerChoice == 'r') {
       cout << "Player choose Rock" << endl;                                      //displays player's choice as rock as verification
   }
   else if (playerChoice == 'P' || playerChoice == 'p') {
       cout << "Player choose Paper" << endl;                                     //displays player's choice as paper as verification
   }
   
   
   if (computerChoice == 0) {
       cout << "Computer choose Paper" << endl;                                   //displays computer's choice as paper as verification
   }
   else if (computerChoice == 1) {
       cout << "Computer choose Rock" << endl;                                    //displays computer's choice as rock as verification
   }
   else if (computerChoice == 2) {
       cout << "Computer choose Scissors" << endl;                                //displays computer's choice as scissors as verification
   }

   
   return 0;
}