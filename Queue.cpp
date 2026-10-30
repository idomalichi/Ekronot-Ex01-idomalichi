#include <iostream>
#include "Queue.h"

// func gets the queue and adds a new element value to the next free spot 
void enqueue(Queue* q, unsigned int newValue)
{
    if (isFull(q))
    {
        return;
    }

    q->elements[q->next] = newValue;
    q->next = (q->next + 1) % q->maxSize;
    q->count++;
}

// func gets the queue and pulls out an element value from it and returns it
int dequeue(Queue* q)
{
    if (isEmpty(q))
    {
        return -1;
    }

    int value = q->elements[q->head];
    q->head = (q->head + 1) % q->maxSize;
    q->count--;
    return value;
}

// func initializes the queue
void initQueue(Queue* q, unsigned int size)
{
    q->elements = new unsigned int[size];
    q->maxSize = size;
    q->count = 0;
    q->head = 0;
    q->next = 0;
}

// func resets the queue completely and frees the elements
void cleanQueue(Queue* q)
{
    delete[] q->elements;
    q->elements = nullptr;
    q->maxSize = 0;
    q->count = 0;
    q->head = 0;
    q->next = 0;
}

// func checks if the queue is empty
bool isEmpty(Queue* q)
{
    return q->count == 0;
}

// func checks if the queue is full
bool isFull(Queue* q)
{
    return q->count == q->maxSize;
}
