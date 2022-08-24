#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int Evaluate_Postfix(string s)
{
    stack<int> stk;

    for(int i = 0; i < s.length(); i++)    //Checking the Length of Expression
    {
        if(s[i] >= '0' && s[i] <= '9')     //if Expression is b/w 0-9 then operand
            stk.push(s[i] - 48);           // using " -48 " to store int not ASCII
        
        else {
            int a = stk.top();
            stk.pop();

            int b = stk.top();
            stk.pop();

            switch (s[i])
            {
            case '+':
                stk.push(b + a);
                break;
            case '-':
                stk.push(b - a);
                break;
            case '*':
                stk.push(b * a);
                break;
            case '/':
                stk.push(b / a);
                break;
            case '%':
                stk.push(b % a);
                break;
            case '^':
                stk.push(pow(b, a));
                break;
            
            default:
                break;
            }
        }
    }

    return stk.top();
}

int main()
{
    string s;

    cout << "Enter the Postfix Expression : ";
    cin >> s;
    cout << "Result = " <<  Evaluate_Postfix(s);
    
    return 0;
}
