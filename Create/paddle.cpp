/* CSCI 261 Create Project: Breakout
 *
 * Authors: Carter Fowler and Morgan Cox
 */

#include "paddle.h"
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

Paddle::Paddle(){
    _velocity = 0;
    _positionX = 260;
    setPaddle();
}


//getters///////////////////////////////////////////////////////////////////////
int Paddle::getLength() {
    return _length;
}

int Paddle::getPositionX() {
    return _positionX;    
}

int Paddle::getPositionY() {
    return _positionY;
}

RectangleShape Paddle::getPaddle() {
    return _paddle;
}

//setters///////////////////////////////////////////////////////////////////////
void Paddle::setPaddle() {
    _paddle.setSize(Vector2f(_length, 20));
    _paddle.setPosition(_positionX, _positionY);
    _paddle.setFillColor( Color::White );
}

void Paddle::setVelocity(int v){
    _velocity = v;
}

void Paddle::setPositionX(int x) {
    _positionX = x;
    setPaddle();
}

       

//functions/////////////////////////////////////////////////////////////////////
void Paddle::updatePosition(){
    _positionX += _velocity;
    setPaddle();
}

void Paddle::leftWallCollision(){
    if (_positionX <= 0) {
        _velocity = 0;
    }
}

void Paddle::rightWallCollision(){
    int xMax = 640 - _length;
    if(_positionX >= xMax) {
        _velocity = 0;
    }
}