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

//Approach two

#include<bits/stdc++.h> 
using namespace std; 
void findMedian(int *arr, int n){
    if(n==0){
        return;
    }
    priority_queue<int> s; 
    // min heap to store the greater half elements 
    priority_queue<int,vector<int>,greater<int> > g; 
  
    int med = arr[0]; 
    s.push(arr[0]); 
  
    cout << med<<" ";
  
    // reading elements of stream one by one 
   
    for (int i=1; i < n; i++) 
    { 
        int x = arr[i]; 
  
        // case1(left side heap has more elements) 
        if (s.size() > g.size()) 
        { 
            if (x < med) 
            { 
                g.push(s.top()); 
                s.pop(); 
                s.push(x); 
            } 
            else
                g.push(x); 
  
            med = (s.top() + g.top())/2.0; 
        } 
  
        // case2(both heaps are balanced) 
        else if (s.size()==g.size()) 
        { 
            if (x < med) 
            { 
                s.push(x); 
                med = (int)s.top(); 
            } 
            else
            { 
                g.push(x); 
                med = (int)g.top(); 
            } 
        } 
  
        // case3(right side heap has more elements) 
        else
        { 
            if (x > med) 
            { 
                s.push(g.top()); 
                g.pop(); 
                g.push(x); 
            } 
            else
                s.push(x); 
  
            med = (s.top() + g.top())/2.0; 
        } 
  
        cout << med<<" ";
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
