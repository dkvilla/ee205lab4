/*  File: listnode_inl.h
 *  Date: 26 Sep 05
 *  Rev:
 */
 
 /* Listnode class declaration */


#include <stdlib.h>
#include "entry.h"
#include "listnode.h"

/*******************************************************************/
/*                                                                 */
/*  List Declaration using linked-list implementation              */
/*                                                                 */
/*******************************************************************/

ListNode::ListNode(Entry x)
{
    entry = x;
}
Entry ListNode::getdata() const
{       
    return entry;
}
ListNode *ListNode::getnext() const
{       
    return next;
}
void ListNode::setdata(Entry x)
{       
    entry = x;
}
void ListNode::setnext(ListNode *n)
{       
    next = n;
}
