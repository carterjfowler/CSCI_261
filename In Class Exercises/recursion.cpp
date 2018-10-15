/*
Copyright 2017 Julie Krause and CSM CSCI261 Section A  

Permission is hereby granted, free of charge, to any person obtaining a copy of 
this software and associated documentation files (the "Software"), to deal in 
the Software without restriction, including without limitation the rights to 
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies 
of the Software, and to permit persons to whom the Software is furnished to do 
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all 
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
SOFTWARE.

----------------------
CSCI 261 Class Example

Recursion, Debugging / Fixing Issues, Light Review 
*/


#include <iostream>
using namespace std;

const int LOWEST_FACTOR = 2;
const int SMALLEST_PRIME = 2;

// FIXME! What's wrong with this picture?
bool isPrime( int N, int factor ) {
    if( factor > N / 2 ) {        // stopping condition #1
        cout << "We've checked all values between 2 and the mid value and none"
             << " are factors. (nothing above the mid value can be a factor)."
             << endl << "  - PRIME!" << endl;

        return true;
    } 
    else if( N % factor == 0 ) {  // stopping condition #2
        cout << N << " is divisible by " << factor << ". NOT PRIME." << endl; 
        return false;
    }
    else {
      // Check the next factor to see if it divides N
	  return isPrime( N, factor + 1 );
    }
}

int main() {
    
    int userInput = 2;

    while ( userInput >= SMALLEST_PRIME ) {
        cout << "Enter a number greater than or equal to"
             << " 2 to see if it is prime:   ";
        
        cin >> userInput;
        if ( userInput < SMALLEST_PRIME ) {
            cout << "Your input cannot be evaluated for being prime.";
            break; // recall - this breaks out of the while loop
        }

        // start the recursion with isPrime using the lowest possible factor
        if ( isPrime( userInput, LOWEST_FACTOR ) ) { 
            cout << userInput << " is prime." << endl << endl;
        } else {
            cout << userInput << " is NOT prime." << endl << endl;
        }
    }
    
    return 0;
}