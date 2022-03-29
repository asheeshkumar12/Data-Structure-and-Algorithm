#include<bits/stdc++.h>
using namespace std;
int n,k,c;
void subSetSumCount(int arr[],int i,int currSum) {
    if(currSum==k){
        c++;
        return;
    }
    if(currSum < k&& i<n)
    {
        subSetSumCount(arr,i+1,currSum+arr[i]);
        subSetSumCount(arr,i+1,currSum);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        c=0;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        subSetSumCount(arr,0,0);
       cout<<c<<endl;

    }
}
