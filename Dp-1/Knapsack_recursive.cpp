#include<iostream>
using namespace std;
#include "classknapsack.h"
int main(){
    int n;
    cin>>n;
    int wt[n],val[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    int w;
    cin>>w;
     Knapsack obj=new Knapsack();
    cout<<obj.knapsackp(wt,val,w,n)<<endl;
    return 0;

}



class Knapsack
{
    public:
    int knapsackp(int wt[],int val[],int w,int n){
        if(n==0 || w==0)
            return 0;
        if(wt[n-1]<=w){
            return max(val[n-1]+knapsackp(wt,val,w-wt[n-1],n-1),knapsackp(wt,val,w,n-1));
        }
        else if(wt[n-1]>w){
            return knapsackp(wt,val,w,n-1);
        }
    }

};



