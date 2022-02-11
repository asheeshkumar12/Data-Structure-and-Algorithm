#include<unordered_map> 

int pairSum(int *arr, int n) {
	// Write your code here
    int count=0;
    unordered_map<int,int> map1;
    for(int i=0;i<n;i++)
    {
        if(map1.count(-arr[i])>0)
        {
            count+=map1[-arr[i]];
           // map1.erase(-arr[i]);
            
        }
        if(map1.count(arr[i])>0)
        {
            map1[arr[i]]+=1;
        }
        else
        {
             map1[arr[i]]=1;
        }
         
     }
    
    return count;
    
}
