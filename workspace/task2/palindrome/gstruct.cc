#include "gstruct.h"
#include "container.h"
#include <iostream>

using std::ostream;

/*Gstruct::Gstruct(const Gstruct& other)
{
    clear();
    for (int i=0; i<other.size(); i++)
    {
        insert(other.get(i));
    }
}

void Gstruct::operator=(const Gstruct& other): c(other.c) { }*/

bool Gstruct::operator==(const Gstruct& other) const
{
    if (size() != other.size())
        return false;
    for (int i=0; i<size(); i++)
    {
        if (c.get(i) != other.get(i))
            return false;
    }
    return true;
}

bool Gstruct::operator!=(const Gstruct& other) const
{
    return !(*this == other);
}

ostream& operator<<(ostream& o, const Gstruct& s)
{
    o << "[ ";
    for (GstructIt git = s.begin(); git != s.end(); git++)
    {
        o << *git << ", ";
    }
    o << " ]";
    return o;
}

GstructIt Gstruct::begin() const
{
    if (size()>0)
    {
        GstructIt a(c.findpos(0));     //isn't this get(0) because findpos(0) is private in container.h
        return a;
    }
    else
    {
        GstructIt a(NULL);
        return a;
    }
}

GstructIt Gstruct::end() const
{
    GstructIt a(NULL);
    return a;
    
}