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
    ifstream input ("secretMessage.txt");
    ofstream output ("decipheredMessage.txt");
    
    if (input.fail()) {
        cerr << "Error opening the input file" << endl;
        exit (1);
    }
    if (output.fail()) {
        cerr << "Error opening the output file" << endl;
        exit (1);
    }
    
    char c;
    while ( !input.eof() ) {
        input.get(c);
        if (c == '\n') {
            output << "\n";
        } else if (c == '~') {
            output << " ";
        } else {
            output << char(c + 1);
        }
    }
    
    input.close();
    output.close();
    
    return 0;
}