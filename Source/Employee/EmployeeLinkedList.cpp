#include "EmployeeLinkedList.h"
#include "Employee.h"
#include "EmployeeNode.h"

EmployeeLinkedList::EmployeeLinkedList() {}

void EmployeeLinkedList::AddToFront(Employee *employee)
{
    EmployeeNode* node = new EmployeeNode(employee);
    node->next_ = head_;
    head_ = node;
    size_++;
}

EmployeeNode* EmployeeLinkedList::RemoveFromFront()
{
    if (IsEmpty()) return nullptr;
    EmployeeNode* node = head_;
    head_ = head_->next_;
    size_--;
    node->next_ = nullptr;
    return node;
}

unsigned int EmployeeLinkedList::GetSize()
{
    return size_;
}

void EmployeeLinkedList::PrintList()
{
    EmployeeNode* current = head_;
    std::cout << "HEAD -> ";
    while (current) {
        std::cout << *current->employee_;
        std::cout << " -> ";
        current = current->next_;
    }
    std::cout << "nullptr" << "\n";
}

bool EmployeeLinkedList::IsEmpty()
{
    return !head_;
}

EmployeeLinkedList::~EmployeeLinkedList()
{
    EmployeeNode* current = head_;
    while (current) {
        EmployeeNode* node = current;
        current = current->next_;
        std::cout << "delete " << *node->employee_;
        delete node->employee_;
        delete node;
    }
}    
