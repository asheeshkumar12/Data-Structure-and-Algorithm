class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        priority_queue<int> max1; // craete max heap 
        priority_queue<int,vector<int>,greater<int>> max2; // minHeap create
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==1)
            {
             max1.push(nums[i]);
                }
          else
          {
              max2.push(nums[i]);
          }
        }
        vector<int> v;
        while(!max1.empty() || !max2.empty())
        {
            if(max2.size()>0)  // first pop() in min heap
            {
                v.push_back(max2.top());
                max2.pop();
            
            }
            if(max1.size()>0) // second pop() by maxheap
            {
            v.push_back(max1.top());
            max1.pop();
            }  
        }
        return v;
        
    }
};
