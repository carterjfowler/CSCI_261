#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    string testString;
    /*cout << "Enter a string: ";
    cin >> testString;
    cout << endl << testString << endl;*/
    
    //cout << endl << "Enter a string: ";
    //getline(cin, testString);
    //getline(cin, testString);
    
    
    //testString = "Luke Skywalker";
    
    
    //cout << endl << testString << endl;
    //cout << "The length is: " << testString.length(); 
    
    /*cout << testString.substr(0, 4) << endl;
    cout << testString.substr(5, 9) << endl;
    cout << testString.substr((testString.length() - 9), 9);*/
    
    testString = "123456789";
    testString.replace(3,3, "xxx");
    cout << testString << endl;
    
    
    
    
    return 0;
}