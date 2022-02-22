/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/


class Stack {
	// Define the data members
    Node *head;
    int size;
   public:
    Stack() {         
        head=NULL;
        size=0;
        
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
      return size;       
        
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        if(head==NULL)
            return true;
        return false;
        
        
    }

    void push(int element) {
        // Implement the push() function
        Node *newNode=new Node(element);
          if(head==NULL)
             { 
               head=newNode;
             }
         else{
              newNode->next=head;
              head=newNode;
             }
        size++;
        
        
    }

    int pop() {
        // Implement the pop() function
        if(head==NULL)
            return -1;
         int p=head->data;
        Node *t=head;
        head=head->next;
        delete t;
        size--;
        
        return p;
        
    
        
        
    }

    int top() {
        // Implement the top() function
        if(isEmpty())
            return -1;
        
        return head->data;
        
        
        
    }
};
