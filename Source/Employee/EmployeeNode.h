#ifndef EMPLOYEE_NODE_H
#define EMPLOYEE_NODE_H

#include "Employee.h"

class EmployeeLinkedList;

class EmployeeNode
{
public:
    EmployeeNode(Employee* employee);

private:    
    Employee* employee_{nullptr};
    EmployeeNode* next_{nullptr};

    friend class EmployeeLinkedList;
};

#endif /* EMPLOYEENODE_H */
