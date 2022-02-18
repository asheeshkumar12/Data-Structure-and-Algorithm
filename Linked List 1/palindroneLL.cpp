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

Node *temp;  // Global variable dcalring
bool helperCheck(Node * h)
{
    if(h==NULL)
        return true;
  bool ans=   helperCheck(h->next) &(temp->data==h->data);
    temp=temp->next;
    return ans;
}
bool isPalindrome(Node *head)
{
    //Write your code he
    temp=head;
     return helperCheck(head);
}
