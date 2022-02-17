Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    if(head==NULL)
        return head;
    

    

    
    if(pos==0)
    {
        Node *temp=head;
        head=head->next;
        delete temp;
        return head;
        
    }
    Node *temp=head;
    Node *prev=NULL;
    int i=0;
    while(i!=pos && temp!=NULL)
    {
        
        
            prev=temp;
            temp=temp->next;
            i++;
            
            
        
        
    }
    if(temp!=NULL){
        prev->next=temp->next;
        delete temp;
    }
    return head;
}
