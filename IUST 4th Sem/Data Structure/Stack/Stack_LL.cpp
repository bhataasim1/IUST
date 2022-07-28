#include <iostream>
using namespace std;

struct node{
    int item;
    struct node *next;
};

struct node *top=NULL, *temp, *trav;

void push(int item)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    temp ->next = NULL;
    temp -> item = item;

    if(top == NULL)
        top = temp;
    else{
        temp -> next = top;
        top = temp;
    }
}

int Pop()
{
    int item;
    if(top == NULL)
        return -1;
    else {
        item = top -> item;
        temp = top;
        top = top ->next;
        free(temp);
        return item;
    }
}

void view()
{
    //struct node *temp;

    if(top == NULL)
        cout << "Stack is Empty" << endl;
    else{
        trav = top;
        while (trav != NULL)
        {
            cout << trav -> item << endl;
            trav = trav -> next;
        }
        
    }
}

int main()
{
    int ch, item;
    while(1)
    {
        cout << "1 for Push\n2 for Pop\n3 for View\n4 for Exit\nEnter your Choice : ";
        cin >> ch;

        if(ch == 1)
        {
            cout << "Enter the Element : ";
            cin >> item;
            push(item);
        }
        else if(ch == 2)
        {
            item = Pop();
            if(item == -1)
            {
                cout << "Underflow" << endl;
            }
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
