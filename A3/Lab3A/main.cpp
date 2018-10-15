/* CSCI 261 Lab 3A: Rock Paper Scissors Part 4
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
   char playerContinue;
   int gameWins = 0;
   int gameLoses = 0;
   int gameTies = 0;
   
   do {
      cout << "Welcome one and all to a round of Rock, Paper, Scissors! (Enter R, P, or S)" << endl;    //welcome line
      cout << "Player one: ";                                                                           //input prompt line
      cin >> playerChoice;                                                                              //assigns user input to appropriate variable
      switch (playerChoice) {
         case 'S':
         case 's':
            cout << "Player choose Scissors" << endl;
            break;
         case 'R':
         case 'r':
            cout << "Player choose Rock" << endl;
            break;
         case 'P':
         case 'p':
            cout << "Player choose Paper" << endl;
            break;
         default:
            cout << "Error: incorrect input." << endl;
            return 0;
            break;
      }
   
      switch (computerChoice) {
         case 0:
            cout << "Computer choose Rock" << endl;
            break;
         case 1:
            cout << "Computer choose Paper" << endl;
            break;
         case 2:
            cout << "Computer choose Scissors" << endl;
            break;
      }

      //determine winner and count up score

       if (playerChoice == 'S' || playerChoice == 's') {
           if (computerChoice == 0) {
               cout << "Rock crushes scissors. Computer wins! Try again." << endl;
               ++gameLoses;
           }
           else if (computerChoice == 1) {
               cout << "Scissors cuts paper. Human wins! Congratulations!!" << endl;
               ++gameWins;
           }
           else if (computerChoice == 2) {
               cout << "Its a tie. Try again." << endl;
               ++gameTies;
           }
       }
       else if (playerChoice == 'R' || playerChoice == 'r') {
           if (computerChoice == 0) {
               cout << "Its a tie. Try again." << endl;
               ++gameTies;
           }
           else if (computerChoice == 1) {
               cout << "Paper covers rock. Computer wins! Try again." << endl;
               ++gameLoses;
           }
           else if (computerChoice == 2) {
               cout << "Rock crushes scissors. Human wins! Congratulations!!" << endl;
               ++gameWins;
           }
       }
       else if (playerChoice == 'P' || playerChoice == 'p') {
           if (computerChoice == 0) {
               cout << "Paper beats rock. Human wins! Congratulations!!" << endl;
               ++gameWins;
           }
           else if (computerChoice == 1) {
               cout << "Its a tie. Try again." << endl;
               ++gameTies;
           }
           else if (computerChoice == 2) {
               cout << "Scissors beats paper. Computer wins. Try again." << endl;
               ++gameLoses;
           }
       }
       cout << "Do you want to play again? (Y/N) ";
       cin >> playerContinue;
   } while (playerContinue == 'Y' || playerContinue == 'y');    //repeat function
   cout << "Thanks for playing!!" << endl;
   //Print score
   cout << "You won " << gameWins << " game(s), lost " << gameLoses << " game(s), and tied " << gameTies << " game(s)." << endl;
   return 0;
}