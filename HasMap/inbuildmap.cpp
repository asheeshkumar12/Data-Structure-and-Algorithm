#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> ourmap;
    pair<string,int> p("abc",1);
    ourmap.insert(p);
    cout<<ourmap["abc"]<<endl;
    cout<<ourmap.at("abc")<<endl;
    // cout<<ourmap.at("ghi")<<endl;    given error
    // cout<<ourmap["ghi"]<<endl;    // if not find key then create ind return default value 0

    // access
    if(ourmap.count("ghi") >0)
    {
        cout<<"ghi is present   "<<endl;
    }
    ourmap["def"]=2;
  // erase key and coresponding value
  cout<<ourmap["def"]<<endl;
  ourmap["ghi"]=3;
  cout<<ourmap.at("ghi")<<endl;
  ourmap.erase("ghi");
  if(ourmap.count("ghi")>0)
  {
      cout<<"ghi is present"<<endl;
  }
  int prs;
  cout<<"size    "<<ourmap.size()<<endl;
}
