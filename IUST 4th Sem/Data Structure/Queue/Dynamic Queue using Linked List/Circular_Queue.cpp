#include <iostream>
using namespace std;

typedef struct node {
    int Data;
    struct node *next;
}Node;

Node *Front = NULL, *Rear = NULL;

void Enqueue(int item)
{
    Node *Temp = (Node *)malloc(sizeof(Node));
    Temp -> Data = item;
    Temp -> next = NULL;
    
    if(Rear == NULL && Front == NULL)
    {
        Front = Temp;
        Rear = Temp;
        Rear -> next = Front;
    }
    else{
        Rear -> next = Temp;
        Rear = Temp;
        Rear -> next = Front;
    }
}

int Dequeue()
{
    Node *Temp;
    if(Front == NULL)
        return -1;
    else{
        int item = Front -> Data;
        Temp = Front;
        Front = Front -> next;
        free(Temp);
        return item;
    }
}

void View()
{
    Node *Trav = Front;
    if(Front == NULL)
        cout << "Queue is Empty" << endl;
    else {
        while (Trav -> next != Front)
        {
            cout << Trav -> Data;
            Trav = Trav -> next;
        }
        
    }
}

int main()
{
    int ch, item;

    while (1)
    {
        cout << "\n1 for EnQueue\n2 for DeQueue\n3 for View\n4 for Exit\nEnter your Choice : ";
        cin >> ch;

        if(ch == 1)
        {
            cout << "Enter the item : ";
            cin >> item;
            Enqueue(item);
        }
        else if(ch == 2)
        {
            item = Dequeue();
            if(item == -1)
                cout << "UnderFlow" << endl;
            else
                cout << item;
        }
        else if(ch == 3)
            View();
        else if(ch == 4)
            break;
    }
    
}
