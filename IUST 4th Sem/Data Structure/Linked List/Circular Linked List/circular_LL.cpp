/*
Name : Aasim Ashraf;
Roll No : CSE-20-LE-63;
Sem : 4th;
*/


#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL, *tail=NULL, *trav=NULL;

void create()
{
    int n;
    struct node *temp;

    cout << "Enter the Number of Elements you want to Insert : ";
    cin >> n;

    for (int i=0; i<n; i++)
    {
        temp = (struct node *)malloc (sizeof(struct node));

        cout << "Enter the Elements : ";
        cin >> temp ->data;

        temp -> next = NULL;

        if(head == NULL)
            {
                head = temp;
                tail = temp;
                tail -> next = temp;
            }
        else{
                tail -> next = temp;
                tail = temp;
                tail -> next = head;
        }
    }
}

void view()
{
    trav = head;
    while (1)
    {
        cout << trav ->data << endl;
        if(trav == tail)
            break;
        else
            trav = trav ->next;
    }
}

void insert()
{
    int value;
    struct node *temp;
    temp = (struct node *) malloc (sizeof(struct node));

    temp -> next = NULL;

    cout << "Enter the Element you want to Insert : ";
    cin >> temp -> data;

    cout << "Enter the Value After you want to Insert : ";
    cin >> value;

    trav = head;

    while(trav -> data != value)
    {
        trav = trav -> next;
        temp -> next = trav -> next;
        trav -> next = temp;
    }
}

void Delete()
{
    int item;
    struct node *temp;

    cout << "Enter the Node you want to Delete :";
    cin >> item;

    if(head -> data == item)
    {
        temp = head;
        head = head -> next;
        free(temp);
        tail -> next = head;
    }
    else
    {
        trav = head;
        
        while(trav -> next -> data != item)
        {
            trav = trav -> next;
            temp = trav -> next;
        }
        if(trav -> next == tail)
        {
            trav -> next = NULL;
            free(temp);
        }
        else
        {
            trav -> next = trav -> next -> next;
            free(temp); 
        }
    }
}

int main()
{
    int choice;
    while(1)
    {
        cout << "1 for Create\n2 for View\n3 for Insert\n4 for Delete\n5 for Exit\nEnter your Choice : ";
        cin >> choice;

        if(choice == 1) create();
        if(choice == 2) view();
        if(choice == 3) insert();
        if(choice == 4) Delete();
        if(choice == 5) break;
    }
}
