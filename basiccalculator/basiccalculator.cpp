# include <iostream>
using namespace std;

int main()
{
    char op;  //define the operator, whether it's a addition, multiplaction, divsion etc.
    float num1, num2; //define the 2 numbers we are working with

    cout << "Please choose the operation you will want to do for the 2 numbers, either + or - or * or / : "; //ask user
    cin >> op; //inserts the input as the operator

    cout << "Enter two numbers: "; //asks for 2 no.s
    cin >> num1 >> num2;  // first no. in num1, 2nd no. in num2

    switch(op)  //easier as compared to if..else , the lines below describes the operations as well as what it does to the numbers.
    {
        case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;

        default:
            // If the operator is not +, -, * or /, error message is shown
            cout << "Error! The operator you have inputted is not valid";
            break;  //ends the program
    }

    return 0;
}
