/*
To check:
1.If the year is evenly divisible by 4, go to step 2. ...
2.If the year is evenly divisible by 100, go to step 3. ...
3.If the year is evenly divisible by 400, go to step 4. ...
The year is a leap year (it has 366 days).
The year is not a leap year (it has 365 days).
*/
#include <iostream>
using namespace std;

int main() 
{
    int year
    cout << "Enter year to check whether it is a leap year!"<<endl;
    cin >> year
    if (year&4==0)
    {
      if (year%100==0)
      {
        if (year%400==0)
        {
        cout<< "The year you have keyed in is a leap year." <<endl;
        }
      }
     }
     else
     {
     cout << "The year you have keyed in is not a leap year."<<endl;
      
    return 0;
}
