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
using std::getline;
int main() {
    Stack orig, reverse;
    string input;
    cout << "give me some text: ";
    getline(cin, input);
    for (string::iterator sit = input.begin(); sit != input.end(); sit++)
    {
        if (isalnum(*sit))
            orig.push(toupper(*sit));
    }
        
    while (orig.size()>0)
        reverse.push(orig.pop());
        
    for (string::iterator sit = input.begin(); sit != input.end(); sit++)
    {
        if (isalnum(*sit))
            orig.push(toupper(*sit));
    }
    
    cout << "orig: ";
    for (GstructIt git = orig.begin(); git != orig.end(); git++)
    {
        char temp = *git;
        cout << temp;
    }
    cout << endl;
    
    cout << "reverse: ";
    for (GstructIt git = reverse.begin(); git != reverse.end(); git++)
    {
        char temp = *git;
        cout << temp;
    }
    cout << endl;
    
    if (orig == reverse)
        cout << input << " is a palindrome" << endl;
    else 
        cout << input << " is not a palindrome" << endl;
        
    
}