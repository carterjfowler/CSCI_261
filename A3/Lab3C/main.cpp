/* CSCI 261 Lab 3C: Multiplication Table
 *
 * Author: Carter Fowler
 */


#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    int userCol;
    int userRow;
    
    cout << "Please enter a number between 2 and 50: ";
    cin >> userCol;
    cout << "Please enter a number between 2 and 50: ";
    cin >> userRow;
    while ((userCol < 2) || (userCol > 50)) {
        cout << "Invalid input. Please enter a number between 2 and 50: ";
        cin >> userCol;
    } 
    while ((userRow < 2) || (userRow > 50)) {
        cout << "Invalid input. Please enter a number between 2 and 50: ";
        cin >> userRow;
    }
    
    int i = 1;                                              //incrementing column variable
    int j = 1;                                              //incrementing row variable
    cout << " ";                                            //for spacing
    for (i = 1; i <= userCol; ++i) {                        //print column header
        cout << setw(5) << right << i;
    }
    cout << endl;
    while (j <= userRow) {
        cout << j;                                          //print row header
        
        for (i = 1; i <= userCol; ++i) {                //counting variable and loop
            cout << setw(5) << right << (j * i);      //print calculated variable
        }
        cout << endl;
        ++j;
    }
    
    
    
    return 0;
}