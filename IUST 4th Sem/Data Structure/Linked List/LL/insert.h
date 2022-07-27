//Inster Element in Linked List
void insert()
{
    int value;
    struct node *trav, *temp;
    temp = (struct node *) malloc (sizeof(struct node));

    temp -> next = NULL;

    cout << "Enter the Value you want to Insert : ";
    cin >> temp -> data;

    cout << "Enter the Value After which you want to Insert : ";
    cin >> value;

    trav = head;

    while (trav -> data != value)
    {
        trav = trav -> next;
        temp -> next = trav -> next;
        trav -> next = temp;
    }
}
