//
// Created by dela on 20/06/23.
//

#ifndef LAB_PROGRAMMAZIONE_REGISTER_H
#define LAB_PROGRAMMAZIONE_REGISTER_H

#include "Activity.h"
#include "Day.h"
#include <iostream>
#include <map>
#include <string>

class Register {
public:
    Register(){};
    void addDay(const std::string day);
    void attachActivity(const std::string day,Activity &new_activity);
    void removeActivity(const std::string day, Activity &deleted);
    int getSize(){return days.size();};

public:
    std::map<std::string,Day> days;
};

#endif //LAB_PROGRAMMAZIONE_REGISTER_H
