#include<iostream>
#include<unordered_map>
using namespace std;
#include<string>
#include<vector>
int main()
{
    unordered_map<string,int> mp;
    mp["abs"]=1;
    mp["abs1"]=2;
    mp["abs2"]=3;
    mp["abs3"]=4;
    mp["abs4"]=5;
    mp["abs5"]=6;
    unordered_map<string,int>::iterator it=mp.begin();
    while(it!=mp.end())
    {
        cout<<"key: "<<it->first<<"value : "<<it->second<<endl;
          it++;
    }
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    vector<int>::iterator it1=v.begin();
    while(it1!=v.end())
    {
        cout<<*it1<<endl;
        it1++;
    }
    unordered_map<string,int>::iterator it2=mp.find("abc");
   
}