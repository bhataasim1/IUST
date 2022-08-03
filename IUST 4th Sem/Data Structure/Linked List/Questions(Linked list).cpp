#include <iostream>
using namespace std;

typedef struct node{
    int data;
    struct node *next;
}Node;

Node *Head = NULL, *Tail = NULL;

void Create()
{
    Node *temp;
    int n;

    cout << "Enter the Number of Nodes : ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        temp = (Node *)malloc(sizeof(Node));

        cout << "Enter Nodes : ";
        cin >> temp -> data;

        temp ->next = NULL;

        if(Head == NULL)
        {
            Head = temp;
            Tail = temp;
        }
        else {
            Tail -> next = temp;
            Tail = temp;
        }
    }
}

void View()
{
    Node *trav = Head;

    while(trav != NULL)
    {
        cout << trav -> data << endl;
        trav = trav -> next;
    }
}


//Find only Even Numbers in Linked List ..
void onlyEven()
{
    Node *trav = Head;

    while(trav != NULL)
    {
        if(trav -> data % 2 == 0)
            cout << trav -> data <<endl;
        trav = trav -> next;
    }
}


//Finding the Frequency of Given Element ..
void Frequency()
{
    Node *trav = Head;
    int count = 0;
    int find;
    cout << "Enter the Number Whose Frequency You want to Check : ";
    cin >> find;

    while(trav != NULL)
    {
        if(trav -> data == find)
        {
            count = count +1;
        }
        trav = trav -> next;
    }
    cout << "Frequency of " << find << " = " << count << endl;
}


void isPrime()
{
    Node *trav = Head;
    
    while(trav != NULL)
    {
        bool isPrime = true;
        for(int i=2; i< (trav -> data) -1; i++)
        {
            if((trav->data) % 2 == 0)
                isPrime = false;
        }
        if(isPrime)
            cout << trav -> data << endl;
        
        trav = trav -> next;
    }

}

int main()
{
    int choice;

    while(1)
    {
        cout << "1 Create\n2 View\n3 Even Numbers\n4 Frequency\n5 Prime Numbers\n6 EXIT\nEnter Your Choice : ";
        cin >> choice;
        
        if(choice == 1)
            Create();
        if(choice == 2)
            View();
        if(choice == 3)
            onlyEven();
        if(choice == 4)
            Frequency();
        if(choice == 5)
            isPrime();
        if(choice == 6)
            break;
    }
}
