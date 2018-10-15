/* CSCI 261 Lab 7B: Triangle Class
 *
 * Author: Carter Fowler
 */

#include "functions.h"
#include <cmath>

Triangle::Triangle() {
    sides[0] = 1;
    sides[1] = 1;
    sides[2] = 1;
}
Triangle::Triangle(int a, int b, int c) {
    sides[0] = a;
    sides[1] = b;
    sides[2] = c;
}
int Triangle::getA() {
    return sides[0];
}
int Triangle::getB() {
    return sides[1];
}
int Triangle::getC() {
    return sides[2];
}
void Triangle::setA(int a) {
    if (a > 0) {
        sides[0] = a;
    }
}
void Triangle::setB(int b) {
    if (b > 0) {
        sides[1] = b;
    }
}
void Triangle::setC(int c) {
    if (c > 0) {
        sides[2] = c;
    }
}
bool Triangle::isTriPoss() {
    if ((sides[0] < (sides[1] + sides[2])) && (sides[1] < (sides[0] + sides[2])) && (sides[2] < (sides[0] + sides[1]))) {
        return true;
    } else {
        return false;
    }
}
int Triangle::triArea() {
    double s = (sides[0] + sides[1] + sides[2]) / 2;
    return sqrt(s * (s - sides[0]) * (s - sides[1]) * (s - sides[2]));
}
int Triangle::triPer() {
    return (sides[0] + sides[1] + sides[2]);
}
bool Triangle::isLarger(Triangle t2) {
   if (triArea() > t2.triArea()) {
       return true;
   } else {
       return false;
   }
}