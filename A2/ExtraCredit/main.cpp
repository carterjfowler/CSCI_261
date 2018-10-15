/* CSCI 261 Extra Credit: Rock Paper Scissors Lizard Spock
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
   int computerChoice = (rand() % 5);
   
   cout << "Welcome one and all to a round of Rock, Paper, Scissors, Lizard, Spock! (Enter R, P, S, L, or V [for Vulcan, aka Spock])" << endl;    //welcome line
   cout << "Player one: ";                                                                         //input prompt line
   cin >> playerChoice;                                                                            //assigns user input to appropriate variable
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
      case 'L':
      case 'l':
         cout << "Player choose Lizard" << endl;
         break;
      case 'V':
      case 'v':
         cout << "Player choose Spock" << endl;
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
      case 3:
         cout << "Computer choose Lizard" << endl;
         break;
      case 4:
         cout << "Computer choose Spock" << endl;
         break;
   }

   //determine winner

   if (playerChoice == 'S' || playerChoice == 's') {
       if (computerChoice == 0) {
           cout << "Rock crushes scissors. Computer wins! Try again." << endl;
       }
       else if (computerChoice == 1) {
           cout << "Scissors cuts paper. Human wins! Congratulations!!" << endl;
       }
       else if (computerChoice == 2) {
           cout << "Its a tie. Try again." << endl;
       }
       else if (computerChoice == 3) {
          cout << "Scissors decapitates lizard. Human wins! Congratulations!!" << endl;
       }
       else if (computerChoice == 4) {
          cout << "Spock smashes scissors. Computer wins! Try again." << endl;
       }
   }
   else if (playerChoice == 'R' || playerChoice == 'r') {
       if (computerChoice == 0) {
           cout << "Its a tie. Try again." << endl;
       }
       else if (computerChoice == 1) {
           cout << "Paper covers rock. Computer wins! Try again." << endl;
       }
       else if (computerChoice == 2) {
           cout << "Rock crushes scissors. Human wins! Congratulations!!" << endl;
       }
       else if (computerChoice == 3) {
          cout << "Rock crushes lizard. Human wins! Congratulations!!" << endl;
       }
       else if (computerChoice == 4) {
          cout << "Spock vaporizes rock. Computer wins. Try again." << endl;
       }
   }
   else if (playerChoice == 'P' || playerChoice == 'p') {
       if (computerChoice == 0) {
           cout << "Paper beats rock. Human wins! Congratulations!!" << endl;
       }
       else if (computerChoice == 1) {
           cout << "Its a tie. Try again." << endl;
       }
       else if (computerChoice == 2) {
           cout << "Scissors beats paper. Computer wins. Try again." << endl;
       }
       else if (computerChoice == 3) {
          cout << "Lizard eats paper. Computer wins! Try again." << endl;
       }
       else if (computerChoice == 4) {
          cout << "Paper disproves Spock. Human wins! Congratulations!!" << endl;
       }
   }
   else if (playerChoice == 'L' || playerChoice == 'l') {
       if (computerChoice == 0) {
           cout << "Rock crushes lizard. Computer wins! Try again." << endl;
       }
       else if (computerChoice == 1) {
           cout << "Lizard eats paper. Human wins! Congratulations!!" << endl;
       }
       else if (computerChoice == 2) {
           cout << "Scissors decapitates lizard. Computer wins. Try again." << endl;
       }
       else if (computerChoice == 3) {
          cout << "Its a tie. Try again." << endl;
       }
       else if (computerChoice == 4) {
          cout << "Lizard poisons Spock. Human wins! Congratulations!!" << endl;
       }
   }
   else if (playerChoice == 'V' || playerChoice == 'v') {
       if (computerChoice == 0) {
           cout << "Spock vaporizes rock. Human wins! Congratulations!!" << endl;
       }
       else if (computerChoice == 1) {
           cout << "Paper disproves Spock. Computer wins! Try again." << endl;
       }
       else if (computerChoice == 2) {
           cout << "Spock smashes scissors. Human wins! Congratulations!!" << endl;
       }
       else if (computerChoice == 3) {
          cout << "Lizard poisons Spock. Computer wins! Try again." << endl;
       }
       else if (computerChoice == 4) {
          cout << "Its a tie. Try again." << endl;
       }
   }
   
   return 0;
}