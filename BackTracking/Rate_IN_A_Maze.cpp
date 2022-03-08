/*
	Note:
	To get all the test cases accepted, make recursive calls in following order: Top, Down, Left, Right.
	This means that if the current cell is (x, y), then order of calls should be: top cell (x-1, y), 
	down cell (x+1, y), left cell (x, y-1) and right cell (x, y+1).
*/
#include<bits/stdc++.h>
using namespace std;
void printSolution(int **solution,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            cout<<solution[i][j]<<" ";
        }
    }
    cout<<endl;
}
void mazeHelper(int maze[][20],int n,int** solution,int x,int y) {
    if(x==n-1&&y==n-1){
        solution[x][y]=1;
        printSolution(solution,n);
        solution[x][y]=0;
        return;
    }
    if(x>=n||x<0||y>=n||y<0||maze[x][y]==0||solution[x][y]==1){
        return;
    }
    solution[x][y]=1;
    
    
    mazeHelper(maze,n,solution,x-1,y);
    mazeHelper(maze,n,solution,x+1,y);
    mazeHelper(maze,n,solution,x,y-1);
    mazeHelper(maze,n,solution,x,y+1);
    solution[x][y]=0;
}

void rateInAMaze(int maze[][20],int n){
    int **solution=new int*[n];
    for(int i=0;i<n;i++){
        solution[i]=new int[n];
    }
    // Initialization of solution 2D array with 0
    for(int i=0; i<n; i++){
        memset(solution[i], 0, n*sizeof(int));
    }
    mazeHelper(maze,n,solution,0,0);
}


int main() {

	// Write your code here
    int n;
    cin>>n;
   int maze[20][20];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
          }
       }
    rateInAMaze(maze,n);
	return 0;
}
