#include <iostream>
using namespace std;

typedef struct node {
    int data;
    struct node *Left, *Right; 
}Node;

Node *Root = NULL, *Temp, *Trav;

void Create()
{
    int n;
    cout << "Enter the Number of Nodes : ";
    cin >> n;

    for(int i = 0; i <= n; i++)
    {
        Temp = (Node *)malloc(sizeof(Node));

        cout << "Enter the Elements : ";
        cin >> Temp -> data;

        Temp -> Left = Temp -> Right = NULL;

        if(Root == NULL)
            Root = Temp;
        else{
            Trav = Root;
            while (1)
            {
                if(Temp -> data < Trav -> data)
                {
                    if(Trav -> Left == NULL) {
                        Trav -> Left = Temp;
                        break;
                    }
                    else
                        Trav = Trav -> Left;
                }
                else if(Temp -> data > Trav -> data)
                {
                    if(Trav -> Right == NULL) {
                        Trav -> Right = Temp;
                        break;
                    }
                    else
                        Trav = Trav -> Right;
                }
                else
                    cout << "Duplicate Items are Not Allowded" << endl;
            }
            
        }
    }
}

void Pre_Order(Node *Root)
{
    if(Root != NULL)
    {
        cout << Root -> data << " ";
        Pre_Order(Root -> Left);
        Pre_Order(Root -> Right);
    }
}

void In_Order(Node *Root)
{
    if(Root != NULL)
    {
        In_Order(Root -> Left);
        cout << Root -> data << " ";
        In_Order(Root -> Right);
    }
}

void Post_Order(Node *Root)
{
    if(Root != NULL)
    {
        Post_Order(Root -> Left);
        Post_Order(Root -> Right);
        cout << Root -> data << " ";
    }
}

void Search_Node()
{
    int item;
    cout << "Enter Node to Find : ";
    cin >> item;
    Trav = Root;
    int Flag = 0;
    while (Trav != NULL)
    {
        if(Trav -> data == item){
            cout << "Found in BST" << endl;
            Flag = 1;
            break;
        }
        else if(item < Trav ->data)
            Trav = Trav -> Left;
        else if(item > Trav -> data)
            Trav = Trav -> Right;
    }
    if(Flag == 0)
        cout << "Not Found" << endl;
    
}

void Find_Max()
{
    Trav = Root;
    while (Trav -> Right != NULL)
    {
        Trav = Trav ->Right;
    }
    cout << Trav ->data << endl;
    
}

void Find_Min()
{
    Trav = Root;
    while (Trav -> Left != NULL)
    {
        Trav = Trav -> Left;
    }
    cout << Trav -> data << endl;
    
}

int main()
{
    int ch;
    while (1)
    {
        cout << "1 for Create\n2 for Pre-Order\n3 for In-Order\n4 for Post-Order\n5 for Search Node\n6 for Find Max\n7 for Find Min\n8 for Exit\nEnter your Choice : ";
        cin >> ch;
        if(ch == 1)
            Create();
        else if(ch == 2)
            Pre_Order(Root);
        else if(ch == 3)
            In_Order(Root);
        else if(ch == 4)
            Post_Order(Root);
        else if(ch == 5)
            Search_Node();
        else if(ch == 6)
            Find_Max();
        else if(ch == 7)
            Find_Min();
        else if(ch == 8)
            break;
    }
    return 0; 
}
