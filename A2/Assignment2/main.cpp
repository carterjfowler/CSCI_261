/* CSCI 261 Assignment 2: Triangle assignment
 *
 * Author: Carter Fowler
 */


#include <iostream> 
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    double triangleSide1;           //triangle side length variables
    double triangleSide2;
    double triangleSide3;
    double a;                       //used to determine triangle type
    double b;
    double c;                       //longest side
    double s;                       //used in Heron's formula
    double perimeter;
    double area;
    srand( time(0) );               //seed random using time
    int maxLength;               //max side length assigned by user
    
    
    cout << "Enter the maximum side length for your triangle (must be an integer): ";            //getting user input for max triangle side length
    cin >> maxLength;
    
    triangleSide1 = ((rand() % maxLength) + 1);
    triangleSide2 = ((rand() % maxLength) + 1);
    triangleSide3 = ((rand() % maxLength) + 1);
    
    if (triangleSide1 < (triangleSide2 + triangleSide3)) {                    //checking to make sure the inputed lengths make a triangle before running code.
    }
    else {
        cout << "Given values do not create a triangle. Try again." << endl;
        return 0;
    }
    if (triangleSide2 < (triangleSide1 + triangleSide3)) {
    }
    else {
        cout << "Given values do not create a triangle. Try again." << endl;
        return 0;
    }
    if (triangleSide3 < (triangleSide1 + triangleSide2)) {
    }
    else {
        cout << "Given values do not create a triangle. Try again." << endl;
        return 0;
    }
    
    
    if ((triangleSide1 > triangleSide2) && (triangleSide1 > triangleSide3)) {         //Determining longest side
        c = triangleSide1;
        a = triangleSide2;
        b = triangleSide3;
    }
    else if ((triangleSide2 > triangleSide1) && (triangleSide2 > triangleSide3)) {
        c = triangleSide2;
        a = triangleSide1;
        b = triangleSide3;
    }
    else if ((triangleSide3 > triangleSide1) && (triangleSide3 > triangleSide2)) {
        c = triangleSide3;
        a = triangleSide1;
        b = triangleSide2;
    }
    else if (fabs(triangleSide1 - triangleSide2) <= 0.0001) {                            //fixes the ordering problem for acute triangles
        if (triangleSide1 > triangleSide3) {
            c = triangleSide1;
            b = triangleSide2;
            a = triangleSide3;
        }
        else {
            c = triangleSide3;
            a = triangleSide1;
            b = triangleSide2;
        }
    }
    else if (fabs(triangleSide2 - triangleSide3) <= 0.0001) {
        if (triangleSide2 > triangleSide1) {
            c = triangleSide2;
            b = triangleSide3;
            a = triangleSide1;
        }
        else {
            c = triangleSide1;
            a = triangleSide2;
            b = triangleSide3;
        }
    }
    
    if (fabs(pow(a,2) + pow(b,2) - pow(c,2)) <= 0.0001) {                           //checks if it is a right triangle
        cout << "These side lengths result in a right triangle." << endl;
    }
    else if ((pow(a,2) + pow(b,2)) > pow(c,2)) {                                    //checks if it is an acute triangle
        cout << "These side lengths result in an acute triangle." << endl;
    }
    else if ((pow(a,2) + pow(b,2)) < pow(c,2)) {                                    //checks if it is an obtuse triangle
        cout << "These side lengths result in an obtuse triangle." << endl;
    }
    
    
    if (a > b) {
        cout << "Side lengths in increasing order: " << b << " " << a << " " << c << endl;                                                //prints the side lengths in increasing order
    }
    else {
        cout << "Side lengths in increasing order: " << a << " " << b << " " << c << endl;
    }
    perimeter =  a + b + c;
    
    //area stuff
    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;
    
   return 0;
}