#include<iostream>
using namespace std;

int main()
{
    char op;
    int num1, num2;
    cout << "Enter number"<< endl;
    cin >> num1;
    cout << "Enter number"<< endl;
    cin >> num2;
    cout << "operator" << endl;
    cin >> op;
    
    switch (op)
    {       
        // If user enter +
        case '+':
            cout <<"Total:  " << num1 + num2;
            break;
         
        // If user enter -
        case '-':
            cout <<"Difference: "<< num1 - num2;
            break;
         
        // If user enter *
        case '*':
            cout <<"Product: " << num1 * num2;
            break;
         
        // If user enter /
        case '/':
            cout <<"Quotient: " << num1 / num2;
            break;
         
        // If the operator is other than +, -, * or /,
        // error message will display
        default:
            cout << "Error! operator is not correct";
            
    }
    return 0;
}