#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

void initStack(Stack* s)
{
	// checking if the stack is empty
	if (s == nullptr)
	{
		return;
	}
	// reseting the head of the stack
	s->head = nullptr;
}

void push(Stack* s, unsigned int element)
{
	// checking if the stack is empty
	if (s == nullptr)
	{
		return;
	}
	//sending the address of the head of the stack and the new element to the addToList func.
	Node* newNode = new Node;
	newNode->value = element;
	newNode->next = nullptr;
	addToList(&(s->head), newNode);
}

int pop(Stack* s)
{
	// checking if the stack is empty
	if (s == nullptr || s->head == nullptr)
	{
		return -1;
	}
	//removing the last element from the stack
	return removeFromList(&(s->head));
}

void cleanStack(Stack* s)
{
	// checking if the stack is empty
	if (s == nullptr || s->head == nullptr)
	{
		return;
	}
	//freeing the head of the stack and reseting it
	freeList(&s->head);
	s->head = nullptr;
}

bool isEmpty(Stack* s)
{
	//checking if the stack is empty
	return (s == nullptr || s->head == nullptr);
}

bool isFull(Stack* s)
{
	return false; //the stack is implemented using a dynamically allocated linked list so it has no maximum size limit
}