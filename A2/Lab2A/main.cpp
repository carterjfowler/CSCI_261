/* CSCI 261 Lab 2A: Pair Programming
 *
 * Author: Carter Fowler and David Florness
 */


#include <iostream> 
#include <cmath>

using namespace std;

int main() {
    // Distance variables
    double pointX = 0;
    double pointY = 0;
    double distance;

    // Volume variables
    const double PI = 3.14159;
    double radius = 0;
    double volume;
    
    cout << "Enter an x coordinate: ";     //User prompt for x coordinate
    cin >> pointX;                         //Assign user input to "pointX"
    
    cout << "Enter a y coordinate: ";      //User prompt for y coordinate
    cin >> pointY;                         //Assign user input to "pointY"
    
    distance = sqrt(pow(pointX, 2.0) + pow(pointY, 2.0));             //Calculate the distance between the origin and the point
    cout << "Distance from origin to point: " << distance << endl;    //Print result to screen
    
    cout << "Enter the radius: ";
    cin >> radius;
    
    volume = (4.0/3.0) * PI * (pow(radius, 3.0));
    cout << "The volume is: " << volume << endl;

    return 0; 
}