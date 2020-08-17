#ifndef EMPLOYEE_LINKED_LIST_H
#define EMPLOYEE_LINKED_LIST_H

#include "Employee.h"
#include "EmployeeNode.h"

class EmployeeLinkedList
{
public:
    EmployeeLinkedList();
    ~EmployeeLinkedList();
    void AddToFront(Employee* employee);
    void AddToEnd(Employee* employee);
    EmployeeNode* RemoveFromFront();
    EmployeeNode* RemoveFromEnd();
    void Print();
    unsigned int GetSize();
    bool IsEmpty();

private:
    EmployeeNode* head_{nullptr};
    EmployeeNode* tail_{nullptr};
    unsigned int size_{0};
};

#endif /* EMPLOYEE_LINKED_LIST_H */
