#include<queue>
void reverseQueue(queue<int> &input) {
	// Write your code here
    if(input.empty())
    {
        return; 
    }
    else
    {
        int item=input.front();
        input.pop();
        reverseQueue(input);
        input.push(item);
        return;
    }
}
