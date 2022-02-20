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

Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
    Node *temp1=head;
    Node *temp2=head;
    while(i-- >0){
        temp1=temp1->next;
    }
    while(j-- >0){
        temp2=temp2->next;
    }
    int p=temp1->data;
    temp1->data=temp2->data;
    temp2->data=p;
    return head;
}
