#include <iostream>
#include <string>
#include "stack.h"
#include "queue.h"
#include "dequeue.h"
#include "gstruct.h"
#include "gstruct_it.h"
#include "container.h"
#include "listnode.h"
#include "driver.h"

using std::cout;
using std::endl;
using std::string;

int main() {
    Stack s1, s2;
   
    s1.push(0);
    cout << "stack 1: pushed 0" << endl;
    s1.push(1);
    cout << "stack 1: pushed 1" << endl;
    s1.push(2);
    cout << "stack 1: pushed 2" << endl;
    
    s2.push(3);
    cout << "stack 2: pushed 3" << endl;
    s2.push(4);
    cout << "stack 2: pushed 4" << endl;
    s2.push(5);
    cout << "stack 2: pushed 5" << endl;
    
    
    cout << "stack 1: " << s1 << " top: " << s1.top() << endl;
    cout << "stack 2: " << s2 << " top: " << s2.top() << endl;

    cout << "stack 1 pop: [ ";
    while (s1.size()>0)
        cout << s1.pop() << ", ";
    cout << " ]" << endl;
    
    cout << "stack 2 pop: [ ";
    while (s2.size()>0)
        cout << s2.pop() << ", ";
    cout << " ]" << endl;

    Queue q1, q2;
    
    q1.push(0);
    cout << "queue 1: pushed 0" << endl;
    q1.push(1);
    cout << "queue 1: pushed 1" << endl;
    q1.push(2);
    cout << "queue 1: pushed 2" << endl;
    
    q2.push(3);
    cout << "queue 2: pushed 3" << endl;
    q2.push(4);
    cout << "queue 2: pushed 4" << endl;
    q2.push(5);
    cout << "queue 2: pushed 5" << endl;
    
    Queue q3(q1);

    cout << "queue 1: " << q1 << " front: " << q1.front() << endl;
    cout << "queue 2: " << q2 << " front: " << q2.front() << endl;    
    cout << "queue 3: " << q3 << " front: " << q3.front() << endl;
    
    if (q3==q1)
        cout << "queue 3 == queue 1" << endl;
    else
        cout << "queue 3 != queue 1" << endl;
        
    if (q3==q2)
        cout << "queue 3 == queue 2" << endl;
    else
        cout << "queue 3 != queue 2" << endl;
    
    cout << "queue 1 pop: [ ";
    while (q1.size()>0)
        cout << q1.pop() << ", ";
    cout << " ]" << endl;
    
    cout << "queue 2 pop: [ ";
    while (q2.size()>0)
        cout << q2.pop() << ", ";
    cout << " ]" << endl;
    
    if (q1 != q2)
        cout << "queue 1 != queue 2" << endl;
    else 
        cout << "queue 1 == queue 2" << endl;
    
    Dequeue d1, d2, d3;
        
    d1.push_back(0);
    cout << "dequeue 1: pushed back 0" << endl;
    d1.push_back(1);
    cout << "dequeue 1: pushed back 1" << endl;
    d1.push_back(2);
    cout << "dequeue 1: pushed back 2" << endl;
    
    d2.push_back(3);
    cout << "dequeue 2: pushed back 3" << endl;
    d2.push_back(4);
    cout << "dequeue 2: pushed back 4" << endl;
    d2.push_back(5);
    cout << "dequeue 2: pushed back 5" << endl;
    
    d3.push_front(0);
    cout << "dequeue 3: pushed front 0" << endl;
    d3.push_front(1);
    cout << "dequeue 3: pushed front 1" << endl;
    d3.push_front(2);
    cout << "dequeue 3: pushed front 2" << endl;
    d3.push_front(3);
    cout << "dequeue 3: pushed front 3" << endl;
    d3.push_front(4);
    cout << "dequeue 3: pushed front 4" << endl;
    d3.push_front(5);
    cout << "dequeue 3: pushed front 5" << endl;

    cout << "dequeue 1: " << d1 
        << " front: " << d1.front() 
        << " back: " << d1.back() << endl;
    cout << "dequeue 2: " << d2 
        << " front: " << d2.front() 
        << " back: " << d2.back() << endl;   
    cout << "dequeue 3: " << d3 
        << " front: " << d3.front() 
        << " back: " << d3.back() << endl;
        
        
    cout << "dequeue 1 pop front: [ ";
    while (d1.size()>0)
        cout << d1.pop_front() << ", ";
    cout << " ]" << endl;
    
    cout << "dequeue 2 pop front: [ ";
    while (d2.size()>0)
        cout << d2.pop_front() << ", ";
    cout << " ]" << endl;
        
    cout << "dequeue 3 pop back: [ ";
    while (d3.size()>0)
        cout << d3.pop_back() << ", ";
    cout << " ]" << endl;   
}
/*void printc(Container c, char ch)
{
    cout << ch << ": "; 
    c.traverse(print); 
    cout << "; " << endl;
}

void print(Entry x) 
{ 
    cout << x << ",";
}*/