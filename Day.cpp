//
// Created by dela on 20/07/23.
//

#include "Day.h"
#include <sstream>
#include <algorithm>

using namespace std;

void Day::addActivity(Activity &new_activity) {
    activities.push_back(new_activity);
}
void Day::removeActivity(Activity &deleted) {
    auto it = find(activities.begin(), activities.end(), deleted);
    activities.erase(it);
}

string Day::toString() {
    stringstream s;
    for (Activity a : activities) { s << a.toString(); }
    return s.str();
}
