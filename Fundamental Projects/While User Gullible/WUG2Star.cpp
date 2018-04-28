#include <iostream>
using namespace std;
int main()
{
    int UserNumber = 0;
    int k = 0;
    
    while ((k < 10)&& (UserNumber!=k-1))
    {
        cout << "Enter any number other than " << k<<":";
        cin >> UserNumber;
        k++;
	}
        if (UserNumber == k-1) {
        	cout << "Hey! You weren't supposed to enter "<<UserNumber<<"!";
        } else {
            cout << "Wow, you're more patient then I am, you win.\n\n\n";
        }
        return 0;
    }

