#pragma once
#include <string>
#include <vector>

std::string convertIntToSuit( int suitNum );

struct Card {
    int rank;
    std::string suit;
};

void createDeck (std::vector <Card>& deck);
void printCard(std::vector <Card> deck, int i);
void shuffleDeck(std::vector <Card>& deck);
void dealNextCard(std::vector <Card>& deck, int size);