#ifndef GSTRUCT_IT_H
#define GSTRUCT_IT_H

#include "container.h"
class GstructIt {
    public:
        GstructIt() : current(NULL) { }
        GstructIt(ListNode* p) {
            current = p;
        }
        int operator*() const; // return current item in collection
        // compare iterators
        int operator==(const GstructIt& it) const;
        int operator!=(const GstructIt& it) const;
        GstructIt operator++(); // prefix
        GstructIt operator++(int); // postfix
    private:
        ListNode *current; // pointer to current element in array
};

#endif