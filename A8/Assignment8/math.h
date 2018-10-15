/* CSCI 261 Assignment 7: Magic Item Class
 *
 * Author: Carter Fowler
 * Section A
 */

#pragma once
#include <string>

using namespace std;

class MagicItem {
    public:
        MagicItem();
        string getPrize();
        string getFakePrize();
        string getEquation();
        string getFirstDeriv();
        string getSecondDeriv();
        bool isCorrect(string eq1, string eq2);
        void showAnswer(string eq);
        bool playAgain(string again);
    private:
        string equation;
        string firstDeriv;
        string secondDeriv;
        string prize;
        string fakePrize;
        void introduction();
};