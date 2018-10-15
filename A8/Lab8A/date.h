/* CSCI 261 Lab 8A: Date Class
 *
 * Author: Carter Fowler
 */
 
#pragma once

#include <string>

using namespace std;

class Date {
   public:
      Date();
      Date(int month, int day, int year);
      void setDate(int month, int day, int year);
      string getDate();
      bool isImportant(string date);
      string getImportance();
      bool earlierDate(Date &that);
      int getYear();
      int getMonth();
      int getDay();
   private:
      int _month;
      int _date;
      int _year;
      string _importance;
      bool validate(int month, int day, int year);
      void importantDate(int month, int day, int year);
};