#include <iostream>
using namespace std;

/* 
Name : Aasim Ashraf;
Roll NO: CSE-20-LE-63 
*/

typedef struct node {
    int data;
    struct node *next;
}Node;

Node *Head = NULL, *Tail = NULL;

void createFun()
{
    Node *temp;
    int n;
    cout << "Number of Nodes ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        temp = (Node *)malloc(sizeof(Node));
        cout << "Enter Nodes ";
        cin >> temp ->data;

        temp ->next = NULL;

        if(Head == NULL){
            Head = temp;
            Tail = temp;
        }
        else{
            Tail ->next = temp;
            Tail = temp;
        }
    }
}

void view()
{
    Node *trav = Head;
    while(trav != NULL)
    {
        cout << trav ->data << endl;
        trav = trav ->next;
    }

    if(Head == NULL)
        cout << "Linked List is Empty" <<endl;
}

void deleteAll()
{
    Node *trav = Head;
    while(trav != NULL)
    {
        trav = trav ->next;
        free(Head);
        Head = trav;
    }

    if(Head == NULL)
        cout << "Successfully Deleted all Nodes" << endl;
}


int main(int argc, char const *argv[])
{
    int ch;
    while(1)
    {
        cout << "Enter ";
        cin >> ch;

        if(ch == 1)
            createFun();
        if(ch == 2)
            view();
        if(ch == 3)
            deleteAll();
    }
    return 0;
}
