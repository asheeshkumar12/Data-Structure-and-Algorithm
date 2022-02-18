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

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    int c=-n;
    if(head==NULL)
        return head;
    Node *temp=head;
    Node *tail=head;
    
    while(temp->next!=NULL)
    {
        if(c>=0)
        {
            tail=tail->next;
        }
        
        temp=temp->next;
        c++;
    }
    //connect 
    
    temp->next=head;
    head=tail->next;
    tail->next=NULL;
    return head;
  /*  int i=0;
    while(tail!=NULL && c-n>i)
    {
        tail=tail->next;
        i++;
    }
    Node *a=tail;
    */
    
}
