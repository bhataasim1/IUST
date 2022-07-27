//Creating Linked List
void create()
{
    int n;
    struct node *temp;

    cout << "Enter the Number of Nodes to Insert : ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        temp = (struct node *) malloc(sizeof(struct node));
        
        cout << "Enter the Elements : ";
        cin >> temp -> data;

        temp -> next = NULL;

        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else {
            tail -> next = temp;
            tail = temp;
        }
    }
}
