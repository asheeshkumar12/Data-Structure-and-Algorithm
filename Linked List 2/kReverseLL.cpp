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

Node *kReverse(Node *head, int k)
{
	//Write your code here
    if(k==0){
        return head;
    }
    Node*current=head;
    Node*next=NULL;
    Node*prev=NULL;
    int count=0;
    while(current !=NULL && count<k){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        count++;
    }
    if(next!=NULL){
        head->next=kReverse(next,k);
    }
    return prev;
}
