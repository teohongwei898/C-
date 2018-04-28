/*
The following program was not created for efficiency, as I could simply use the else if function to find the score and just output my text from there.
However, to make use of the switch statment, the program below was hence created instead.
:D
Hong Wei
*/


#include <iostream>
using namespace std;
int score;
int grade;
int main ()
{
	cout <<"Please input your score that you have got." ; //ask for score
	cin>>score ; //collects score
		if (score>= 0 && score<=59)
		{
			grade = 'F'	;
		}
		else if (score<=60 && score<=69)
		{
			grade = 'D' ;
		}
		else if (score<=70 && score <=79)
		{
			grade = 'C' ;
		}
		else if (score<=80 && score <=89)
		{
			grade = 'B';
		}
		else if (score<=90 && score<=99)
		{
			grade = 'A';
		}
		else if (score==100)
		{
			grade = 'AA';
		}
		switch (grade) {
        case 'F': cout << "You have gotten a grade of: F. Work harder!";
        	break;
        case 'D': cout << "You have gotten a grade of: D. Do work harder and improve your grades!";   
        	break;
        case 'C': cout << "You have gotten a grade of: C. Strive harder for better results!";
        	break;
        case 'B': cout<< "You have gotten a grade of: B. Push for your A's!'";
        	break;
        case 'A': cout << "You have gotten a grade of A. Why not push your limits and attain perfection?";
                break;             
        case 'AA': cout << "You have gotten a grade of A and have attained a perfect score. Good job and keep up the good work!";
        	break;
        default: cout<<("It seems that you didn't enter a valid score between 0 to 100. Please try again!'");
                break;  	
    }
	return 0;
}
