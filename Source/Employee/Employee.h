#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <ostream>
using namespace std;

class Employee
{
public:
    Employee(const string& fName, const string& lName, unsigned int id);
    
    string fName_;
    string lName_;
    unsigned int id_;

    friend ostream& operator<<(ostream& os, const Employee& e);
};

#endif /* EMPLOYEE_H */
