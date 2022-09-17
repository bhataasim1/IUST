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


void in_Order(Node *Root)
{
    if(Root != NULL)
    {
        in_Order(Root -> Left);
        cout << Root -> data << " ";
        in_Order(Root -> Right);
    }
}

void Mirror_BST(Node *Root)
{
    if(Root != NULL)
    {
        Mirror_BST(Root ->Left);
        Mirror_BST(Root -> Right);

        //Swapping 

        Temp = Root ->Left;
        Root ->Left = Root -> Right;
        Root -> Right = Temp;
    }
}


int main()
{
    Create();

    cout << "In-Order Transversal = ";
    in_Order(Root);
    
    
    Mirror_BST(Root);
    cout << "\nMirror of In-Order = ";
    in_Order(Root);

    return 0; 

}
