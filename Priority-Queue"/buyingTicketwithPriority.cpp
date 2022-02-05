#include<queue>
int buyTicket(int *arr, int n, int k) {
    // Write your code here
    priority_queue<int> pq;
    queue<int> p;
    for(int i=0;i<n;i++)
    {
        p.push(i);
        pq.push(arr[i]);
    }
    int t=0;
    while(!p.empty())
    {
    
        if(arr[p.front()]==pq.top())
        {
           
            t++;
            if(p.front()==k)
            {
                break;
            }
             p.pop();
            pq.pop();
       }
        
        else
        {
            int temp=p.front();
            p.pop();
            p.push(temp);
        }
    }
    return t;
    
}
#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << buyTicket(arr, n, k);

    delete[] arr;
}
