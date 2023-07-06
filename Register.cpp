
#include "Register.h"
#include "Activity.h"
#include "Time.h"
#include <iostream>
#include <sstream>


void Register::addActivity(const Activity &activity) {
    activityRegister.push_back(activity);
}

//void Register::

void Register::eraseActivity(const Activity &activity) {
    for (int i = 0; i < activityRegister.size(); i++) {
        if (activityRegister[i] == activity) {
            activityRegister.erase(activityRegister.begin() + i);
        }
    }
}

string Register::toString() {
    std::stringstream s;
    for (Activity a : activityRegister) {
        s << a.getDescription() << endl
          << "START EVENT: " << a.getStart().toString() << endl
          << "END EVENT: " << a.getEnd().toString() << endl << endl;
    }
    return s.str();
}

