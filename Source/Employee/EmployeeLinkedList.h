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
    EmployeeNode* RemoveFromFront();
    void PrintList();
    unsigned int GetSize();
    bool IsEmpty();

private:
    EmployeeNode* head_{nullptr};
    unsigned int size_;
};

#endif /* EMPLOYEE_LINKED_LIST_H */
