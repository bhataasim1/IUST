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

void Even(Node *Root)
{
    if(Root != NULL)
    {
        Even(Root ->Left);
        if(Root -> data % 2 == 0)
            cout << Root -> data << " ";
        Even(Root -> Right);
    }
    
}

void Odd_Nodes(Node *Root)
{
    if(Root != NULL)
    {
        Odd_Nodes(Root -> Left);
        if(Root ->data % 2 != 0)
            cout << Root ->data << " ";
        Odd_Nodes(Root ->Right);
    }
}

int main()
{
    Create();
    
    cout << "Even Nodes in BST : ";
    Even(Root);
    cout << "Odd Nodes in BST : ";
    Odd_Nodes(Root);

    return 0; 

}
