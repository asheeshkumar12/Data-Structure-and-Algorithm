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

Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
   Node *t;
    int count;
    Node *curr=head;
    if(head==NULL)
    return head;
   
        if(M==0)
            return NULL;
        if(N==0)
            return head;
       
       while(curr!=NULL){
       
         for(count=1;count<M && curr!=NULL;count++)
        {
            curr=curr->next;
        }
       
 if(curr==NULL)
            return head;
        t=curr->next;
        for(count=1;count<=N && t!=NULL;count++)
        {
            t=t->next;
        }
        curr->next=t;
        curr=t;
   
}
        return head;

}
