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


int Check_Prime(int n)
{
    if(n < 2)
        return 0;
    else if(n > 2)
    {
        if(n % 2 == 0)
            return 0;
        for(int i = 3; i < n; i++){
            if(n % i == 0)
                return 0;
        }
    }
    return 1;
}

void isPrime(Node *Root)
{
    if(Root != NULL)
    {
        if(Check_Prime(Root ->data) == 1)
            cout << Root ->data << " ";
        isPrime(Root ->Left);
        isPrime(Root ->Right);
    }
}

int main()
{
    Create();
    
    //cout << "Even Nodes in BST : ";
    isPrime(Root);

    return 0; 

}
