int findNode(Node *head, int n){
    // Write your code here.
    if(head==NULL)
        return -1;
    int i=0;
        Node *temp=head;

    while(temp!=NULL)
    {
        if(temp->data==n)
            return i;
        
             
        else 
          temp=temp->next;
          i++;
        
    }
    if(temp==NULL)
       return -1;

    
    
}
