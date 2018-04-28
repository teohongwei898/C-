/*
The following program was not created for efficiency, as I could simply use the else if function to find the score and just output my text from there.
However, to make use of the switch statment, the program below was hence created instead.
:D
Hong Wei
*/
#include <iostream>
using namespace std;
string choice;
char option;
int main ()
{
	cout <<"Please choose your beverage of choice from: Cola, Water, Sprite, Soda, Coffee." ; //ask for score
	cin>>choice ; //collects choice
		if (choice=="Cola")
		{
			option = 'C' ;
		}
		else if (choice== "Water")
		{
			option = 'W' ;
		}
		else if (choice== "Sprite")
		{
			option = 'S' ;
		}
		else if (choice== "Soda")
		{
			option = 'A' ;
		}
		else if (choice== "Coffee")
		{
			option = 'E' ;
		}
		
		switch (option) {
			
        case 'C': 
		cout << "You have gotten a can of cola!";
        	break;
        case 'W': 
		cout << "You have gotten a can of water!";   
        	break;
        case 'S': 
		cout << "You have gotten a can of sprite!";
        	break;
        case 'A': 
		cout<< "You have gotten a can of soda!";
        	break;
        case 'E': 
		cout << "You have gotten a can of coffee!";
            break;             
        default: 
		cout<<("It seems that you didn't enter a valid drink. Here's your change!");
                break;  	
    }
	return 0;
}
