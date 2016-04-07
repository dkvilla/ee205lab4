
/* File: commmon.cc
 * Date: 5 Sep 05
 * Rev:  18 Sep 07
 *
 *  contains common utility functions
 */

#include <stdio.h>
#include "common.h"
#include <iostream>
#include <string>
using std::cerr;
using std::string;
using std::endl;


void Error(const string s)
/* Reports program error
   Pre:  s pionts to message to be printed
   Post: message printed and program terminated.
*/
{
	cerr << "ERROR: " << s << endl;
	exit(1);
}

void Warning(const string s)
/* Reports unusual program condition
   Pre:  s pionts to message to be printed
   Post: message printed and program resumed.
*/
{
	cerr << "WARNING: " << s << endl;
}
