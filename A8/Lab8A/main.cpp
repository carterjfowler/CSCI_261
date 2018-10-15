/* CSCI 261 Lab 8A: Date Class
 *
 * Author: Carter Fowler
 */

#include <iostream>
#include <string>

using namespace std;

#include "date.h"

int main() {
   Date defaultDate;
   Date testDate(8, 1, 1876);
   
   cout << "The default constructor yields " << defaultDate.getDate() << endl;
   cout << "And that day is the day that " << defaultDate.getImportance() << endl;
   
   cout << "\nThe parameterized constructor yields " << testDate.getDate() << endl;
   cout << "And that day is the day that " << testDate.getImportance() << endl;
   
   int month;
   int day;
   int year;
   cout << "\nPlease enter a new month: ";
   cin >> month;
   cout << "Please enter a new date: ";
   cin >> day;
   cout << "Please enter a new year: ";
   cin >> year;
   testDate.setDate(month, day, year);
   
   cout << "Your new date is: " << testDate.getDate() << endl;
   if (testDate.isImportant(testDate.getDate())) {
      cout << "And that day is the day that " << testDate.getImportance() << endl;
   }
   if (testDate.earlierDate(defaultDate)) {
      cout << "Your inputted date is earlier than the default date." << endl;
   } else {
      cout << "Your inputted date is later than, or the same as, the default date." << endl;
   }
   
   return 0;
}