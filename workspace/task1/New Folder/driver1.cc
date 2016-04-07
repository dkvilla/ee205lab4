#include <iostream>
#include <string>
#include "container.h"
#include "listnode.h"
#include "driver.h"

using std::cout;
using std::endl;
using std::string;

int main() {
    Container a;
    a.insert(0);
    a.insert(1);
    
    Container b(a), c = b;
    printc(a, 'A');
    printc(b, 'B');
    printc(c, 'C');
    
    a.replace(100, 0);
    a.insert(300);
    
    printc(a, 'A');
    printc(b, 'B');
    printc(c, 'C');
    
    b.replace(200, 1);
    b.insert(300);
    b.insert(400);
    
    printc(a, 'A');
    printc(b, 'B');
    printc(c, 'C');

    c.insert(999,0);
    
    printc(a, 'A');
    printc(b, 'B');
    printc(c, 'C');
}

void printc(Container c, char ch)
{
    cout << ch << ": "; 
    c.traverse(print); 
    cout << "; " << endl;
}

void print(Entry x) 
{ 
    cout << x << ",";
}
