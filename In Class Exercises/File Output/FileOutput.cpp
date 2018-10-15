/* CSCI 261 Lab :
 *
 * Author: Carter Fowler
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <fstream>


using namespace std;

int main() {
    //declare / open output file
    ofstream overwriteFile;
    ofstream appendToFile("append.txt", ios::app);
    
    overwriteFile.open ("overwrite.txt");
    
    //check for error opening file
    if (!overwriteFile) {
        cerr << "Could not open overwrite.txt" << endl;
        return -1;
    }
    if (appendToFile.fail) {
        cerr<< "Could not open append.txt" << endl;
        return -1;
    }
    
    //write to file
    overwriteFile << "This is an overwrite test.";
    appendToFile << "This is an append test.";
    
    //close the file
    
    return 0;
}