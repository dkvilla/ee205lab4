// pointers
#include <iostream>
using std::cout;
using std::endl;

int main() {
    int someint = 1;
    int *someint_p;
    
    someint_p = &someint; //someintp contains the address for someint
    cout << (*someint_p) << endl; //will output the value of someint
    (*someint_p) = 2; //store 2 into whatever someintp is pointing to
    cout << someint << endl;
}