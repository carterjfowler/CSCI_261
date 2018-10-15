/* CSCI 261 Lab 2B: Step one in Rock Paper Scissors algorithm
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
   
   cout << "Welcome one and all to a round of Rock, Paper Scissors! (Enter P, R or S)" << endl;    //welcome line
   cout << "Player one: " << endl;                                                                 //input prompt line
   cin >> playerChoice;                                                                            //assigns user input to appropriate variable
   cout << "Player choose " << playerChoice << endl;                                               //displays player's choice as verification
   
   cout << "Computer choose " << (rand() % 3) << endl;                                             //gets and shows computer's choice
   
   return 0;
}