int length(Node *head)
{
    //Write your code here
    int count=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

// recursive solution 
int length(Node *head) {
    // Write your code here
    int count=0;
    if(head==NULL)
        return 0;
    else 
         return 1+length(head->next);
}
