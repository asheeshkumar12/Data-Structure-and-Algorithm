#include <iostream>
using namespace std;

bool isMaxHeap(int input[], int n) {
    // Write your code her
    int pi=0; int flag=1;
    while(pi <=(n-1)/2)
    {
         int leftc=2*pi+1;
         int rightc=2*pi+2;
        if(n>leftc&& input[leftc] > input[pi])
        {
            flag=0;
        }
        if(n>rightc&& input[rightc] > input[pi])
        {
            flag=0;
        }
         pi++;
      }
    return flag;
   
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (isMaxHeap(arr, n) ? "true\n" : "false\n");

    delete[] arr;
}
