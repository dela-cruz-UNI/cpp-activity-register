//
// Created by dela on 20/06/23.
//

#ifndef LAB_PROGRAMMAZIONE_REGISTER_H
#define LAB_PROGRAMMAZIONE_REGISTER_H

#include <iostream>
#include <vector>
#include "Activity.h"


class Register {
public:
    void addActivity(const Activity &activity);
    string toString();
    void eraseActivity(const Activity &activity);

public:
    vector<Activity> activityRegister;
};

#endif //LAB_PROGRAMMAZIONE_REGISTER_H
