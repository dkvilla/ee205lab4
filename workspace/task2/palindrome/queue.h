//queue.h

#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include "gstruct.h"

class Queue: public Gstruct {
    public:
        void push(Entry x);
        Entry pop(void);
        Entry front(void);
};

#endif