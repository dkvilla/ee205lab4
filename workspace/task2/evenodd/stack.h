#ifndef STACK_H
#define STACK_H

#include "gstruct.h"

class Stack: public Gstruct {
    public:
        void push(Entry x);
        Entry pop(void);
        Entry top(void);
};

#endif