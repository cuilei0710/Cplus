//Author: 崔小葵
//Date: 2020-12-18 00:19:45
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-18 00:19:45
// stock.h --class definition for the stock ADT
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
    enum
    {
        MAX = 10
    };               // constant specific to class
    Item items[MAX]; // holds stack items
    int top;         // index for top stack item

public:
    Stack();
    bool isempty() const;
    bool is_full() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item &item); // add item to stack
    // pop() returns false if stack already is empty, true othersize
    bool pop(Item &item); // pop top info item
};

#endif