#include<queue>
#include<vector>
 priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
void insertNum(int data)
{
    if(maxHeap.empty() || maxHeap.top()>=data)
    {
        maxHeap.push(data);
    }
    else
    {
        minHeap.push(data);
    }
    if(maxHeap.size() > minHeap.size())
    {
        minHeap.push(maxHeap.top());
        maxHeap.pop();
    }
    else if(maxHeap.size() < minHeap.size())

    {
        maxHeap.push(minHeap.top());
        minHeap.pop();
    }
}

int median()
{
    if(maxHeap.size()==minHeap.size())
    {
        return (maxHeap.top()+minHeap.top())/2;
    }
    if(maxHeap.size() < minHeap.size())
      return minHeap.top();
    else
        return maxHeap.top();
}
void findMedian(int *arr, int n)
{
    // Write your code here
   
    for(int i=0;i<n;i++)
    {
        insertNum(arr[i]);
        cout<<median()<<" ";
    }
    
}
#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    findMedian(arr,n);

    delete[] arr;
}
