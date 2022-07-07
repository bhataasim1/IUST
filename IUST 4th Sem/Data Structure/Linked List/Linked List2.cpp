/*
Linked List: Dynamic Memory Allocation
Name : Aasim Ashraf
Roll No : CSE-20-LE-63
*/

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head=nullptr, *tail=nullptr, *trav;

void create()
{
    int n;
    struct node *temp;

    cout << "Enter the Number of Nodes ";
    cin >> n;

    for(int i=0; i<n; i++){
        temp = (struct node *) malloc(sizeof(struct node));
        cout << "Enter the Data ";
        cin >> temp ->data;

        temp ->next = nullptr;
        if(head == nullptr){
            head = temp;
            tail = temp;
        }
        else
        {
            tail ->next = temp;
            tail = temp;
        }
        
    }
}

void view()
{
    struct node *trav;
    trav = head;

    while(trav != nullptr)
    {
        cout << trav -> data << endl;
        trav = trav ->next;
    }
}

int main()
{
    int choice;
    while(1)
    {
        cout << "1 for create\n2 for view\n3 for exit\nEnter Your Choice : ";
        cin >> choice;

        if (choice == 1)
        {
            create();
        }
        else if(choice == 2)
        {
            view();
        }
        else if(choice == 3){
            break;
        }
        
    }

}
