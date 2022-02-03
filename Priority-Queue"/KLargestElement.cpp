#include<iostream>
using namespace std;
#include<queue>
#include<vector>

vector<int> kLargestElementInArray(int input[],int n,int k)
{
     priority_queue<int,vector<int> ,greater<int> > max;
    for(int i=0;i<k;i++)
    {
        max.push(input[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(input[i] > max.top())
        {
              max.pop();
              max.push(input[i]);
        }
    } 
    vector<int> v;
    for(int i=0;i<k;i++)
    {
        v.push_back(max.top());
        max.pop();
     }
    return v;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],k;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        vector<int> l=kLargestElementInArray(arr,n,k);
       
        for(int i=0;i<l.size();i++)
        {
            cout<<l[i]<<" ";
        }

    }
}
