/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    
    
    /*
    if(head1==)
    
    
    
    */
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    
    
    Node *fh=NULL,
    *ft=NULL;
    
    while(head1!=NULL && head2!=NULL )/*&&(head1->next!=NULL || head2->next!=NULL))*/
    {
        if(head1->data <= head2->data)
        {
            if(fh == NULL) {
                fh = head1;
                ft = fh;
            } else {
                ft->next=head1;
                ft=head1;
            }
            head1=head1->next;
        }
       else
        {
            if(fh == NULL) {
                fh = head2;
                ft = fh;
            } else {
                ft->next=head2;
                ft=head2;
            }
            head2=head2->next;
        }
        // return ft->next=ft;
            
    }
    if(head2==NULL)
    {
        ft->next=head1;
    }
    else
    {
        ft->next=head2;
    }
    return fh;
}
