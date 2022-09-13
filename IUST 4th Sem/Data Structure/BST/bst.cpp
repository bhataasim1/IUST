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

int main()
{
    Create();
    
    cout << "Pre_Order Transverse " << endl;
    Pre_Order(Root);

    cout << "\nIn_Order Traverse " << endl;
    In_Order(Root);

    cout << "\nPost_Order " << endl;
    Post_Order(Root);

    return 0; 

}
