
#ifndef LAB_PROGRAMMAZIONE_ACTIVITY_H
#define LAB_PROGRAMMAZIONE_ACTIVITY_H

#include <string>
#include "Time.h"

using namespace std;

//class Activity
class Activity {
    public:

        Activity(string description, Time &start, Time &end):description(description), start(start), end(end){};

        bool operator==(const Activity& right) const;

        //get and set method
        string getDescription() const;
        void setDescription(const string& newDesc);
        Time getStart() const;
        void setStart(const Time &newStart);
        Time getEnd() const;
        void setEnd(const Time &newEnd);

    private:
        string description;
        Time start; //when the activity start
        Time end; //when the activity end

};

#endif //LAB_PROGRAMMAZIONE_ACTIVITY_H
