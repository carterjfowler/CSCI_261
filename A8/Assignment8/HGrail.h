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
 
#pragma once
#include <iostream>
#include <string>
using namespace std;

class HolyGrail {
    
    public:
        HolyGrail();                     //default constructor
        void introduction();             //introduces the puzzle to pass
        bool question1();
        bool question2();
        bool question3();
        
        string getGold();               //getters
        string getItem();

        void setItem(string item);      //setters           
        void setGold(string win);
    
    private:
        string _potOfGold;              //private data members
        string _magicItem; 
};

