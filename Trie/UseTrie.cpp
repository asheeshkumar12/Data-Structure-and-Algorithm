#include<iostream>
#include<string>
#include "TrieClass.h"
using namespace std;
int main()
{
    Trie obj;
    obj.insertW("asheesh");
    obj.insertW("anjali");
    obj.insertW("anuj");
    obj.insertW("ajeet");
    // obj.removeWord("ajeet");
    cout<<obj.search("ajeet")<<endl;

}