#include "Utils.h"
#include "Stack.h"
#include <iostream>
void reverse(int* nums, unsigned int size)
{
    if (nums == nullptr)
    {
        return;
    }
    Stack s;
    initStack(&s);
    for (int i = 0; i < size; i++)
    {
        push(&s, nums[i]);
    }
    for (int i = 0; i < size; i++)
    {
        nums[i] = pop(&s);
    }
    cleanStack(&s);
}

int* reverse10()
{
    int* arr = new int[10];
    Stack s;
    initStack(&s);
    for (int i = 0; i < 10; i++)
    {
        int num = 0;
        std::cin >> num;
        push(&s, num);
    }
    for (int i = 0; i < 10; i++)
    {
        arr[i] = pop(&s);
    }
    cleanStack(&s);
    return arr;
}