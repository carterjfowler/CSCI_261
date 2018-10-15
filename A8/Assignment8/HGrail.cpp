/* CSCI261 Assignment 7: The BridgeKeeper
 *
 * Author: Brian Merlino
 * CSCI 261 Section A
 *
 * Purpose: give students more practice with classes by 
 * creating a unique "magic class"
 *
 * A fun script quest game built from the BridgeKeeper
 * scene from Monty Python and the Holy Grail
 */
 
#include "HGrail.h"
#include <iostream>
#include <string>
using namespace std;

HolyGrail::HolyGrail() {
    
}

void HolyGrail::introduction() {
    cout << "\n" << "[You've come up to a bridge on a foggy mountain pass";
    cout << " with a BridgeKeeper blocking your path to cross...]";
    cout << "\n\n";
    cout << "[BridgeKeeper] Stop! Who would cross the Bridge of Death must answer me";
    cout << " these questions three," << endl;
    cout << " ere the other side he see." << endl;
}

bool HolyGrail::question1() {
    int userName;
    bool qResponse;

    cout << "\n" << "[BridgeKeeper] What... is... your name?" << endl;
    cout << "Select the corresponding number: " << endl;
    cout << "1. Arthur, King of the Britons!" << endl;
    cout << "2. Sir Launcelot of Camelot" << endl;
    cout << "3. Sir Galahad of Camelot!" << endl;
    cout << "4. Brian Merlino" << endl;
    cin >> userName;
    if(userName == 1) {
        qResponse = true;
        return qResponse;
    }
    
    else {
        cout << "BOOOOM!, you've been thrown into the Gorge of Eternal Peril," << endl;
        cout << " your quest is over." << endl;
        qResponse = false;
        return qResponse;
    }
}

bool HolyGrail::question2() {
    int userQuest;
    bool qResponse;
    
    cout << "\n" << "[BridgeKeeper] What... is... your quest?" << endl;
    cout << "1. To leave this place..." << endl;
    cout << "2. To seek the Holy Grail!" << endl;
    cout << "3. To yell Neeee!" << endl;
    cout << "4. 1997 Nissan with 6-disc CD changer and A/C" << endl;
    cin >> userQuest;
    if(userQuest == 2) {
        qResponse = true;
        return qResponse;
    }
    else {
        cout << "BOOOOM!, you've been thrown into the Gorge of Eternal Peril" << endl;
        cout << " your quest is over." << endl;
        qResponse = false;
        return qResponse;
    }
}

bool HolyGrail::question3() {
    bool qResponse;
    int userChoice;

    cout << "\n" << "[BridgeKeeper] What... is... the airspeed velocity of an unlaiden swallow?" << endl;
    cout << "[Choose wisely...]" << endl;
    cout << "1. 3 grams/cc" << endl;
    cout << "2. Which type of swallow?" << endl;
    cout << "3. In this style 10/6" << endl;
    cout << "4. 16 furlongs/fortnight" << endl;
    cin >> userChoice;

    if (userChoice == 2) {
        qResponse = true;
        return qResponse;
    }
    else {
        cout << "BOOOOM!, you've been thrown into the Gorge of Eternal Peril" << endl;
        cout << " your quest is over." << endl;
        qResponse = false;
        return qResponse;
    }
}


string HolyGrail::getGold() {
    return _potOfGold;
}

string HolyGrail::getItem() {
    return _magicItem;
}

void HolyGrail::setItem(string item) {
    _magicItem = item;
}

void HolyGrail::setGold(string win) {
    _potOfGold = win;
}
