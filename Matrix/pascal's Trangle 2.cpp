class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vect(rowIndex+1,1);
        vect[0]=1;
        for (int i=1;i<rowIndex;++i)
        {
         for(int j=i;j>0;--j)
         {
             vect[j]+=vect[j-1];
         }
        }
        return vect;
        
    }
};
