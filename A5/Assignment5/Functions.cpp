#include "Functions.h"
#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

//function to create deck
std::string convertIntToSuit( int suitNum ) {
	switch( suitNum ) {
	case 0:
			return "Hearts";
	case 1:
			return "Clubs";
	case 2:
			return "Diamonds";
	case 3:
	default:
			return "Spades";
	}
}

void createDeck (std::vector <Card>& deck) {
    Card card;
    deck.resize(0);
    deck.push_back(card);
    for (int i = 0; i <= 3; ++i) {
        for (int j = 1; j <= 13; ++j) {
            card.rank = j;
            card.suit = convertIntToSuit(i);
            deck.push_back(card);
        }
    }
}

//create a function to print cards
void printCard(std::vector <Card> deck, int i) {
    if (deck.at(i).rank == 1) {
        cout << "Ace of " << deck.at(i).suit << endl;
    } else if (deck.at(i).rank == 11) {
        cout << "Jack of " << deck.at(i).suit << endl;
    } else if (deck.at(i).rank == 12) {
        cout << "Queen of " << deck.at(i).suit << endl;
    } else if (deck.at(i).rank == 13) {
        cout << "King of " << deck.at(i).suit << endl;
    } else {
        cout << deck.at(i).rank << " of " << deck.at(i).suit << endl;
    }
}

//create a function to shuffle the deck
void shuffleDeck(std::vector <Card>& deck) {
    //create a for loop to go through the 52 times
    srand( time(0) );
    for (int i = 0; i < 52; ++i) {
        //use temporary values
        //randomly select two cards from the deck and swap
        int k = (rand()%52);
        int j = (rand()%52);
        
        Card temp;
        
        temp = deck.at(k);
        
        deck.at(k) = deck.at(j);
        
        deck.at(j) = temp;
    }
}

//create a function to deal next card
void dealNextCard(std::vector <Card>& deck, int size) {
    //deal card at back of vector
    printCard(deck, size);
    //remove card just dealt
    deck.pop_back();
}