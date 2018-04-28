#include <iostream>
using namespace std;
	int main()
{

    int UserNumber = 0;
    int k = 1;
    while (k < 11)
    {
        cout << "\nEnter any number other than 5: ";
        cin >> UserNumber;

        if (UserNumber == 5)
        {
            cout << "\n\n\nHey! You weren't supposed to enter 5!\n\n\n";
            break;
        }

        else if (k == 10)
        {
            cout << "Wow, you're more patient then I am, you win.\n\n\n";
        }
        k++;
    }

}
