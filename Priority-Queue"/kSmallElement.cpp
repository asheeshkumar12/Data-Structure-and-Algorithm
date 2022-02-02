#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> kSmallElementInArray(int arr[],int n,int k)
{
    priority_queue<int> min;
    for(int i=0;i<k;i++)
    {
        min.push(arr[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(arr[i] < min.top())
        {
            min.pop();
            min.push(arr[i]);
        }
    }
    vector<int> v;
    for(int i=0;i<k;i++)
    {
        v.push_back(min.top());
        min.pop();
    }
    return v;
}
int main()
{

    int n,k;
     cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> vect;
    cout<<"How many small number found in the given array : ";
    cin>>k;
    vect=kSmallElementInArray(arr,n,k);
    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<"  ";
    }
    cout<<endl;
     vect.clear();


}
