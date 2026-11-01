#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

typedef struct Stack
{
	Node* head;
} Stack;

void push(Stack* s, unsigned int element);
int pop(Stack* s);
void initStack(Stack* s);
void cleanStack(Stack* s);
bool isEmpty(Stack* s);
bool isFull(Stack* s);

#endif