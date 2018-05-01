#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
#include <ctime>
int RNG(int lowest, int highest)  //Random Number Generator
{
    srand((unsigned) time(0));
    lowest++;highest--;
    int range=(highest-lowest)+1;
    return lowest+int(range*rand()/(RAND_MAX + 1.0));
}


int main()
{
    int ranNum = RNG(0, 101);
    cout << "Guess a number from 1 to 100: ";
    int userNum;

    for(;;)
    {
        cin >> userNum;
        if (userNum > ranNum)
        {
            cout << "Too High" << endl;
        }
        else if (userNum < ranNum)
        {
            cout << "Too Low" << endl;
        }
        else if (userNum == ranNum)
        {
            cout << "You got it!" << endl;
            break;
        }

    }

    return 0;
}
