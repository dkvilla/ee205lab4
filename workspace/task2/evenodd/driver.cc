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
using std::cin;
using std::string;

int main() 
{
    
    Dequeue orig, even, odd;
    string input;
 
    cout << "This program will read an integer of arbitrary length and outputs all of the odd digits on one line," << endl; 
    cout << "and all of the even digits on the next line, in the order they occurred in the original integer. " << endl;
    cout << "Insert your integer: ";
    
    getline(cin, input); // "1092347891234571 1239084701928,341"

    for (string::iterator sit = input.begin(); sit != input.end(); sit++)
    {
        char c = *sit; // "1" or " " or ","
        if (isdigit(c)) // is a digit
        {
            int i = digit_to_int(c);
            orig.push_back(i);
        }
    }
    
    cout << orig << endl;
    
    for(GstructIt git = orig.begin(); git != orig.end(); git++)
    {        
        if ((*git) % 2 == 0 ) //even
        {
            even.push_back(*git);
        }
        else 
        {
            odd.push_back(*git);
        }
    }
    
    cout << "for odd: ";
    for(GstructIt git = odd.begin(); git != odd.end(); git++)
    {   
        cout << (*git);
    }
    cout << endl;
    cout << "for even: ";
    for(GstructIt git = even.begin(); git != even.end(); git++)
    {   
        cout << (*git);
    }
    cout << endl;
    
    cout << "pop odd: ";
    while (odd.size() > 0)
    {
        cout << odd.pop_front();
    }
    cout << endl;   
    
    cout << "pop even: ";
    while (even.size() > 0)
    {
        cout << even.pop_front();
    }
    cout << endl; 
}

int digit_to_int(const char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    else
        return -1;
}

