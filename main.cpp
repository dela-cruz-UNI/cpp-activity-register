#include <iostream>
#include "Activity.h"
#include "Register.h"
#include "Time.h"

int main() {
    Time t1(29, 6, 2020, 12, 30);
    Time t2(29, 6, 2020, 13, 30);

    Activity a1("Pranzo", t1, t2);
    Activity a2("Cena", t1, t2);

    Register r;
    r.addActivity(a1);
    r.addActivity(a2);

    std::cout << r.toString();
}
