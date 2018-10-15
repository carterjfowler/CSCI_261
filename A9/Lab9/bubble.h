/* CSCI 261 Lab9: Circle Animation
 *
 * Author: Carter Fowler
 */

#pragma once

#include <SFML/Graphics.hpp>

using namespace sf;

class Bubble {
    public:
        Bubble();
        void updatePosition();
        double getPosX();
        double getPosY();
        double getRadius();
        int getVelocityX();
        int getVelocityY();
        CircleShape getCircle();
        void setPosX(int x);
        void setPosY(int y);
        void setRadius(int r);
        void setVelocityX(int x);
        void setVelocityY(int y);
        void setCircle();
    private:
        CircleShape _circle;
        double _posX;
        double _posY;
        double _radius;
        int _velocityX;
        int _velocityY;
};