#include "gstruct_it.h"
#include "container.h"
#include <iostream>

using std::cerr;
using std::endl;

int GstructIt :: operator*() const
{
    if (current == NULL)
    {
        cerr << " Illegal dereference of iterator " << endl;
        abort() ; // core dump and exit
    }
    return current->getdata();
}
int GstructIt :: operator==(const GstructIt& it) const
{ return current == it.current; }

int GstructIt :: operator!=(const GstructIt& it) const
{ return !(current == it.current); }

GstructIt GstructIt :: operator++() // prefix
{
    if (current != NULL) current = current->getnext(); // update it if valid pointer
    return *this; // return it
}
GstructIt GstructIt :: operator++( int ) // postfix
{
    GstructIt it (*this); // remember original
    if (current != NULL) current = current->getnext(); // update it if valid pointer
    return it; // return original
}

