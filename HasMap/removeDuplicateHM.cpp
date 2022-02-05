#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> removeDuplicate(int *a,int size)
{
    vector<int> vvip;
    unordered_map<int,bool> mpp1;
    for(int i=0;i<size;i++)
    {
        if(mpp1.count(a[i]) >0)  //check key is present is not usint O(1) time take
        {
            continue;
        }
        mpp1[a[i]]=true;  //inserting in the mpp1 
        vvip.push_back(a[i]);

    }
    return vvip;
}
int main()
{
    int a[]={1,2,1,3,4,3,4,5,6,7,6,7,8,5,9};
    vector<int> maya=removeDuplicate(a,15);
    for(int i=0;i<maya.size();i++)
    {
        cout<<maya[i]<<" ";
    }
}
