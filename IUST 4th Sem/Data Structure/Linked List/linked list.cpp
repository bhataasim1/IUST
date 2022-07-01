#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int main()
{
    node n1,n2,n3, n4, n5;
    n1.data = 10;
    n2.data = 20;
    n3.data = 30;
    n4.data = 40;
    n5.data = 50;
    //cout << n1.data<<endl;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    cout << n1.next -> data << endl;
    cout << n1.next ->next -> data << endl;
    cout << n1.next ->next ->next -> data << endl;
    cout << n1.next ->next ->next ->next -> data << endl;
    //cout << n1.next ->next ->next ->next->next-> data << endl;

}