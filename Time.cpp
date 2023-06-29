
#include "Time.h"
#include <iostream>
#include <sstream>
#include <string>

int Time::getDay() { return this->day; }
void Time::setDay(int newDay) { this->day = newDay; }

int Time::getMonth() { return this->month; }
void Time::setMonth(int newMonth) { this->month = newMonth; }

int Time::getYear() { return this->year; }
void Time::setYear(int newYear) { this->year = newYear; }

int Time::getHour() { return this->hour; }
void Time::setHour(int newHour) { this->hour = newHour; }

int Time::getMinute() { return this->minute; }
void Time::setMinute(int newMinute) { this->minute = newMinute; }

bool Time::operator==(const Time& right) const{
    return (this->day == right.day && this->month == right.month && this->year == right.year && this->hour == right.hour && this->minute == right.minute);
}

bool Time::operator!=(const Time& right) const{
    return !operator==(right);
}

bool Time::operator<(const Time& right) const{
    if(this->year > right.year){
        return false;
    }else if(year == right.year && month > right.month){
        return false;
    }else if(year == right.year && month == right.month && day > right.day) {
        return false;
    }else if(year == right.year && month == right.month && day == right.day && hour > right.hour) {
        return false;
    }else if(year == right.year && month == right.month && day == right.day && hour == right.hour && minute > right.minute) {
        return false;
    }else if(year == right.year && month == right.month && day == right.day && hour == right.hour && minute == right.minute) {
        return false;
    }
    return true;
}

std::string Time::toString(){
    std::stringstream s;
    s << this->day << "/" << this->month << "/" << this->year << " " << this->hour << ":" << this->minute;
    return s.str();
}