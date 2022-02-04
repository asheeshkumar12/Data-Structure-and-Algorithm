
#include <iostream>
#include <vector>
using namespace std;
#include<queue>

int main() {
    int k;
    cin >> k;

    vector<vector<int> *> input;

    for (int j = 1; j <= k; j++) {
        int size;
        cin >> size;
        vector<int> *current = new vector<int>;

        for (int i = 0; i < size; i++) {
            int a;
            cin >> a;
            current->push_back(a);
        }

        input.push_back(current);
    }

    vector<int> output = mergeKSortedArrays(input);

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    return 0;
}

vector<int> mergeKSortedArrays(vector<vector<int>*> input) {
    // Write your code here
    priority_queue<int,vector<int>, greater<int> > pq;
    
    for(int i=0;i<input.size();i++)
    {
        vector<int> v;
       copy(input[i]->begin(), input[i]->end(), back_inserter(v));
        for(int j=0;j<v.size();j++)
        {
            pq.push(v[j]);
        }
    }
    vector<int> x;
    while(!pq.empty())
    {
        x.push_back(pq.top());
        pq.pop();
    }
    return x;
}
