#pragma once

class Rectangle {
public:

    // Constructor(s)
    Rectangle();
    Rectangle( double newHeight, double newWidth );

    // Methods / functions
    double calculateArea();
    double calculatePerimeter();
    
    // Getter functions
    double getHeight();
    double getWidth();
    
    // Setter functions
    void setHeight( double newHeight );
    void setWidth( double newWidth );

private:
    // Data members (member variables)
    double _height;
    double _width;

};