#include <iostream>
#include <climits>
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

int Height_of_BST(Node *Root)
{
    if(Root == NULL)
        return -1;
    return 1+max(Height_of_BST(Root ->Left), Height_of_BST(Root ->Right));
    
}

int main()
{
    Create();
    
    //cout << "Even Nodes in BST : ";
    cout << "Heigth of BST = " << Height_of_BST(Root);

    return 0; 

}
