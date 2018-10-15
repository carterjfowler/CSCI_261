#include "event.h"
#include "date.h"
#include <iostream>
#include <string>

using namespace std;

Event::Event() {
    Date _date;
    _title = "Bjarne Stroustrup's birthday!";
    _location = "Aarhus, Denmark";
}
Event::Event(Date &date, string title, string location) {
    _date = date;
    _title = title;
    _location = location;
}
void Event::setDate(Date &date) {
    _date = date;
}
void Event::setTitle(string title) {
    _title = title;
}
void Event::setLocation(string location) {
    _location = location;
}
string Event::printInfo() {
    return _date.getDate() + ": " + _title + " (" + _location + ").";
}