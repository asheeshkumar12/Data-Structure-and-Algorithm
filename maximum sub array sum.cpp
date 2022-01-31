class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxS=INT_MIN,currS=0;
        for(int i=0;i<nums.size();i++)
        {
            currS+=nums[i];
            maxS=max(maxS,currS);
            if(currS<0)
            {
                currS=0;
            }
            
       }
        return maxS;
        
        
    }
};
