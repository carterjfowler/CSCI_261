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

Practice with Structs
*/

#include <iostream>
using namespace std;

struct HeightFeetInches {
    int feet;
    int inches;
};

//use pass by reference so that copies aren't made!
//make them const because we are not changing them
HeightFeetInches tallestOfTwo (const HeightFeetInches heightA, const HeightFeetInches heightB ) {
    HeightFeetInches tallest = heightA;
    if ( heightB.feet*12 + heightB.inches > heightA.feet*12 + heightA.inches ) {
        tallest = heightB;
    }
    return tallest;
}

/*HeightFeetInches tallestOfMany ( HeightFeetInches heights[], int numHeights ) {
    HeightFeetInches tallest = heights[0];
    for ( int i = 0; i < numHeights; ++i ) {
        if ( heights[i].feet * 12 + heights[i].inches > tallest.feet * 12 + tallest.inches ) {
            tallest = heights[i];
        }
    }
    return tallest;
}*/

void printHeight ( HeightFeetInches heightToPrint ) {
    cout << "height: " << heightToPrint.feet << "\' " 
         << heightToPrint.inches << "\" " << endl; 
}

int main() {
    HeightFeetInches h1, h2, tallest;
    h1.feet = 6;
    h1.inches = 4;
    h2.feet = 5;
    h2.inches = 11;

//    printHeight( h1 );
//    printHeight( h2 );

    tallest = tallestOfTwo( h1, h2 );
    cout << "Tallest: ";
    printHeight( tallest );
    cout << endl;
    
    // Example with array
/*    HeightFeetInches threeHeights[3];
    threeHeights[0].feet = 5;
    threeHeights[0].inches = 3;
    threeHeights[1].feet = 4;
    threeHeights[1].inches = 10;
    threeHeights[2].feet = 6;
    threeHeights[2].inches = 2;
*/
    for ( int i = 0; i < 3; ++i ) {
        printHeight( threeHeights[i] );
    }
    tallest = tallestOfMany( threeHeights, 3 );
    cout << "Tallest of three: ";
    printHeight( tallest );
    
    return 0;
}