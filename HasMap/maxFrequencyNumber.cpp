#include<iostream>
#include<unordered_map>
using namespace std;
int maxFrq(int arr[],int n)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        if(m.count(arr[i])>0)
        {
            m[arr[i]]+=1;
        }
        m[arr[i]]=1;
    }
    int frq=arr[0];
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]] > m[frq])
        {
            frq=arr[i];
        }
    }
    return frq;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<maxFrq(arr,n)<<endl;
    }
}
