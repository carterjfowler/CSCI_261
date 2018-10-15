/* CSCI 261 Create Project: Breakout
 *
 * Authors: Carter Fowler and Morgan Cox
 * User Names: carterjfowler and mdcox
 */
 
#include <iostream>
#include <sstream>
#include "brick.h"
#include "paddle.h"
#include "ball.h"
#include <SFML/Graphics.hpp>
#include <vector>

using namespace sf;
using namespace std;

int main(){
    Paddle paddle; //creates a paddle
    vector <Brick> row1; //vectors for each row of bricks
    vector <Brick> row2; //creates scond row of bric
    Ball ball; //crates a ball of ball class
    bool spacebarHit = false; //creates a variable to see if the game should begin
    Event event; //creates event variable
    for(int i = 0; i < 10; ++i) { //use a for loop to fill each vector and the subsiquent data members
        Brick brick1(i*64, 60);
        Brick brick2(i*64, 40);
        if(i%2 == 1) {
            brick1.setColor(255,0,0);
        } else {
            brick2.setColor(255,0,0);
        }
        row1.push_back(brick1);
        row2.push_back(brick2);
    }
    
    
    RenderWindow window(VideoMode(640,640, 32), "SFML Window"); //creates a window in sfml
    
    while(window.isOpen() && ball.getBallLives() != 0) { //exits the game if lives equal 0 or if the window is not opened
        //drawing everything on the window
        window.clear( Color::Black );
        window.draw(paddle.getPaddle()); 
        window.draw(ball.getBall());
        
        for(int i = 0; i < 10; ++i) {     //use a for loop to fill each vector and the subsiquent data members
            window.draw(row1[i].getBrick());
            window.draw(row2[i].getBrick());
        }
        
        //Drawing Text stuff
        Font myFont;
        if( !myFont.loadFromFile( "data/arial.ttf" ) )
            return -1;
        Text start;
        start.setFont(myFont);
        start.setString("Press Spacebar to begin");
        start.setPosition(180, 320);
        start.setColor(Color::White);
        if(spacebarHit == false) {
            window.draw(start);
        }
        
        //printing out lives left
        int x = ball.getBallLives();
        std::ostringstream ss;
        ss << "Lives left: " << x;
        
        Text lives;
        lives.setFont(myFont);
        lives.setPosition(500, 620);
        lives.setCharacterSize(15);
        lives.setColor(Color::White);
        lives.setString(ss.str());
        window.draw(lives);
        
        window.display();
        
        //checking for keybaord presses
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            } else if (event.type == Event::KeyPressed) {
                if(Keyboard::isKeyPressed(Keyboard::Q)) {
                    window.close();
                }
                
                switch( event.key.code ) {
                    case Keyboard::Left:
                        paddle.setVelocity(-25);
                        paddle.leftWallCollision();
                        break;
                    case Keyboard::Right:
                        paddle.setVelocity(25);
                        paddle.rightWallCollision();
                        break;
                    case Keyboard::Space:
                        spacebarHit = true;
                    default:
                        ;
                }
                paddle.updatePosition();
            }
        }
        if(spacebarHit) { //if space bar is hit then the game will ball will move
            ball.updatePosition(paddle, row1, row2);
        }
        
        //check if ball goes off screen
        if(ball.getPositionY() > 560) {
            spacebarHit = false;
            ball.decreaseLives();
            ball.setPositionX(300);
            ball.setPositionY(460);
            paddle.setPositionX(280);
            ball.setVelocityY(-1);
        }
        
        //checking if user won
        int row1Size = row1.size();
        int row2Size = row2.size();
        
        if(row1Size == 0 && row2Size == 0) {
            spacebarHit = false;
            ball.setPositionX(300);
            ball.setPositionY(460);
            paddle.setPositionX(260);
            Text win;
            win.setFont(myFont);
            win.setString("Congratulations, you won!!");
            win.setPosition(200, 320);
            win.setColor(Color::Blue);
            window.draw(win);
        }
    }
    
    return 0;
}