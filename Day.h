//
// Created by dela on 20/07/23.
//

#ifndef LAB_PROGRAMMAZIONE_DAY_H
#define LAB_PROGRAMMAZIONE_DAY_H

#include "Activity.h"
#include "Time.h"
#include <vector>
using namespace std;

class Day {
public:
    Day(){} //default constructor
    void setDay(string new_day){day = new_day;};
    void addActivity(Activity &new_activity);
    void removeActivity(Activity &deleted);
    std::string toString();

private:
    string day;
    vector<Activity> activities;
};


#endif //LAB_PROGRAMMAZIONE_DAY_H
