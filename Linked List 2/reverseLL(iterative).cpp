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

Node *reverseLinkedList(Node *head) {
    // Write your code here
    if(head==NULL)
        return head;
    
    
    Node *prev=NULL,*next=NULL;
    Node *curr=head;
    //prev=head->next;
   // head->next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    
        
    }
    //head=prev;
    return prev;
}
