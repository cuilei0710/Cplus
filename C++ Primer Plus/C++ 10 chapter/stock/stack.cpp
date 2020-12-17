//Author: 崔小葵
//Date: 2020-12-18 00:28:58
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-18 00:28:58
// stack.cpp -- stack member functions
#include "stack.h"
Stack::Stack()
{
    top = 0;
} // create an empty stack

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::is_full() const
{
    return top == MAX;
}

bool Stack::push(const Item &item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
    {
        return false;
    }
}

bool Stack::pop(Item &item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
    {
        return false;
    }
}