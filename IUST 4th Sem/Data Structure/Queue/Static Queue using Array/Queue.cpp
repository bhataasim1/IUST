#include <iostream>
#define MAX 100
using namespace std;

int Queue[MAX];
int Front = 0, Rear = -1;

void Enqueue(int item)
{
    if(Rear < MAX)
        Queue[++Rear] = item;
    else
        cout << "OverFlow" << endl;
}

int Dequeue()
{
    if(Front <= Rear)
        return Queue[Front++];
    else
        return -1;
}

void View()
{
    if(Front > Rear)
        cout << "Empty" << endl;
    else{
        for(int i = Front; i <= Rear; i++)
            cout << Queue[i];
    }
}

int main()
{
    int ch, item;
    while (1)
    {
        cout << "\n1 for EnQueue\n2 for DeQueue\n3 for View\n4 for Exit\n Enter Your Choice : ";
        cin >> ch;

        if (ch == 1)
        {
            cout << "Enter the Element : ";
            cin >> item;
            Enqueue(item);
        }
        else if(ch == 2)
        {
            item = Dequeue();
            if(item == -1)
                cout << "UnderFlow" << endl;
            else
                cout << item;
        }
        else if(ch == 3)
            View();
        else if(ch == 4)
            break;
    }
    
}
