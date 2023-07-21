
#include "Register.h"
#include "Activity.h"
#include "Time.h"
#include <iostream>
#include <sstream>

/*
string Register::toString() {
    std::stringstream s;
    for (Activity a : activityRegister) {
        s << a.getDescription() << endl
          << "START EVENT: " << a.getStart().toString() << endl
          << "END EVENT: " << a.getEnd().toString() << endl << endl;
    }
    return s.str();
}
*/

void Register::attachActivity(const std::string key,Activity &new_activity){
    this->days[key].addActivity(new_activity);
}

void Register::removeActivity(string day, Activity &deleted) {
    this->days[day].removeActivity(deleted);
}
