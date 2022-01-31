#include<iostream>
using namespace std;
void inpaceHeapSort(int arr[],int n)
{
    // build min heap 
    for(int i=1;i<n;i++)
    {
        int chiildI=i;
        while(chiildI > 0)
        {
            int parenI=(chiildI-1)/2;
            if(arr[chiildI]< arr[parenI])
            {
                int temp=arr[chiildI];
                arr[chiildI]=arr[parenI];
                arr[parenI]=temp;

            }
            else{
                break;
            }
            chiildI=parenI;
        }
    }

    // applying the sorting using remove min element by using down heapify 

    int size=n;

    while(size >1)
    {
        int t=arr[0];
        arr[0]=arr[size-1];
        arr[size-1]=t;

        size--;

        // down heapify 

        int pi=0;
        int leftI=pi*2+1;
        int rightI=2*pi+2;
        while(leftI < size)
        {
            int minIndex=pi;
            if(arr[minIndex] > arr[leftI])
            {
                minIndex=leftI;

            }
            if(rightI < size && arr[minIndex]> arr[rightI])
            {
                minIndex=rightI;
            }
            if(minIndex==pi)
            {
                break;
            }
             int t=arr[minIndex];
             arr[minIndex]=arr[pi];
            arr[pi]=t;

            pi=minIndex;
            leftI=pi*2+1;
            rightI=pi*2+2;

        }


    }
}
int main()
{
    int arr[]={6,3,4,13,12,42,34,43,53,46,54};
    inpaceHeapSort(arr,11);
    for(int i=0;i<11;i++)
    {
        cout<<arr[i]<<"  ";
    }
    
}
