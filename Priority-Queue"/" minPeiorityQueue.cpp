#include <vector>

class PriorityQueue
{
  
 std::vector<int> pq;

public:
    PriorityQueue()
    {

    }
    bool isEmpty()
    {
        return pq.size()==0;
    }
    int getSize()
    {
        return pq.size();
    }
    int getMin()
    {
        if(isEmpty())
        {
            return -1;
        }
        return pq[0];
    }
    void insert(int data)
    {
        pq.push_back(data);
        int childI=pq.size()-1;
        while(childI>0)
        {
            int parentI=(childI-1)/2;
            if(pq[childI] < pq[parentI])
            {

                int  temp=pq[childI];
                pq[childI]=pq[parentI];
                pq[parentI]=temp;
            }
            else
            {
                break;
            }
            childI=parentI;
        }
    }
    int removeMin()
    {

        if(isEmpty())
        {
            return 0;
        }
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        int parentIndex=0;
        int leftIndex=parentIndex*2+1;
        int rightIndex=parentIndex*2+2;

        while(leftIndex < pq.size())
        {

            int minIndex=parentIndex;
            if(pq[minIndex] > pq[leftIndex])
            {
                minIndex=leftIndex;
            }
            if(rightIndex < pq.size() && pq[rightIndex] < pq[minIndex])
            {
                minIndex=rightIndex;
            }
            if(minIndex==parentIndex)
            {
                break;
            }
            int temp=pq[minIndex];
            pq[minIndex]=pq[parentIndex];
            pq[parentIndex]=temp;

            parentIndex=minIndex;
            leftIndex=parentIndex*2+1;
            rightIndex=parentIndex*2+2;
        }
        return ans;
    }
};

#include<iostream>
#include "prioerity.cpp"
using namespace std;
int main()
{
    PriorityQueue p;
    p.insert(100);
    p.insert(10);
    p.insert(109);
    p.insert(90);
    p.insert(11);
    p.insert(9);
    p.insert(2);
    p.insert(7);

    cout<<"size of vector: "<<p.getSize()<<endl;

    cout<<"Minimum element : "<<p.getMin()<<endl;

    while(p.getSize()!=0)
    {
        cout<<"Next MIN: "<<p.removeMin()<<endl;
    }
    return 0;
}

