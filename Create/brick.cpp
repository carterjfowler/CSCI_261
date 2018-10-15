/* CSCI 261 Create Project: Breakout
 *
 * Authors: Carter Fowler and Morgan Cox
 */

#include "brick.h"
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

Brick::Brick(int positionX, int positionY) { //brick constructor
    _positionX = positionX;
    _positionY = positionY;
    _length = 64;
    _color.push_back(255);
    _color.push_back(255);
    _color.push_back(255);
    setBrick();
}

//getters///////////////////////////////////////////////////////////////////////
int Brick::getPositionX() {
    return _positionX;
}

int Brick::getPositionY() {
    return _positionY;
}

int Brick::getLength() {
    return _length;
}

RectangleShape Brick::getBrick() {
    return _brick;
}

//setters///////////////////////////////////////////////////////////////////////
void Brick::setPositionX(int x) {
    _positionX = x;
}

void Brick::setPositionY(int y) {
    _positionY = y;
}

void Brick::setColor(int R, int G, int B) {
    _color[0] = R;
    _color[1] = G;
    _color[2] = B;
    setBrick();
}


void Brick::setBrick() {
     _brick.setSize(Vector2f(_length, 20));
    _brick.setPosition(_positionX, _positionY);
    _brick.setFillColor(Color (_color[0], _color[1], _color[2]));
}

//functions/////////////////////////////////////////////////////////////////////
void Brick::hit(vector <Brick> &row, int i) { //sees if the brick is hit
    //check brick color first
    row.erase(row.begin() + i);
}