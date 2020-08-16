#include "Employee.h"

Employee::Employee(const string& fName, const string& lName, unsigned int id)
    : fName_(fName), lName_(lName), id_(id)
{
}

ostream& operator<<(ostream& os, const Employee& e)
{
    os << e.fName_<< " " << e.lName_ << " " << e.id_ << endl;
    return os;
}
