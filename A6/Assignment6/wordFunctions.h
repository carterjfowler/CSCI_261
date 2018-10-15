#pragma once
#include <string>
#include <vector>

struct WordCount {
    int count;
    std::string word;
};

void readInput(std::vector <WordCount>& wordVec, std::string &word, WordCount number);
void sortVector(std::vector <WordCount>& wordVec, int size);
void printVector(std::vector <WordCount> wordVec, int size);
void minMax(std::vector <int>& smallWord, std::vector <int>& bigWord, std::vector <WordCount> wordVec, int size2);