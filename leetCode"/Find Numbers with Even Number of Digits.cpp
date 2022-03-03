class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int digit=0,s=nums[i];
            while(s>0){
                digit++;
                s/=10;
            }
            if(digit%2==0){
                sum++;
            }
        }
        return sum;
        
    }
};
