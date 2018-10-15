/* CSCI 261 Lab 7B: Triangle Class
 *
 * Author: Carter Fowler
 */

#pragma once

class Triangle {
    public:
        Triangle();
        Triangle(int a, int b, int c);
        int getA();
        int getB();
        int getC();
        void setA(int a);
        void setB(int b);
        void setC(int c);
        bool isTriPoss();
        int triArea();
        int triPer();
        bool isLarger(Triangle t2);
    private:
        int sides[3];
};