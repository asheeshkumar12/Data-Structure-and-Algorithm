void insertatBottom(stack<int> &input,int item)
{
     if (input.empty())
    {
        input.push(item);
         return;
        
    }
    
     int top = input.top();
    input.pop();
    insertatBottom(input, item);
     input.push(top);
 
}
void reverseStack(stack<int> &input, stack<int> &extra) {
    
    
    //Write your code here
    if(input.size()<=1)
        return;
    if(!input.empty())
    {
        
    
       int temp=input.top();
        input.pop();
        reverseStack(input,extra);
        insertatBottom(input,temp);
        
    }
    
    
}
