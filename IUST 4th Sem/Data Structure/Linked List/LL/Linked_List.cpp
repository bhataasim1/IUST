/*
Name Aasim Ashraf;
Roll No : CSE-20-LE-63;
Sem : 4th;
*/

#include<iostream>
#include<create.h>
#include<view.h>
#include<Delete.h>
#include<insert.h>
using namespace std;

struct node {
    int data;
    struct node *next;
};
struct node *head=NULL, *tail=NULL, *trav=NULL;

int main()
{
    int ch;
    while (1)
    {
        cout << "Enter the Choice\n1 for create\n2 for View\n3 for Insert\n4 for Delete\n5 for Exit\nEnter the Choice : ";
        cin >> ch;

        if(ch == 1) create();
        if(ch == 2) view();
        if(ch == 3) insert();
        if(ch == 4) Delete();
        if(ch == 5) break;
    }
}
