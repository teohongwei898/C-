#include <iostream>

using namespace std;

int main () {
   int  var = 20;   // declare a variable.
   int  *test;        // declare a pointer variable with * 

   test = &var;       // store address of var in 'test' pointer variable 

   cout << "Value of var variable is: ";
   cout << var << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in the 'test' variable: ";
   cout << test << endl;

   // access the value at the address available in pointer
   cout << "Value of *test variable: ";
   cout << *test << endl;

   return 0;
}


