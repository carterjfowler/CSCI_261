/* CSCI 261 Lab9: Circle Animation
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
int Bubble::getVelocityX() {
    return _velocityX;
}
int Bubble::getVelocityY() {
    return _velocityY;
}
void Bubble::setPosX(int x) {
    _posX = x;
}
void Bubble::setPosY(int y) {
    _posY = y;
}
void Bubble::setRadius(int r) {
    _radius = r;
}
void Bubble::setVelocityX(int x) {
    _velocityX = x;
}
void Bubble::setVelocityY(int y) {
    _velocityY = y;
}
void Bubble::setCircle() {
    _circle.setPosition(_posX, _posY);
    _circle.setRadius(_radius);
}