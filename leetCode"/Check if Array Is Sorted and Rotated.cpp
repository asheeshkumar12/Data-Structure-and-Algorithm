class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int flag=0;  // flag is a counter variable that are used to maintain indicate the unsored roteted array
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]>nums[i])
                flag++;
         }
        if(nums[n-1]>nums[0])
            flag++;
        return flag<=1;
        
    }
};
