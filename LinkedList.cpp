#include <iostream>
#include "LinkedList.h"


int main()
{
    Node* head = nullptr;

    addToList(&head, new Node{ 10, nullptr });
    addToList(&head, new Node{ 20, nullptr });

    bool success = true;
    
    if (removeFromList(&head) != 20) success = false;
    if (removeFromList(&head) != 10) success = false;
    if (removeFromList(&head) != 0)  success = false;

    freeList(&head);

    if (success)
    {
        std::cout << "pass" << std::endl;
    }
    else
    {
        std::cout << "fail" << std::endl;
    }
    return 0;
}

void addToList(Node** head, Node* newNode)
{
    newNode->next = *head;
    *head = newNode;
}

unsigned int removeFromList(Node** head)
{
    if (*head == nullptr)
    {
        return 0;
    }
    Node* removed1 = (*head);
    unsigned int removed = (*head)->value;
    *head = (*head)->next;
    delete removed1;
    return removed;
}

void freeList(Node** head)
{
    if (head == nullptr)
    {
        return;
    }
    while (*head != nullptr)
    {
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
    }
}

