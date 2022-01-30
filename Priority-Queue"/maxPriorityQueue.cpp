#include<vector>
class PriorityQueue {
    // Declare the data members here
    std::vector<int> pq;

   public:
    PriorityQueue() {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element) {
        // Implement the insert() function here
        pq.push_back(element);
        int childI=pq.size()-1;
        while(childI >0)
        {
            int parentI=(childI-1)/2;
            if(pq[childI]> pq[parentI])
            {
                int temp=pq[childI];
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

    int getMax() {
        // Implement the getMax() function here
        if(isEmpty())
        {
            return 0;
        }
        return pq[0];
        
    }

    int removeMax() {
        // Implement the removeMax() function here
        if(isEmpty())
        {
            return 0;
        }
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        
        int parentI=0;
        int leftCI=2*parentI+1;
        int rightCI=2*parentI+2;
        
        while(leftCI < pq.size())
        {
            int minIndex=parentI;
           if(pq[minIndex] < pq[leftCI])
           {
               minIndex=leftCI;
           }
            
           if(rightCI < pq.size() && pq[rightCI] > pq[minIndex])
           {
               minIndex=rightCI;
           }
            if(minIndex==parentI)
            {
                break;
            }
            int temp=pq[minIndex];
            pq[minIndex]=pq[parentI];
            pq[parentI]=temp;
            
            
            parentI=minIndex;
            leftCI=2*parentI+1;
            rightCI=2*parentI+2;

        }
        return ans;
        
    }

    int getSize() { 
        // Implement the getSize() function here
        if(isEmpty())
        {
            return 0;
        }
        return pq.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here
        return pq.size()==0;
    }
};


#include<iostream>
#include "maxPriorityClass.h"
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

    cout<<"Max element : "<<p.getMax()<<endl;

    while(p.getSize()!=0)
    {
        cout<<"Next max : "<<p.removeMax()<<endl;
    }
    return 0;
}
