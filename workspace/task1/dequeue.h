#ifndef DEQUEUE_H
#define DEQUEUE_H

#include "gstruct.h"

class Dequeue: public Gstruct {
    public:
        void push_back(Entry x);
        void push_front(Entry x);
        Entry pop_front(void);
        Entry pop_back(void);
        Entry front(void);
        Entry back(void);
};

#endif