
	// Write your code here
    #include<bits/stdc++.h>
int* stockSpan(int *price, int size) {
	// Write your code here
    int *si=new int[size];

    stack<int> s;
    si[0]=1;
    s.push(price[0]);
    for(int i=1;i<size;i++){
        if(price[i]>s.top()){
            int c=1;
            vector <int> v;
            while(!s.empty() && price[i]>s.top()){
                c++;
                v.push_back(s.top());
                s.pop();
            }
            si[i]=c;
            for(int j=v.size()-1;j>=0;j--)
                s.push(v[j]);
            s.push(price[i]);
        }
        else{
            si[i]=1;
            s.push(price[i]);
        }
    }
    return si;



}
