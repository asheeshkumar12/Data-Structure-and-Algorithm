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

Node *midPoint(Node *head)
{
    // Write your code here
    if(head==NULL)
        return head;
    Node *slow=head;
    
    Node *fast=slow->next;
    while(fast!=NULL && fast->next!=NULL)
          {
           slow=slow->next;
           if(fast->next!=NULL){
               
               fast=fast->next->next;
               }
           }
          return slow;
        
    
}
