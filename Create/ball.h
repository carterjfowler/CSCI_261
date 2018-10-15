/* CSCI 261 Create Project: Breakout
 *
 * Authors: Carter Fowler and Morgan Cox
 */
#pragma once

#include "paddle.h"
#include "brick.h"
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Ball {
    
    public:
       Ball();
       void collisions(Paddle &paddle);
       void brickCollision(vector <Brick> &row1, vector <Brick> &row2);
       CircleShape getBall();
       void decreaseLives();
       void updatePosition(Paddle paddle, vector<Brick> &row1, vector<Brick> &row2); 
       
       //getters
       int getPositionX();
       int getPositionY();
       int getVelocityX();
       int getVelocityY();
       int getBallLives();
       
       //setters
       void setPositionX(int x);
       void setPositionY(int y);
       void setVelocityY(int y);
       void setColor(int R, int G, int B);
    private:
       CircleShape _ball;
       vector <int> _color;
       int _velocityX;
       int _velocityY;
       int _ballLives;
       int _positionX;
       int _positionY;
       const int _radius = 20;
       void setBall();
};