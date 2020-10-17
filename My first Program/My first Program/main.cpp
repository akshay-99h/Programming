/*
calculator.cpp
calculator
Enter the no.s and boom
Created by Akshay on 09/07/18.
Copyright © 2018 Pengi Creations. All rights reserved.
If the operator is other than +, -, * or /, error message is shown
*/

# include <c++/4.2.1/backward/iostream.h>
int main()
{
    char op;
    float num1, num2                                        ;
    
    cout << "Enter operator either + or - or * or /: "      ;
    cin >> op                                               ;
    
    cout << "Enter first number: "                          ;
    cin >> num1                                             ;
    
    cout << "Enter second number: "                         ;
    cin >> num2                                             ;
    
    switch(op)
    {
        case '+':
            cout << "answer = " << num1+num2                   ;
            break;
            
        case '-':
            cout << "answer = " << num1-num2                   ;
            break;
            
        case '*':
            cout << "answer = " << num1*num2                   ;
            break;
            
        case '/':
            cout << "answer = " << num1/num2                   ;
            break;
            
        default :
            cout << "Error! operator is not correct";
            break;
    }
    cout << '\n';
}
