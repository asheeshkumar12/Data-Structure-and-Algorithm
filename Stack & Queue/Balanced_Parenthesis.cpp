#include<stack> 

bool isBalanced(string exp) 
{
    // Write your code herei
    stack<char> s;
    char x;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            s.push(exp[i]);
        }
        if(s.empty())
            return false;
        switch(exp[i])
        {
            case ')':
                   
                    x=s.top();
                    s.pop();
                    if(x=='}'||x==']')
                        return false;
                    break;
                    
            case '}':
                x=s.top();
                s.pop();
                if(x==')' || x==']')
                    return false;
                break;
                
            case ']':
                
                x=s.top();
                s.pop();
                if(x=='}'||x==')')
                    return false;
                break;
                
        }
    }
    return (s.empty());
        
    
    
}
