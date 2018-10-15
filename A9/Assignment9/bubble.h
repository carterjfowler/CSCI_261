/* CSCI 261 Assignment 9: Multiple Bubble Animation
 *
 * Author: Carter Fowler
 */

#pragma once

#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Bubble {
    public:
        Bubble();
        void updatePosition();
        double getPosX();
        double getPosY();
        double getRadius();
        double getVelocityX();
        double getVelocityY();
        CircleShape getCircle();
        void setPosX(int x);
        void setPosY(int y);
        void setRadius(int r);
        void setColor(int R, int G, int B);
        void setVelocityX(double x);
        void setVelocityY(double y);
        void setCircle();
    private:
        CircleShape _circle;
        double _posX;
        double _posY;
        double _radius;
        vector <int> _color;
        double _velocityX;
        double _velocityY;
};