/* CSCI 261 Create Project: Breakout
 *
 * Authors: Carter Fowler and Morgan Cox
 */
#pragma once
#include <vector>
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Brick{
    public:
    
    Brick(int positionX, int positionY);
    
    //functions
        void hit(vector <Brick> &row, int i);
    //setters
        void setPositionX(int x);
        void setPositionY(int y);
        void setColor(int R, int G, int B);
       
    //getters
        int getPositionX();
        int getPositionY();
        int getLength();
        string getColor();
        RectangleShape getBrick();
       
    private:
       RectangleShape _brick;
       vector <int> _color;
       int _positionX;
       int _positionY;
       int _length;
       void setBrick();
};