/* CSCI 261 Lab8A: Date Class
 *
 * Author: Carter Fowler
 */

#include "date.h"
#include <iostream>
#include <string>

using namespace std;

Date::Date() {
   _month = 12;
   _date = 30;
   _year = 1950;
   importantDate(_month, _date, _year);
}
Date::Date(int month, int day, int year) {
   _month = month;
   _date = day;
   _year = year;
   validate(_month, _date, _year);
   importantDate(_month, _date, _year);
}
void Date::setDate(int month, int day, int year) {
   _month = month;
   _date = day;
   _year = year;
   validate(_month, _date, _year);
   importantDate(_month, _date, _year);
}
string Date::getDate() {
   return to_string(_month) + '/' + to_string(_date) + '/' + to_string(_year);
}
bool Date::isImportant(string date) {
   if (date == "12/30/1950" || date == "8/1/1876" || date == "5/8/1999") {
      return true;
   } else {
      return false;
   }
}
string Date::getImportance() {
   return _importance;
}
bool Date::validate(int month, int day, int year) {
   if ((month < 13 && month > 0) && (day < 32 && day > 0) && (year > 0)) {
      return true;
   } else {
      cout << "Sorry, the input was invalid." << endl;
      _month = 12;
      _date = 30;
      _year = 1950;
      return false;
   }
}
void Date::importantDate(int month, int day, int year) {
   if (month == 8 && day == 1 && year == 1876) {
      _importance = "Colorado officially became a state.";
   } else if (month == 12 && day == 30 && year == 1950) {
      _importance = "Bjarne Stroustrup, inventor of the C++ programming language, was born.";
   } else if (month == 5 && day == 8 && year == 1999) {
      _importance = "I was born!";
   }
}