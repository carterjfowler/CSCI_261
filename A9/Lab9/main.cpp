/* CSCI 261 Lab9: Circle Animation
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
    Bubble bubble;
    
    RenderWindow window(VideoMode(640,640, 32), "SFML Window");
    while(window.isOpen()) {
        window.clear( Color::Black);
        
        window.draw(bubble.getCircle());
        
        window.display();
        
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            } else if (event.type == Event::KeyPressed) {
                if(Keyboard::isKeyPressed(Keyboard::Q)) {
                    window.close();
                }
            }
        }
        bubble.updatePosition();
        if((bubble.getPosX() + 2*bubble.getRadius()) > 640) {   //right wall boundry, don't forget to add the diameter to it
            int newVelocity = -1 * bubble.getVelocityX();   //negates velocity
            bubble.setVelocityX(newVelocity);
        } else if ((bubble.getPosY() + 2*bubble.getRadius()) > 640) {   //bottom wall boundry, don't forget to add the diameter to it
            int newVelocity = -1 * bubble.getVelocityY();
            bubble.setVelocityY(newVelocity);
        } else if (bubble.getPosX() < 0) {   //left wall boundry
            int newVelocity = -1 * bubble.getVelocityX();
            bubble.setVelocityX(newVelocity);
        } else if (bubble.getPosY() < 0) {   //top wall boundry
            int newVelocity = -1 * bubble.getVelocityY();
            bubble.setVelocityY(newVelocity);
        }
    }
    
    return 0;
}