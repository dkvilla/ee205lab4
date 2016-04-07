/* dequeue.c */

#include "dequeue.h"

void Dequeue::push_back(Entry x)
{
    insert(x);
}
void Dequeue::push_front(Entry x)
{
    insert(x,0);
}
Entry Dequeue::pop_front(void)
{
    return remove(0);
}
Entry Dequeue::pop_back(void)
{
    return remove(size()-1);
}
Entry Dequeue::front(void)
{
    return get(0);
}
Entry Dequeue::back(void)
{
    return get(size()-1);
}
