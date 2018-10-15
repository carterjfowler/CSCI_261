/* CSCI 261 Lab 1C: GEOMETRIC CALCULATIONS
 *
 * Author: Carter Fowler (_INSERT_YOUR_NAME_HERE_)
 *
 * Add more complete description here...
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <iomanip>

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** MODIFY OR INSERT CODE BELOW HERE ********/

    int length = 17;                    //length variable for prism
    int width = 17;                     //width variable for prism
    int height = 2;                     //height variable for prism
    int volume;                         //volume variable for prism
    double circleArea;                  //area variable for circle
    double circleRadius = 0;            //radius variable for circle
    const double CIRCLE_PI = 3.14159;   //pi constant variable for circle
    
    cout << "Enter the length: ";    //textual prompt for length variable
    cin >> length;                   //rewrites length variable to user's inputed value
    cout << "Enter the width: ";     //textual prompt for width variable
    cin >> width;                    //rewrites width variable to user's inputed value
    cout << "Enter the height: ";    //textual prompt for height variable
    cin >> height;                   //rewrites height variable to user's inputed value
    

    // Volume of a box is length times width times height.
    volume = length * width * height;  //equates the volume of the prism and writes it to the respective variable
    
    cout << "The volume of your box is " << volume << endl;    //Prints the calculated volume after the written phrase to the screen
    
    cout << "Enter the radius of your circle: ";  //textual prompt for radius variable
    cin >> circleRadius;                          //rewrites radius variable to user's inputed value

    circleArea = CIRCLE_PI * (circleRadius * circleRadius);  //equates the area of the circle and writes it to the respective variable
    //you could also do pow(circelRadius, 2) for r^2 instead or r * r
    
    cout << "The area of a circle with a radius of " << circleRadius << " is " << circleArea << endl;   //Prints the entered radius and calculated area within the phrase to the screen
    /******** MODIFY OR INSERT CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}
