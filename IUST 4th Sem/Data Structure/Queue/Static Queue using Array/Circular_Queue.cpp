#include <iostream>
#define MAX 100
using namespace std;

int Queue[MAX];
int Front = 0, Rear = -1;
int Count = 0;

void Enqueue(int item)
{
    if(Count == MAX)
        cout << "OverFlow";
    else{
        Rear = (Rear + 1) % (MAX - 1);
        Queue[Rear] = item;
        Count++;
    }
}

int Dequeue()
{
    if(Count == Rear)
        cout << "UnderFlow";
    else{
        int item = Queue[Front];
        Front = (Front + 1) % (MAX - 1);
        return item;
    }
}

void View()
{
    if(Count == 0)
        cout << "Empty" << endl;
    else{
        int temp = Front;
        for(int i = 0; i < Count; i++){
            cout << Queue[temp];
            temp = (temp + 1) % (MAX - 1);
        }
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
