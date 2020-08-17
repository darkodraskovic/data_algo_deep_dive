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
    
    list.Print();

    std::cout << "size: " <<list.GetSize() << "\n";
    std::cout << "empty: " << list.IsEmpty() << "\n";

    Employee* billEnd = new Employee("Bill", "End", 78);
    list.AddToEnd(billEnd);
    list.Print();
    std::cout << "size: " <<list.GetSize() << "\n";
    std::cout << "empty: " << list.IsEmpty() << "\n";
    
    list.RemoveFromFront();
    std::cout << "size: " <<list.GetSize() << "\n";
    std::cout << "empty: " << list.IsEmpty() << "\n";
    list.RemoveFromFront();
    list.Print();    
    std::cout << "size: " <<list.GetSize() << "\n";
    std::cout << "empty: " << list.IsEmpty() << "\n";

    list.RemoveFromEnd();
    list.Print();    
    std::cout << "size: " <<list.GetSize() << "\n";
    std::cout << "empty: " << list.IsEmpty() << "\n";


    // list.PrintList();

    return 0;
}
