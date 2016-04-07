#include "queue.h"

void Queue::push(Entry x)
{
    insert(x);
}
Entry Queue::pop(void)
{
    return remove(0);
}
Entry Queue::front(void)
{
    return get(0);
}