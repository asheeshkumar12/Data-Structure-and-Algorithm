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



// recursive solution of delete a node


Node *deleteNodeRec(Node *head, int pos) {
    
	//Write your code here
    if(pos==0 && head!=NULL)
    {
        Node *temp=head;
        head=head->next;
        delete temp;
        return head;
        
    }
    if(head==NULL)
         return head;
    Node *a=deleteNodeRec(head->next,pos-1);
    head->next=a;
    return head;
}
