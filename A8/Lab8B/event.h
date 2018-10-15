#pragma once

#include <string>
#include "date.h"

using namespace std;

class Event {
    public:
       Event();
       Event(Date &date, string title, string location);
       void setDate(Date &date);
       void setTitle(string title);
       void setLocation(string location);
       string printInfo();
    private:
       Date _date;
       string _title;
       string _location;
};