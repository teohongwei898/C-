#include <iostream>

using namespace std;

int main()
{
    int ate[10]; //array for recording data
    int mostpan; //var for most pancakes eaten
    int mostperson; //var for person that ate the most
    int leastpan; //var for least eaten
    int leastperson; //var for person that eat the least
     cout << "How many pancakes did each person eat? Please fill in for all 10 persons\n";
    for (int a=0; a<10; a++)
    {
        cout << "Person " << a+1 << ": ";
        cin >> ate[a];
    }

    mostpan = ate[0];
    leastperson = 0;
    
    for (int b=0; b<10; b++)
    {
        if (mostpan<ate[b])
        {
            mostpan = ate[b];
            mostperson = b+1;
        }

        if (leastpan>ate[b])
        {
            leastpan = ate[b];
            leastperson = b+1;
        }
    }

    cout << "Person No. " << mostperson<< " ate the most: " << mostpan << "pancakes." <<endl;
    cout << "Person No. " << leastperson << " ate the least: " << leastpan << "pancake(s)"<<endl;

    for (int a=0; a<10; a++)
    {
        cout << ate[a] << ", ";
    }

    return 0;
}
    
