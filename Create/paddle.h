/* CSCI 261 Create Project: Breakout
 *
 * Authors: Carter Fowler and Morgan Cox
 */
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

class Paddle {
    public:
       Paddle();
       //getters
       int getPositionX();
       int getPositionY();
       int getLength();
       
       //setters
       void setPositionX(int x);
       void setVelocity(int v);
       
       //functions
       void leftWallCollision();
       void rightWallCollision();
       void updatePosition();
       RectangleShape getPaddle();
       
    private:
       RectangleShape _paddle;
       int _velocity;
       int _positionX;
       const int _positionY = 500;
       const int _length = 120;
       void setPaddle();
};