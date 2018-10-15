/* CSCI 261 Assignment 9: Multiple Bubble Animation
 *
 * Author: Carter Fowler
 */

#include "bubble.h"
#include <SFML/Graphics.hpp>

using namespace sf;

Bubble::Bubble() {
    _posX = 0;
    _posY = 0;
    _radius = 30;
    _velocityX = 1;
    _velocityY = 2;
    _color.push_back(255);
    _color.push_back(255);
    _color.push_back(255);
    setCircle();
}
CircleShape Bubble::getCircle() {
    return _circle;
}
void Bubble::updatePosition() {
    _posX += _velocityX;
    _posY += _velocityY;
    setCircle();
}
double Bubble::getPosX() {
    return _posX;
}
double Bubble::getPosY() {
    return _posY;
}
double Bubble::getRadius() {
    return _radius;
}
double Bubble::getVelocityX() {
    return _velocityX;
}
double Bubble::getVelocityY() {
    return _velocityY;
}
void Bubble::setPosX(int x) {
    _posX = x;
    setCircle();
}
void Bubble::setPosY(int y) {
    _posY = y;
    setCircle();
}
void Bubble::setRadius(int r) {
    _radius = r;
    setCircle();
}
void Bubble::setColor(int R, int G, int B) {
    _color[0] = R;
    _color[1] = G;
    _color[2] = B;
    setCircle();
}
void Bubble::setVelocityX(double x) {
    _velocityX = x;
}
void Bubble::setVelocityY(double y) {
    _velocityY = y;
}
void Bubble::setCircle() {
    _circle.setPosition(_posX, _posY);
    _circle.setRadius(_radius);
    _circle.setFillColor( Color (_color[0], _color[1], _color[2]));
}