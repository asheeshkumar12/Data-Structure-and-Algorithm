class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        
        
        // time complexity is O(n*(n-1));
        
        int arr[n+1];
        arr[0]=1;
        for(auto i=1;i<=n;i++)
        {
            int sum=9;
            int loop=i-1;
            int mun=9;
            while(loop>0 && mun>=1)
            {
                sum*=mun;
                mun--;
                loop--;
            }
            arr[i]=arr[i-1]+sum;
         }
        return arr[n];
        
    }
};

??second aproach 

{
 int asn=10;
 int s=9;
 int curr=9;
 while(n-->1 &&s>=1)
 {
 curr*=(s--);
 ans+=curr;

}
return ans;
