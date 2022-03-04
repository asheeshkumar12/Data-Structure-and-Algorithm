class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int sum=0;int m=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            {
                sum++;
            }else{
                m=max(m,sum);
                sum=0;
                continue;
            }
        }
        return max(m,sum);
        
    }
};
