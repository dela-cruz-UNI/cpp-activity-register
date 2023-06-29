
#include "Register.h"
#include "Activity.h"
#include <vector>
#include <iostream>
#include <sstream>


void Register::addActivity(const Activity &activity) {
    activityRegister.push_back(activity);
}

void Register::eraseActivity(const Activity &activity) {
    for (int i = 0; i < activityRegister.size(); i++) {
        if (activityRegister[i] == activity) {
            activityRegister.erase(activityRegister.begin() + i);
        }
    }
}

string Register::toStringActivityRegister() {
    std::stringstream s;
    for (Activity a : activityRegister) {
        s << a.getDescription() << endl
          << "Start event: " << a.getStart().toString() << endl
          << "End Event: " << a.getEnd().toString() << endl << endl;
    }

    return s.str();
}

