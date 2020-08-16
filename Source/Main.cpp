#include<iostream>

#include "Employee/Employee.h"
#include "Employee/EmployeeLinkedList.h"

int main(int argc, char *argv[]){
    Employee* janeJones = new Employee("Jane", "Jones", 123);
    Employee* johnDoe = new Employee("John", "Doe", 4567);
    Employee* marySmith = new Employee("Mary", "Smith", 22);
    Employee* mikeWilson = new Employee("Mike", "Wilson", 3245);
    
    EmployeeLinkedList list;

    std::cout << list.IsEmpty() << "\n";

    list.AddToFront(janeJones);
    list.AddToFront(johnDoe);
    list.AddToFront(marySmith);
    list.AddToFront(mikeWilson);
    
    list.PrintList();
    // std::cout << list.GetSize() << "\n";
    // std::cout << list.IsEmpty() << "\n";

    // list.RemoveFromFront();
    // std::cout << list.GetSize() << "\n";
    // list.RemoveFromFront();
    // std::cout << list.GetSize() << "\n";

    // list.PrintList();

    return 0;
}
