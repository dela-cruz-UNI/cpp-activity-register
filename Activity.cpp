
#include "Activity.h"
#include <string>
#include <sstream>
using namespace std;

bool Activity::operator==(const Activity& right) const{
    return (this->description == right.description && this->start == right.start && this->end == right.end);
}

string Activity::toString(){
    stringstream s;
    s << this->description << endl
      << "START EVENT: " << this->start.toString() << endl
      << "END EVENT: " << this->end.toString() << endl << endl;
    return s.str();
}


//get and set method

Time Activity::getStart() const { return this->start; }
Time Activity::getEnd() const { return this->end; }

void Activity::setStart (const Time &newStart) { this->start = newStart; }
void Activity::setEnd(const Time &newEnd) { this->end = newEnd; }

string Activity::getDescription() const{ return this->description; }
void Activity::setDescription(const string& newDesc){ this->description = newDesc; }


