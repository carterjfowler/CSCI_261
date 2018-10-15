/* CSCI 261 Lab 3D: Yahtzee
 *
 * Author: Carter Fowler
 */

#include <iostream>

using namespace std;

//first function, basically did you roll a three?
bool isThrees (int die1, int die2, int die3, int die4, int die5) {
    if (die1 == 3 || die2 == 3 || die3 == 3 || die4 == 3 || die5 == 3) {
        return true;
    } else {
        return false;
    }
}

int scoreThrees (int die1, int die2, int die3, int die4, int die5) {
    int score = 0;
    bool isThrees;
    
    if (die1 == 3 || die2 == 3 || die3 == 3 || die4 == 3 || die5 == 3) {
        isThrees = true;
    } else {
        isThrees = false;
    }
    
    if (isThrees == true) {
        if (die1 == 3) {
            score += 3;
        }
        if (die2 == 3) {
            score += 3;
        }
        if (die3 == 3) {
            score += 3;
        }
        if (die4 == 3) {
            score += 3;
        }
        if (die5 == 3) {
            score += 3;
        }
    } else {
        score = 0;
    }
    return score;
}