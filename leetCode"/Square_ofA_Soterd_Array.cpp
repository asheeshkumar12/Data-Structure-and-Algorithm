class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> vect;
        for(int i=0;i<nums.size();i++) {
            int a=pow(nums[i],2);
            vect.push_back(a);
        }
        sort(vect.begin(),vect.end());
        return vect;
        
    }
};
