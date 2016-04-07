#ifndef GSTRUCT_H
#define GSTRUCT_H


#include "container.h"
#include <iostream>
#include "gstruct_it.h"

using std::ostream;

class Gstruct {
    protected:
        Container c;
        Entry get(const int i) const { return c.get(i); } 
        void insert(const Entry x) { c.insert(x); }
        void insert(const Entry x, const Position p) { c.insert(x,p); }
        Entry remove(const Entry x) { return c.remove(x); }
        void replace(const Entry x, Position p) { c.replace(x,p); }
    public:
        Gstruct() { }
        Gstruct(const Gstruct& other): c(other.c) { };
        ~Gstruct() { }
        void operator=(const Gstruct& other) { c = other.c; };
        bool operator==(const Gstruct& other) const;
        bool operator!=(const Gstruct& other) const;
        friend ostream& operator<<(ostream& o, const Gstruct& s);
        bool isfull() const { return c.isfull(); }
        bool isempty() const { return c.isempty(); }
        void clear() { c.clear(); }
        int size() const { return c.size(); }
        friend class GstructIt;
        GstructIt begin() const;   //constant?
        GstructIt end() const;     //constant?

};

#endif