#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node
{
    unsigned int value;
    Node* next;
};

void addToList(Node** head, Node* newNode);
unsigned int removeFromList(Node** head);
void freeList(Node** head);

#endif 