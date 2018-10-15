#include "Functions.h"
#include <iostream>

using namespace std;

char printCurr (char word[8]) {
    for (int i = 0; i < 8; ++i) {
        cout << word[i];
    }
}
char printSec (char word[8]) {
    for (int i = 0; i < 8; ++i) {
        cout << word[i];
    }
}

bool guessed (char userGuess, char wrongGuessArray[12], char currGuessArray[8]) {
    int i, j;
    bool guessed;
    for (i = 0; i < 8; ++i){
        if (userGuess == currGuessArray[i]) {
            return true;
        } else {
          continue;  
        }
    }
    for (j = 0; j < 12; ++j) {
        if (userGuess == wrongGuessArray[j]) {
            return true;
        } else {
          continue;  
        }
    }
    if (i == 8 && j == 12) {
        return false;
    }
}