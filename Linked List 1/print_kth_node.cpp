void printIthNode(Node *head, int i)
    
{
    int count=-1;
    Node* temp=head;
    while(temp!=NULL)
    {
        count++;
        if(count==i)
        {
            cout<<temp->data<<endl;
        }
        temp=temp->next;
    }
    //Write your code here
    
}
