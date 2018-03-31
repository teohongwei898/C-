#include<iostream>

using namespace std;

int main() {

    // Declare variable.
    int a;

    // Get value from user.
    cout << "Enter the Number :";
    cin>>a;

    //for Loop function
    for (int counter = 1; counter <= a; counter++) {
        cout << "Execute " << counter << " time" << endl;
    }

    // wait for screen for output
    getch();
    return 0;
