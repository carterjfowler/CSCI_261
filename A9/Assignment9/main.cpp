/* CSCI 261 Assignment 9: Multiple Bubble Animation
 *
 * Author: Carter Fowler
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

#include "bubble.h"

int main() {
    srand( time(0) );
    
    Bubble bubble1;
    Bubble bubble2;
    Bubble bubble3;
    Bubble bubble4;
    Bubble bubble5;
    
    vector <Bubble> bubbles;
    
    bubbles.push_back(bubble1);
    bubbles.push_back(bubble2);
    bubbles.push_back(bubble3);
    bubbles.push_back(bubble4);
    bubbles.push_back(bubble5);
    
    for(int i = 0; i < 5; ++i) {
        bubbles[i].setPosX((rand()%300 + 100));
        bubbles[i].setPosY((rand()%300 + 100));
        double newVelocity = (rand()%26)/10.0;
        bubbles[i].setVelocityX(newVelocity);
        bubbles[i].setVelocityY(newVelocity);
        bubbles[i].setRadius(rand()%40 + 10);
        bubbles[i].setColor(rand()%256, rand()%256, rand()%256);
    }
    
    RenderWindow window(VideoMode(640,640, 32), "SFML Window");
    while(window.isOpen()) {
        window.clear( Color::Black);
        int vecSize = bubbles.size();
        if(vecSize == 0) {
            window.display();
        }
        for(int i = 0; i < vecSize; ++i) {
            window.draw(bubbles[i].getCircle());
            window.display();
        }
        
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            } else if (event.type == Event::KeyPressed) {
                if(Keyboard::isKeyPressed(Keyboard::Q)) {
                    window.close();
                } else if(Keyboard::isKeyPressed(Keyboard::D)) {
                    if(bubbles.size() > 0) {
                        bubbles.pop_back();
                        vecSize = bubbles.size();
                    }
                }
            } else if (event.type ==  Event::MouseButtonPressed) {
                if( Mouse::isButtonPressed( Mouse::Left )) {
                    Bubble bubble;
                    bubble.setPosX(event.mouseButton.x);
                    bubble.setPosY(event.mouseButton.y);
                    double newVelocity = ((rand()%26)/10.0);
                    bubble.setVelocityX(newVelocity);
                    bubble.setVelocityY(newVelocity);
                    bubble.setRadius(rand()%40 + 10);
                    bubble.setColor(rand()%256, rand()%256, rand()%256);
                    bubbles.push_back(bubble);  //add it to the vector of bubbles
                }
            }
        }
        for(int i = 0; i < vecSize; ++i) {
            bubbles[i].updatePosition();
            int xMax = 640 - (2*bubbles[i].getRadius());
            int yMax = 640 - (2*bubbles[i].getRadius());
            int xMin = 0;
            int yMin = 0;
            
            if(((xMax - bubbles[i].getPosX()) < 0) || (bubbles[i].getPosX() < xMin)) {   //right wall boundry, don't forget to add the diameter to it
                double newVelocityX = -1.0 * bubbles[i].getVelocityX();   //negates velocity
                bubbles[i].setVelocityX(newVelocityX);
            } else if (((yMax - bubbles[i].getPosY()) < 0) || (bubbles[i].getPosY() < yMin)) {   //bottom wall boundry, don't forget to add the diameter to it
                double newVelocityY = -1.0 * bubbles[i].getVelocityY();   //negates velocity
                bubbles[i].setVelocityY(newVelocityY);
            }
        }
    }
    
    return 0;
}