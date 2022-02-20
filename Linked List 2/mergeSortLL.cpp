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
     if(head==NULL)
        return head;
    
	//Write your code here
    Node *slow=head;
    Node *fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
     return slow;
 }

// heper function to create for two partial linked list;
Node *merge(Node *firstNode,Node *secondNode) {
    Node *merged = NULL;
    Node *temp = NULL;
    
    //merged is equal to temp so in the end we have the top Node.
   // merged = temp;
 
     if(firstNode->data<=secondNode->data) {
            merged=firstNode;
            temp=firstNode;
         firstNode=firstNode->next;
        }
         
        else {
            merged=secondNode;
            temp=secondNode;
            secondNode = secondNode->next;
        }
    //while either firstNode or secondNode becomes NULL
    while(firstNode != NULL && secondNode != NULL) {
     
        if(firstNode->data<=secondNode->data) {
            temp->next = firstNode;
            firstNode = firstNode->next;
        }
         
        else {
            temp->next = secondNode;
            secondNode = secondNode->next;
        }
        temp = temp->next;
    }
    //any remaining Node in firstNode or secondNode gets inserted in the temp List
    while(firstNode!=NULL) {
        temp->next = firstNode;
        firstNode = firstNode->next;
        temp = temp->next;
    }
 
    while(secondNode!=NULL) {
        temp->next = secondNode;
        secondNode = secondNode->next;
        temp = temp->next;
    }
    //return the head of the sorted list
    //return merged->next;
    return merged;
}
Node *mergeSort(Node *head)
{
    if(head==NULL || head->next==NULL)
        return head;
    Node *p=NULL;
    Node *head2=NULL;
    p=midPoint(head);
    head2=p->next;
    p->next=NULL;
    Node *fh= merge(mergeSort(head),mergeSort(head2));
    return fh;
    
    
	//Write your code here
    
    

    
    
}
