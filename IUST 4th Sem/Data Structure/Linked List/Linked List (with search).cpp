#include<iostream>
using namespace std;

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *Head = NULL, *Tail = NULL;


//Creating Linked List .....
void Create()
{
    int n;
    Node *temp;
    cout << "Enter the Number of Nodes : ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        temp = (Node *)malloc(sizeof(Node));

        cout << "Enter the Nodes : ";
        cin >> temp -> data;

        temp -> next = NULL;

        if(Head == NULL)
        {
            Head = temp;
            Tail = temp;
        }
        else{
            Tail -> next = temp;
            Tail = temp;
        }

    }
}


//Displaying Linked List ...
void View()
{
    Node *trav;

    trav = Head;

    while(trav != NULL)
    {
        cout << trav -> data << endl;
        trav = trav -> next;
    }
}


//Inserting Before a Given Node ...
void InsertBefore()
{
    Node *trav, *temp;
    temp = (Node *)malloc(sizeof(Node));

    int pos;

    cout << "Enter the Node You Want to Insert : ";
    cin >> temp ->data;

    cout << "Enter the Node Before you want to Insert : ";
    cin >> pos;

    trav = Head;

    /* Not Working Properly ....
    if(Head -> data == pos)
    {
        trav ->next = Head;
        Head = trav;
    } */

    while (trav -> data != NULL && trav->next->data != pos)
    {
        trav = trav ->next;
    }
    temp -> next = trav ->next;
    trav -> next = temp;
    
}

//Inserting After a Given Node ...
void InsertAfter()
{
    Node *trav, *temp;
    temp = (Node *)malloc(sizeof(Node));
    int pos;

    cout << "Enter the Node you want to Insert : ";
    cin >> temp -> data;

    cout << "Enter the Node After which you want to Insert : ";
    cin >> pos;

    trav = Head;

    while (trav -> data != pos)
    {
        trav = trav -> next;
    }
    temp -> next = trav -> next;
    trav -> next = temp;
    

}

//Deleting Node ..
void Delete()
{
    Node *temp, *trav;
    int val;

    cout << "Enter the Value to Delete : ";
    cin >> val;

    if(Head -> data == val)
    {
        temp = temp -> next;
        free(temp);
    }
    else
    {
        trav = Head;
        while(trav -> next-> data != val)
        {
            trav = trav -> next;
            temp = trav -> next;
        }
        if(trav -> next == Tail)
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

//Searching
void Search()
{
    Node *trav = Head;
    int find;

    cout << "Enter the Node to Search : ";
    cin >> find;

    while(trav != NULL)
    {
        if(trav->data == find){
            cout << trav ->data << " Found" << endl;
        }
        trav = trav -> next;
    }
}


int main()
{
    int choice;
    while(1)
    {
        cout << "1 for Create\n2 for View\n3 for Insert After\n4 for Insert Before\n5 for Delete\n6 to Search\n7 for EXIT\nEnter your Choice : ";
        cin >> choice;
        if(choice == 1)
            Create();
        if(choice == 2)
            View();
        if(choice == 3)
            InsertAfter();
        if(choice == 4)
            InsertBefore();
        if(choice == 5)
            Delete();
        if(choice == 6)
            Search();
        if(choice == 7)
            break;
    }
    
}
