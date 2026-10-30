#ifndef QUEUE_H
#define QUEUE_H

/* a queue contains positive integer values. */
struct Queue
{
    unsigned int* elements; // the pointer to the memory place of the queue
    unsigned int maxSize;   // the maximum length of the queue
    unsigned int count;     // how many elements are currently in the queue
    unsigned int head;      // the index of the first element
    unsigned int next;      // the next free spot in the array
};

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* q);
bool isFull(Queue* q);

#endif /* QUEUE_H */