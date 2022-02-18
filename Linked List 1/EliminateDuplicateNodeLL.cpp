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

Node *removeDuplicates(Node *head)
{
    //Write your code here
    if(head==NULL)
        return head;
    Node *temp=head;
    while(temp->next!=NULL  && temp!=NULL)
    {
        if(temp->data==temp->next->data)
        {
           // Remove Duplicates 
            temp->next=temp->next->next;
            
        }
        else {
                        temp=temp->next;

        }
    }
    return head;
    
}
