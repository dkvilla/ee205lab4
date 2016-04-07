/*
    file: stack.cc
*/
#include "stack.h"

void Stack::push(Entry x)
{
    insert(x);
}
Entry Stack::pop(void)
{
    return remove(size()-1);
}
Entry Stack::top(void)
{
    return get(size()-1);
}