class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        int v[n];
       int index=0;
       for(int i=0;i<n;i++)
        {
            if(arr[index]!=0){
               v[i]=arr[index];
                
            }else{
                v[i]=0;
                if(i+1<n){
                    v[i+1]=0;
                    i++;
                }
            }
            index++;
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=v[i];
        }
        
    }
};
