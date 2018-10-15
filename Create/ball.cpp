/* CSCI 261 Create Project: Breakout
 *
 * Authors: Carter Fowler and Morgan Cox
 */

#include "ball.h"
#include "brick.h"
#include "paddle.h"
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

Ball::Ball(){
    _velocityX = -1;
    _velocityY = -1;
    _color.push_back(255);
    _color.push_back(255);
    _color.push_back(255);
    _ballLives = 3;
    _positionX = 300.0;
    _positionY = 460.0;
    setBall();
}


//functions/////////////////////////////////////////////////////////////////////

void Ball::updatePosition(Paddle paddle, vector<Brick> &row1, vector<Brick> &row2){
    collisions(paddle);
    brickCollision(row1, row2);
    _positionX += _velocityX;
    _positionY += _velocityY;
    setBall();
}

void Ball::collisions(Paddle &paddle){
    //paddle.updatePosition();
    int /*yMax = 640 - 2 * _radius,*/ xMax = 640 - 2 * _radius;
    int yMin = 0, xMin = 0;

    if(_positionX > xMax || _positionX < xMin){
        _velocityX = _velocityX * -1;
    }
    
    if(/*_positionY > yMax ||*/ _positionY < yMin){
         _velocityY = _velocityY * -1;
    }
    
    if((paddle.getPositionY() - _positionY) < 40){
        if(_positionX >= paddle.getPositionX()  && _positionX <= (paddle.getPositionX() + paddle.getLength())){
            _velocityY = _velocityY * -1;
        }
    }
}

//For this collision we are going to have to check row 2 first then row 1
//Don't forget to implement new collision math!!
//Think about approaching this function from a different way, maybe
//Although I think this will work fine
//Idea: Chnage the color of the brick once it hits the bricks, also when it goes past the paddle and "dies"


void Ball::brickCollision(vector<Brick> &row1, vector<Brick> &row2){
    int row1size = row1.size();
    int row2size = row2.size();
    int k = 0;
    int j = 0;
    bool row1Hit = false;
    bool row2Hit = false;
    for(int i = 0; i < row1size; ++i){
        if((row1[i].getPositionY() + 20) == _positionY || row1[i].getPositionY() == _positionY){
            if(_positionX >= row1[i].getPositionX()  && _positionX <= (row1[i].getPositionX() + row1[i].getLength())){
                _velocityY = -1 * _velocityY;
                row1Hit = true;
                break;
            } else {
                row1Hit = false;
            }
        }
        ++k;
    }
    for(int i = 0; i < row2size; ++i){
        if((row2[i].getPositionY() + 20) == _positionY || row2[i].getPositionY() == _positionY){  
            if(_positionX >= row2[i].getPositionX()  && _positionX <= (row2[i].getPositionX() + row2[i].getLength())){
                _velocityY = -1 * _velocityY;
                row2Hit = true;
                break;
            } else {
                row2Hit = false;
            }
        }
        ++j;
    }
    srand( time(0) );
    if(row1Hit) {
        row1[k].hit(row1, k);
        setColor(rand()%256, rand()%256, rand()%256);
    } else if (row2Hit) {
        row2[j].hit(row2, j);
        setColor(rand()%256, rand()%256, rand()%256);
    }
}

//getters///////////////////////////////////////////////////////////////////////

CircleShape Ball::getBall(){
    return _ball;
}

int Ball::getBallLives(){
    return _ballLives;
}

int Ball::getPositionX(){
    return _positionX;
}

int Ball::getPositionY(){
    return _positionY;
}

int Ball::getVelocityX(){
    return _velocityX;
}

int Ball::getVelocityY(){
    return _velocityY; 
}


//setters///////////////////////////////////////////////////////////////////////

void Ball::setPositionX(int x) {
    _positionX = x;
    setBall();
}

void Ball::setPositionY(int y){
    _positionY = y;
    setBall();
}

void Ball::setBall(){
    _ball.setPosition(_positionX, _positionY);
    _ball.setRadius(_radius);
    _ball.setFillColor(Color(_color[0], _color[1], _color[2]));
}


void Ball::decreaseLives(){
    --_ballLives;
}

void Ball::setVelocityY(int y){
    _velocityY = y;
}
void Ball::setColor(int R, int G, int B) {
    _color[0] = R;
    _color[1] = G;
    _color[2] = B;
    setBall();
}