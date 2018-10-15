#include "wordFunctions.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>



void readInput(std::vector <WordCount>& wordVec, std::string &word, WordCount number) {
    std::ifstream input("greeneggsandham.txt");
    if (input.fail()) {
        std::cerr << "Error opening the input file" << std::endl;
        exit (1);
    }
    int vectorSize = wordVec.size();

    while(input >> word) {
        bool wordFound = false;
        vectorSize = wordVec.size();
        
        for (int i = 0; i < static_cast <int> (word.size()); ++i) {
            if ((word.at(i) == '.') || (word.at(i) == '?') || (word.at(i) == '!') || (word.at(i) == ',')) {
                word.erase(i);
                continue;
            } else continue;
        }
        
        for (int j = 0; j < vectorSize; ++j) {
            if(wordVec.at(j).word == word) {
                wordVec.at(j).count += 1;
                wordFound = true;
                break;
            } else {
                wordFound = false;
            }
        }
        if(wordFound == false) {
            number.word = word;
            number.count = 1;
            wordVec.push_back(number);
        }
    }
}

void sortVector(std::vector <WordCount>& wordVec, int size) {
    std::string firstWord = wordVec.at(0).word;
    std::string nextWord;
    for (int i = 1; i < size; ++i) {
        nextWord = wordVec.at(i).word;
        for (int j = 0; j < static_cast <int> (firstWord.size()); ++j) {
            if (nextWord[j] < firstWord[j]) {
                wordVec.at(i - 1).word = nextWord;
                wordVec.at(i).word = firstWord;
                break;
            } else if (nextWord[j] == firstWord[j]) {
                continue;
            }
        }
    }
}

void printVector (std::vector <WordCount> wordVec, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "#" << std::setw(2) << std::right << (i + 1) << " ";
        std::cout << std::setw(8) << std::left << wordVec.at(i).word << std::right << ":";
        std::cout << std::setw(4) << std::right << wordVec.at(i).count << std::endl;
    }
}

void minMax(std::vector <int>& smallWord, std::vector <int>& bigWord, std::vector <WordCount> wordVec, int size2) {
    for (int i = 0; i < size2; ++i) {
        if (wordVec.at(i).word < wordVec.at(smallWord.at(0)).word) {
            smallWord.at(0) = i;
            continue;
        } else if (wordVec.at(i).word == wordVec.at(smallWord.at(0)).word) {
            smallWord.push_back(i);
        }
    }
    for (int j = 0; j < size2; ++j) {
        if (wordVec.at(j).word > wordVec.at(bigWord.at(0)).word) {
            bigWord.at(0) = j;
            continue;
        } else if (wordVec.at(j).word == wordVec.at(bigWord.at(0)).word) {
            bigWord.push_back(j);
        }
    }
}