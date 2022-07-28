#include <iostream>
#define MAX 100
using namespace std;

int stack[MAX], top = -1;

void push(int item)
{
    if(top == MAX -1)
        cout << "OverFlow" << endl;
    else{
        top++;
        stack[top] = item;
    }
}

int Pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

void view()
{
    if(top == -1)
        cout << "Stack is Empty" << endl;
    else{
        int i = 0;
        while(i <= top){
            cout << stack[i] << endl;
            i++;
        }
    }
}

int main()
{
    int ch, item;
    while(1)
    {
        cout << "1 for Push\n2 for Pop\n3 for View\n4 for Break\nEnter your Choice : ";
        cin >> ch;

        if(ch == 1)
        {
            cout << "Enter the Element to Push : ";
            cin >> item;
            push(item);
        }
        else if (ch == 2)
        {
            item = Pop();

            if(item == -1)
                cout << "Underflow" << endl;
            else
                cout << item << endl;
        }
        else if(ch == 3)
        {
            view();
        }
        else if(ch == 4)
            break;
    }
}
