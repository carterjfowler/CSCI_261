/* CSCI 261 Assignment 7: Magic Item Class
 *
 * Author: Carter Fowler
 * Section A
 */

#include "math.h"
#include <string>
#include <iostream>

using namespace std;

MagicItem::MagicItem() {
    prize = "a christmas pencil";
    fakePrize = "another derivative problem";
    equation = "4x^4 + x^3 + 2x + 7";
    firstDeriv = "16x^3 + 3x^2 + 2";
    secondDeriv = "48x^2 + 6x";
    introduction();
}
void MagicItem::introduction() {
    cout << "\nCome one, come all, and try your hand at some  *dramatic, horror movie music*  CALCULUS  *lightning flash*" << endl;
    cout << "Although if you get it right, you could win an AMAZING PRIZE!!!" << endl;
}
string MagicItem::getPrize() {
    return prize;
}
string MagicItem::getFakePrize() {
    return fakePrize;
}
string MagicItem::getEquation() {
    return equation;
}
string MagicItem::getFirstDeriv() {
    return firstDeriv;
}
string MagicItem::getSecondDeriv() {
    return secondDeriv;
}
bool MagicItem::isCorrect(string eq1, string eq2) {
    if (eq2 == eq1) {
        return true;
    } else {
        return false;
    }
}
void MagicItem::showAnswer(string eq) {
    cout << eq;
}
bool MagicItem::playAgain(string again) {
    if (again == "Yes" || again == "yes") {
        return true;
    } else {
        return false;
    }
}