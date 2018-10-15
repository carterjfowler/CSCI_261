/* CSCI 261 Assignment 5: Blackjack
 *
 * Author: Carter Fowler
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

#include "Functions.h"

int main() {
    //create a vector
    vector <Card> deck;
    createDeck(deck);
    shuffleDeck(deck);
    /*for (int i = 1; i <= 52; ++i) {
       printCard(deck, i); 
    }*/
    /*for (int i = 1; i <= 52; ++i) {
       cout << (deck.size() - 1) << endl;
       dealNextCard(deck, (deck.size() - 1));
    }*/
    
    //Game time!!
    
    //while the player wants to play
    string playerCont = "Yes";
    while (playerCont == "Yes" || playerCont == "yes") {
        //should create vectors for each players hand
        vector <Card> dealerHand;
        int dealerTotal = 0;
        vector <Card> playerHand;
        int playerTotal = 0;
        bool playerBust = false;
        bool dealerBust = false;
        bool playerAce = false;
        int playerAceNum = 0;
        int playerCountAce = 0;
        bool dealerAce = false;
        int dealerAceNum = 0;
        int dealerCountAce = 0;
        //deal card to dealer, display dealer's total
        Card card;
        dealerHand.push_back(card);
        dealerHand.at(0) = deck.back();
        cout << "The dealer was dealt the ";
        dealNextCard(deck, (deck.size() - 1));
        if (dealerHand.at(0).rank == 11 || dealerHand.at(0).rank == 12 || dealerHand.at(0).rank == 13) {
            dealerTotal += 10;
        } else {
            dealerTotal = dealerTotal + dealerHand.at(0).rank;
        } if (dealerHand.at(0).rank == 1) {
            dealerAce = true;
            ++dealerAceNum;
            if (dealerTotal <= 11) {
               dealerTotal += 10;
            }
        }
        cout << "Dealer's total is: " << dealerTotal << endl;
        //deal cards to player, display their total
        playerHand.push_back(card);
        playerHand.at(0) = deck.back();
        cout << "You were dealt the ";
        dealNextCard(deck, (deck.size() - 1));
        if (playerHand.at(0).rank == 11 || playerHand.at(0).rank == 12 || playerHand.at(0).rank == 13) {
            playerTotal += 10;
        } else {
            playerTotal = playerTotal + playerHand.at(0).rank;
        } if (playerHand.at(0).rank == 1) {
            playerAce = true;
            ++playerAceNum;
            if (playerTotal <= 11) {
                playerTotal += 10;
            }
        }
        playerHand.push_back(card);
        playerHand.at(1) = deck.back();
        cout << "You were dealt the ";
        dealNextCard(deck, (deck.size() - 1));
        if (playerHand.at(1).rank == 11 || playerHand.at(1).rank == 12 || playerHand.at(1).rank == 13) {
            playerTotal += 10;
        } else {
            playerTotal = playerTotal + playerHand.at(1).rank;
        } if (playerHand.at(1).rank == 1) {
            playerAce = true;
            ++playerAceNum;
            if (playerTotal <= 11) {
                playerTotal += 10;
                if (playerTotal > 21) {
                    playerTotal -= 10;
                }
            }
        }
        cout << "Your total is: " << playerTotal << endl;
        //while players hand is less than or equal to 21
        if (playerTotal <= 21) {
            string playerHit;
            cout << "Do you want to \"Hit\" or \"Stand\"? ";
            cin >> playerHit;
            while (playerHit == "Hit" || playerHit == "hit") {
                //check if shuffle is needed
                if (deck.size() < 20) {
                    createDeck(deck);
                    shuffleDeck(deck);
                }
                //deal card to player, display their total
                int i = 2;
                playerHand.push_back(card);
                playerHand.at(i) = deck.back();
                cout << "You were dealt the ";
                dealNextCard(deck, (deck.size() - 1));
                if (playerHand.at(i).rank == 11 || playerHand.at(i).rank == 12 || playerHand.at(i).rank == 13) {
                    playerTotal += 10;
                } else {
                    playerTotal = playerTotal + playerHand.at(i).rank;
                } if (playerHand.at(i).rank == 1) {
                    playerAce = true;
                    ++playerAceNum;
                    if (playerTotal <= 11) {
                        playerTotal += 10;
                    }
                }
                
                //check if over 21, if so bust
                if (playerAce && playerTotal > 21 && playerCountAce < playerAceNum) {
                    playerTotal -= 10;
                    ++playerCountAce;
                } else if (playerTotal > 21) {
                    playerBust = true;
                    break;
                }
                cout << "Your total is: " << playerTotal << endl;
                //hit or stand?
                cout << "Do you want to \"Hit\" or \"Stand\"? ";
                cin >> playerHit;
            }
        }
        //if player hasn't busted and dealer is less than 17
        while (playerBust == false && dealerTotal < 17) {
            //deal card to dealer, display dealer's total
            int i = 1;
            dealerHand.push_back(card);
            dealerHand.at(i) = deck.back();
            cout << "The dealer was dealt the ";
            dealNextCard(deck, (deck.size() - 1));
            if (dealerHand.at(i).rank == 11 || dealerHand.at(i).rank == 12 || dealerHand.at(i).rank == 13) {
                dealerTotal += 10;
            } else {
                dealerTotal = dealerTotal + dealerHand.at(i).rank;
            } if (playerHand.at(i).rank == 1) {
                dealerAce = true;
                ++dealerAceNum;
                if (dealerTotal <= 11) {
                    dealerTotal += 10;
                }
            }
            if (dealerTotal > 21 && dealerAce && dealerCountAce < dealerAceNum) {
                dealerTotal -= 10;
                ++dealerCountAce;
            }
            cout << "Dealer's total is: " << dealerTotal << endl;
            ++i;
        }
        if (dealerTotal > 21) {
            dealerBust = true;
        }
        //determine winner
        if (playerBust) {
            cout << "You busted. The dealer won." << endl;
        } else if (dealerBust) {
            cout << "The dealer busted! You won! Congratulations!" << endl;
        } else if (playerTotal > dealerTotal) {
            cout << "You won!! Congratulations!" << endl;
        } else if (dealerTotal > playerTotal) {
            cout << "Dealer won." << endl;
        } else if (playerTotal == dealerTotal) {
            cout << "Its a tie." << endl;
        }
        //play again?
        cout << "Would you like to play again? Please enter Yes or No: ";
        cin >> playerCont;
    }
    
    return 0;
}