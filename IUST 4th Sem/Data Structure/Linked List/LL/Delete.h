//Delete any Element from Linked List
void Delete()
{
    int item;
    struct node *temp;
    cout << "Enter the Node to Delete : ";
    cin >> item;

    //Deleting Head
    if(head -> data == item)
    {
        temp = head -> next;
        free(temp);
    }
    else
    {
        trav = head;
        while (trav -> next ->data != item)
        {
            trav = trav -> next;
            temp = trav -> next;
        }

        if(trav -> next == tail)
        {
            trav -> next = NULL;
            free(temp);
        }
        else
        {
            trav -> next = trav -> next -> next;
            free(temp);
        }
        
    }
}
