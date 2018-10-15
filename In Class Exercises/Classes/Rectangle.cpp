#include "Rectangle.h"

// Constructors
Rectangle::Rectangle () {
    _height = 1.0;
    _width = 1.0;
}

Rectangle::Rectangle( double newHeight, double newWidth ) {
    _height = newHeight;
    _width = newWidth;
}

// Getters
double Rectangle::getHeight() {
    return _height;
}

double Rectangle::getWidth() {
    return _width;
}

// Setters


// Calculate Area
double Rectangle::calculateArea () {
    return _height * _width;
}

// Calculate Perimeter
double Rectangle::calculatePerimeter () {
    return (2 * _height + 2 * _width);
}