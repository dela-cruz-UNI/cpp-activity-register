
#ifndef LAB_PROGRAMMAZIONE_TIME_H
#define LAB_PROGRAMMAZIONE_TIME_H

#include <string>

class Time {
public:
    Time(int day, int month, int year, int hour, int minute):day(day), month(month), year(year), hour(hour), minute(minute){};

    bool operator==(const Time& right) const;
    bool operator!=(const Time& right) const;
    bool operator<(const Time& right) const;
    std::string toString();

    //get and set method
    int getDay ();
    void setDay(int newDay);

    int getMonth();
    void setMonth(int newMonth);

    int getYear();
    void setYear(int newYear);

    int getHour();
    void setHour(int newHour);

    int getMinute();
    void setMinute(int newMinute);


private:
    int day;
    int month;
    int year;
    int hour;
    int minute;

};


#endif //LAB_PROGRAMMAZIONE_TIME_H
