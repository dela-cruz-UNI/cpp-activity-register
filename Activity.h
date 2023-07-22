
#ifndef LAB_PROGRAMMAZIONE_ACTIVITY_H
#define LAB_PROGRAMMAZIONE_ACTIVITY_H

#include <string>
#include "Time.h"

using namespace std;

struct Time {
    int hour;
    int minute;

}

//class Activity
class Activity {
    public:
        Activity(string title, string description/*, Time &start, Time &end*/):title(title), description(description)/*, start(start), end(end)*/{};

        bool operator==(const Activity& right) const;
        string toString();

        //get and set method
        string getDescription() const;
        void setDescription(const string& newDesc);
        /*
        Time getStart() const;
        void setStart(const Time &newStart);
        Time getEnd() const;
        void setEnd(const Time &newEnd);
        */
    private:
        string title;
        string description;
        struct Time start;
        struct Time end;

};

#endif //LAB_PROGRAMMAZIONE_ACTIVITY_H
