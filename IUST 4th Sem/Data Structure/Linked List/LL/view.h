//View Linked List
void view()
{
    struct node *trav;

    trav = head;

    while(trav != NULL)
    {
        cout << trav -> data << endl;
        trav = trav -> next;
    }
}
