/*
Create a Linked List to store the following data;
Name : Aasim Ashraf;
Roll No: CSE-20-LE-63
*/

#include <iostream>
using namespace std;

struct node{
    char name[20];
    int roll;
    float marks;
    struct node *next; 
};

struct node *head = nullptr, *tail = nullptr, *trav;

void create()
{
    int n;
    struct node *temp;
    cout << "enter the Number of Students : ";
    cin >> n;

    for (int i=0; i<n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        cout << "Enter the Name of Student : ";
        cin >> temp -> name;

        cout << "Enter the roll no : ";
        cin >> temp ->roll;

        cout << "Enter the Marks : ";
        cin >> temp ->marks;

        temp ->next = nullptr;
        if(head == nullptr)
        {
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
    while (trav != nullptr)
    {
       cout <<"Name : " << trav ->name << endl; 
       cout <<"Roll No : "<< trav->roll <<endl;
       cout <<"Marks : "<< trav->marks <<endl;
       trav = trav ->next;
    }
    
}

int main()
{
    int choice;

    while (1)
    {
        cout << "1 for create\n2 for view\n3 for exit\nEnter your Choice : ";
        cin >> choice;

        if(choice == 1)
        {
            create();
        }
        else if(choice == 2){
            view();
        }
        else if(choice ==3){
            break;
        }
    }
    
}
