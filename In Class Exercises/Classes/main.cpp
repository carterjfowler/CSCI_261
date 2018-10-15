/*
Copyright 2017 Julie Krause and CSM CSCI261 Section A  

Permission is hereby granted, free of charge, to any person obtaining a copy of 
this software and associated documentation files (the "Software"), to deal in 
the Software without restriction, including without limitation the rights to 
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies 
of the Software, and to permit persons to whom the Software is furnished to do 
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all 
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
SOFTWARE.

----------------------
CSCI 261 Class Example

Example of the Rectangle Class
*/

#include <iostream>
#include <iomanip>
#include "Rectangle.h"

using namespace std;


int main () {
    
    cout << fixed << setprecision(1);
    Rectangle rectangle1;
    Rectangle rectangle2 ( 5.5, 2.0 );
    
    // Print some facts about our rectangles
    //  - note the differences between the 
    //  default and custom.
    cout << endl << "rectangle1 height: " // used default
         //<< rectangle1._height << endl; // No!  Private
         << rectangle1.getHeight() << endl;
    cout << "rectangle1 width: " 
         //<< rectangle1._width << endl; // No!  Private
         << rectangle1.getWidth() << endl;
    cout << "rectangle1 area: " 
         << rectangle1.calculateArea() << endl;
    cout << "rectangle1 perimeter: " 
         << rectangle1.calculatePerimeter() << endl;
         
    cout << endl << "rectangle2 height: " // used custom constructor
         << rectangle2.getHeight() << endl;
    cout << "rectangle2 width: "
         << rectangle2.getWidth() << endl;
    cout << "rectangle2 area: " 
         << rectangle2.calculateArea() << endl;
    cout << "rectangle2 perimeter: "
         << rectangle2.calculatePerimeter() << endl;
         
    // Change rectangle1
    //rectangle1._height = 99.2;
    //rectangle1._height = -2;
    //cout << endl << "rectangle1 height is " << rectangle1._height << endl;
         
    return 0;
}