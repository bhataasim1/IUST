#include<iostream>
#include<stack>
using namespace std;

int Precedence(char ch)
{
    if(ch == '^')
        return 3;
    else if(ch == '*' || ch == '/')
        return 2;
    else if(ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

string Infix_to_Postfix(string s)
{
    stack<char> stk;
    string result;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'z') // b/w 0 - 9 print them (store in result)
        {
            result += s[i];
        }

        else if(s[i] == '(')  // if '(' push in stack
        {
            stk.push(s[i]);
        }

        else if(s[i] == ')')
        {
            while(!stk.empty() && stk.top() != '(')
            {
                result += stk.top();
                stk.pop();
            }
            if(!stk.empty())
                stk.pop();
        }

        else{
            while (!stk.empty() && Precedence(stk.top()) > Precedence(s[i]))
            {
                result += stk.top();
                stk.pop();
            }
            stk.push(s[i]);   
        }

    }
    while (!stk.empty())
    {
        result += stk.top();
        stk.pop();
    }

    return result;  
}

int main()
{
    string str;

    cout << "Enter the Infix Expression : ";
    cin >> str;

    cout << "Postfix = " << Infix_to_Postfix(str);
}
