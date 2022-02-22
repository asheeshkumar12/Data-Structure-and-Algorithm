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

class Queue {
	// Define the data members
    Node *head;
    Node *tail;
    int size=0;
   public:
    Queue() {
		// Implement the Constructor
        head=NULL;
        tail=NULL;
        size=0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		// Implement the getSize() function
        return size;
	}

    bool isEmpty() {
		// Implement the isEmpty() function
        return size==0;
	}

    void enqueue(int data) {
		// Implement the enqueue() function
        Node *nW=new Node(data);
        if(head==NULL)
        {
            head=nW;
            tail=nW;
        }
        else{
        tail->next=nW;
        
        tail=tail->next;}
        size++;
	}

    int dequeue() {
        // Implement the dequeue() function
        if(head==NULL)
        {
            return -1;
        }
        int t=head->data;
        size--;
        delete head;
         head=head->next;
        return t;
    }

    int front() {
        // Implement the front() function
        if(head==NULL){
            return -1;
        }
        int r=head->data;
        return r;
    }
};
