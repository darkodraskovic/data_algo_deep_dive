#include "EmployeeLinkedList.h"
#include "Employee.h"
#include "EmployeeNode.h"

EmployeeLinkedList::EmployeeLinkedList() {}

void EmployeeLinkedList::AddToFront(Employee *employee)
{
    EmployeeNode* node = new EmployeeNode(employee);
    if (head_ == nullptr) {
        tail_ = node;
    } else {
        head_->previous_ = node;
        node->next_ = head_;
    }
    head_ = node;
    size_++;
}

EmployeeNode* EmployeeLinkedList::RemoveFromFront()
{
    if (IsEmpty()) return nullptr;
    
    EmployeeNode *removedeNode = head_;

    if (head_->next_ == nullptr) {
        tail_ = nullptr;
    } else {
        head_->next_->previous_ = nullptr;
    }

    head_ = head_->next_;
    size_--;
    removedeNode->next_ = nullptr;
    return removedeNode;
}

EmployeeNode* EmployeeLinkedList::RemoveFromEnd()
{
    if (IsEmpty()) return nullptr;
    
    EmployeeNode *removedeNode = tail_;
    if (tail_->previous_ == nullptr) {
        head_ = nullptr;
    } else {
        tail_->previous_->next_ = nullptr;
    }

    tail_ = tail_->previous_;
    size_--;
    removedeNode->previous_ = nullptr;
    return removedeNode; 
}

void EmployeeLinkedList::AddToEnd(Employee *employee)
{
    EmployeeNode* node = new EmployeeNode(employee);
    if (tail_ == nullptr) {
        head_ = node;
    } else {
        tail_->next_ = node;
        node->previous_ = tail_;
    }
    tail_ = node;
    size_++;
}

unsigned int EmployeeLinkedList::GetSize()
{
    return size_;
}

void EmployeeLinkedList::Print()
{
    EmployeeNode* current = head_;
    std::cout << "HEAD -> ";
    while (current) {
        std::cout << *current->employee_;
        std::cout << " <=> ";
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
    std::cout << "CONSTRUCTOR: " << std::endl;
    EmployeeNode* current = head_;
    while (current) {
        EmployeeNode* node = current;
        current = current->next_;
        std::cout << "delete " << *node->employee_;
        delete node->employee_;
        delete node;
    }
}    
