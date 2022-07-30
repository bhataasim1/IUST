#include<iostream>
using namespace std;

//Name    : Aasim Ashraf
//Roll No : CSE-20-LE-63
//Sem     : 4th

typedef struct node{
    char Name[100];
    int roll_no;
    float marks;

    struct node *next;
} Node;

Node *Head = NULL, *Tail = NULL;


void Create()
{
    int n;
    Node *temp;

    cout << "Enter the Number of Students : ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        temp = (Node *) malloc(sizeof(Node));

        cout << "--------------------------------------" << endl;

        cout << "Enter the Name of Student : ";
        cin >> temp->Name;

        cout << "--------------------------------------" << endl;

        cout << "Enter the Roll No of Student : ";
        cin >> temp -> roll_no;

        cout << "--------------------------------------" << endl;

        cout << "Enter the Total Marks of student : ";
        cin >>temp -> marks;

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

void View()
{
    Node *trav = Head;

    while(trav != NULL)
    {
        cout << "--------------------------------------" << endl;
        cout << "Name : " << trav -> Name << endl;
        cout << "Roll No : "<< trav -> roll_no << endl;
        cout << "Marks : " << trav -> marks << endl;
        cout << "--------------------------------------" << endl;

        trav = trav -> next;
    }

}

//Students whose Marks are Less than 50 ..
void Find()
{
    Node *trav = Head;

    while(trav != NULL)
    {
        if(trav ->marks < 50)
        {
            cout << "--------------------------------------" << endl;
            cout << "Name : " << trav -> Name << endl;
            cout << "Roll No : "<< trav -> roll_no << endl;
            cout << "Marks : " << trav -> marks << endl;
            cout << "--------------------------------------" << endl;

        }
        trav = trav -> next;
    }
}


//Get Students whose Marks are Above Given Number ..
void Greatest()
{
    Node *trav = Head;
    int n;

    cout << "Enter the Range from which you want to Get : ";
    cin >> n;

    while(trav != NULL)
    {
        if(trav -> marks > n)
        {
            cout << "--------------------------------------" << endl;
            cout << "Name : " << trav -> Name << endl;
            cout << "Roll No : "<< trav -> roll_no << endl;
            cout << "Marks : " << trav -> marks << endl;
            cout << "--------------------------------------" << endl;
        }
        trav = trav -> next;
    }
}

//Get Student by Roll No ..
void Get_by_Roll()
{
    Node *trav = Head;

    int roll;
    cout << "Enter the Roll No of Student you want to get : ";
    cin >> roll;

    while(trav != NULL)
    {
        if(trav -> roll_no == roll)
        {
            cout << "--------------------------------------" << endl;
            cout << "Name : " << trav -> Name << endl;
            cout << "Roll No : "<< trav -> roll_no << endl;
            cout << "Marks : " << trav -> marks << endl;
            cout << "--------------------------------------" << endl;
        }
        trav = trav -> next;
    }
}

int main()
{
    int choice;
    
    while(1)
    {
        cout << "1 for Create Student Data\n2 for View Student Data\n3 for Students < 50 Marks\n4 for Greatest Marks\n5 for Get Student by Roll No\n6 for EXIT\nEnter your choice : ";
        cin >> choice;

        if(choice == 1)
            Create();
        if(choice == 2)
            View();
        if(choice == 3)
            Find();
        if(choice == 4)
            Greatest();
        if(choice == 5)
            Get_by_Roll();
        if(choice == 6)
            break;
    }

    return 0;
}
