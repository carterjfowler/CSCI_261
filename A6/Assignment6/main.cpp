/* CSCI 261 Assignment 6: Green Eggs and Ham
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

#include "wordFunctions.h"

#include <SFML/Graphics.hpp>
using namespace sf;

int main() {
    ifstream input;
    input.open("greeneggsandham.txt");
    vector <WordCount> wordVec;
    
    if (input.fail()) {
        cerr << "Error opening the input file" << endl;
        exit (1);
    }
    //read input file one word at a time
    std::string word;
    WordCount temp;
    readInput (wordVec, word, temp);
    
    input.close();

    //sort vector alphabetically
    sortVector(wordVec, wordVec.size());
    //print out all the words and their count "#1 AWORD    :  3", use proper spacing
    printVector(wordVec, wordVec.size());
    //print out the least and most frequent word and its count
    vector <int> smallWord;
    vector <int> bigWord;
    smallWord.push_back(0);
    bigWord.push_back(0);
    minMax(smallWord, bigWord, wordVec, wordVec.size());
    if (static_cast <int> (smallWord.size()) > 1) {
        cout << "The smallest words are: ";
    } else {
        cout << "The smallest word is: ";
    }
    for (int i = 0; i < static_cast <int> (smallWord.size()); ++i) {
        int location = smallWord.at(i);
        cout << setw(5) << left << wordVec.at(location).word << right << ":";
        cout << setw(3) << right << wordVec.at(location).count << "  ";
    }
    cout << "\nLargest word(s) is/are: ";
    for (int j = 0; j < static_cast <int> (bigWord.size()); ++j) {
        int place = bigWord.at(j);
        cout << setw(5) << left << wordVec.at(place).word << right << ":";
        cout << setw(3) << right << wordVec.at(place).count << "  ";
    }
    
    
    //SFML Stuff
    RenderWindow window( VideoMode(640, 480), "SFML Window" );
    
    while(window.isOpen()) {
        int vecSize = wordVec.size();
        int width = 480/(vecSize);
        int heightVar = 640/(wordVec.at(bigWord.at(0)).count);
        int x(0), y;
        for (int i = 0; i < vecSize; ++i) {
            RectangleShape bar;
            int height = heightVar * wordVec.at(i).count;
            y = 640 - height;
            bar.setSize(Vector2f((float)width, (float)height));
            bar.setPosition(Vector2f((float)x, (float)y));
            if (i == bigWord.at(0)) {
                bar.setFillColor(Color::White);
            } else if (i == smallWord.at(0) || i == smallWord.at(1)) {
                bar.setFillColor(Color::Red);
            } else {
                bar.setFillColor(Color::Blue);
            }
            window.draw(bar);
            y = y + width;
            window.display();
        }
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            } else if( event.type == Event::KeyPressed ) {
                if( Keyboard::isKeyPressed( Keyboard::Q ) ) {
                    window.close();
                }
            }
        }
    }
    
    return 0;
}