// insert a node recursive 
Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    if(i==0 ){   // if node is presemt at position first
        Node* newNode=new Node(data);
        newNode->next=head;
        head=newNode;
        return head;
    }
    if(head==NULL)
        return head;
    
    Node *newNode = insertNode(head->next,i-1,data);
    head->next=newNode;    // connect to head to new Node 
   return head;
    
}
