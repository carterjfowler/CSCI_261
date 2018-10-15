/* CSCI 261 Lab 7B: Triangle Class
 *
 * Author: Carter Fowler
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

#include "functions.h"

int main() {
    Triangle t1;
    Triangle t2 (5,12,13);
    
    //Print side lengths
    cout << "Side 1 of Triangle 1 is: " << t1.getA() << endl;
    cout << "Side 2 of Triangle 1 is: " << t1.getB() << endl;
    cout << "Side 3 of Triangle 1 is: " << t1.getC() << endl << endl;
    cout << "Side 1 of Triangle 2 is: " << t2.getA() << endl;
    cout << "Side 2 of Triangle 2 is: " << t2.getB() << endl;
    cout << "Side 3 of Triangle 2 is: " << t2.getC() << endl << endl;
    
    //Set new side lengths
    cout << "Now to mess with Triangle 2." << endl;
    do {
        int newSide;
        cout << "Enter a new length for side 1: ";
        cin >> newSide;
        t2.setA(newSide);
        cout << "Enter a new length for side 2: ";
        cin >> newSide;
        t2.setB(newSide);
        cout << "Enter a new length for side 3: ";
        cin >> newSide;
        t2.setC(newSide);
        if (!t2.isTriPoss()) {
            cout << "Entered values do not work. Please try again." << endl;
        }
    } while (!t2.isTriPoss());
    
    //Print new lengths
    cout << "\nNew side 1 of Triangle 2 is " << t2.getA() << endl;
    cout << "New side 2 of Triangle 2 is " << t2.getB() << endl;
    cout << "New side 3 of Triangle 2 is " << t2.getC() << endl;
    cout << "\nArea of new Triangle 2 is " << t2.triArea() << endl;
    cout << "Perimeter of new Triangle 2 is " << t2.triPer() << endl;
    
    //create triangle 3
    cout << "\nNow lets create a third Triangle!" << endl;
    Triangle t3(3,4,5);
    do {
        int newSide;
        cout << "Enter a new length for side 1: ";
        cin >> newSide;
        t3.setA(newSide);
        cout << "Enter a new length for side 2: ";
        cin >> newSide;
        t3.setB(newSide);
        cout << "Enter a new length for side 3: ";
        cin >> newSide;
        t3.setC(newSide);
        if (!t3.isTriPoss()) {
            cout << "Entered values do not work. Please try again." << endl;
        }
    } while (!t3.isTriPoss());
    //Now print info about Triangle 3
    cout << "\nNew side 1 of Triangle 3 is " << t3.getA() << endl;
    cout << "New side 2 of Triangle 3 is " << t3.getB() << endl;
    cout << "New side 3 of Triangle 3 is " << t3.getC() << endl;
    cout << "\nArea of new Triangle 3 is " << t3.triArea() << endl;
    cout << "Perimeter of new Triangle 3 is " << t3.triPer() << endl;
    
    cout << "\nBut which Triangle is bigger? Let's find out!" << endl;
    if (t2.isLarger(t3)) {
        cout << "Triangle 2 is larger than Triangle 3." << endl;
    } else {
        cout << "Triangle 3 is larger than Triangle 2." << endl;
    }
    
    return 0;
}