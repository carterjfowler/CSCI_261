/* CSCI 261 Lab 8B: Event Class
 *
 * Author: Carter Fowler
 */

#include <iostream>
#include <string>

using namespace std;

#include "event.h"
#include "date.h"

int main() {
    Date defaultDate;
    Date testDate(8, 1, 1876);
    Event defaultEvent;
    Event testEvent(testDate, "Colorado became a state!", "USA");
    
    cout << "Default constructor yields: " << defaultEvent.printInfo() << endl;
    cout << "Parameterized constructor yields: " << testEvent.printInfo() << endl;
    
    int month;
    int date;
    int year;
    cout << "Enter a new month: ";
    cin >> month;
    cout << "Enter a new date: ";
    cin >> date;
    cout << "Enter a new year: ";
    cin >> year;
    testDate.setDate(month, date, year);
    testEvent.setDate(testDate);
    string title;
    string location;
    cout << "Enter a new title: ";
    cin.ignore(256, '\n');
    cin.clear();
    getline(cin, title);
    testEvent.setTitle(title);
    cout << "Enter a new location: ";
    getline(cin, location);
    testEvent.setLocation(location);
    
    cout << "Your new event is - " << testEvent.printInfo() << endl;
    
    return 0;
}