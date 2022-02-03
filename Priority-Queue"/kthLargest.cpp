#include <iostream>
#include <vector>
using namespace std;
#include<queue>
int kthLargest(int* arr, int n, int k) {
    // Write your code here
    priority_queue<int,vector<int>,greater<int>> p;
    for(int i=0;i<k;i++)
    {
        p.push(arr[i]);
  }
    for(int i=k;i<n;i++)
    {
        if(arr[i] > p.top())
        {
            p.pop();
            p.push(arr[i]);
        }
     }
    int t;
    while(!p.empty())
    {
        if(p.size()==k)
        {
            t=p.top();
        }  
        p.pop();
    }
    return t;
}


int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << kthLargest(arr, n, k);

    delete[] arr;
}
