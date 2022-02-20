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

Node *evenAfterOdd(Node *head)
{
    if(head==NULL)
        return head;
	//write your code here
   Node *oh=NULL,*ot=NULL,*eH=NULL,*eT=NULL;
        while(head!=NULL)
        {
            if((head->data)&1==1)
            {
                if(oh==NULL &&ot==NULL)
                {
                    oh=head;
                    ot=head;
                }
                else
                {
                    ot->next=head;
                    ot=ot->next;
                }
            }
            else
            {
                if(eH==NULL && eT==NULL)
                {
                    eH=head;
                    eT=head;
                }
                else{
                    eT->next=head;
                    eT=eT->next;
                }
            }
          head=head->next;
        }
    if (oh) {
		ot->next = eH; 
	}
	if (eH) {
		eT->next = NULL;
	}

    if (oh == NULL) {
		return eH;
	}

	return oh;

}
