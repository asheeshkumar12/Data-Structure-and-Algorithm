#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
class TrieNode
  {
      public:
      char data;
      TrieNode **children;
      bool isTerminal;

      TrieNode(char data)
      {
          this->data=data;
          children=new TrieNode *[26];
          for(int i=0;i<26;i++)
          {
              children[i]=nullptr;
          }
          isTerminal=false;
      }
  };
// #include<bits/stdc++.h>
class Trie
{
    TrieNode *root;

    public:
    Trie()
    {
        root=new TrieNode('\0');
    }
    // insert a new word in dictionary

    void insertW(TrieNode *root, string word)
    {
        //base case;
        if(word.size()==0)
        {
            root->isTerminal=true;
            return;
        }

        // small calculation
        int index=word[0]-'a'; // find index of character
        TrieNode *child; 
        if(root->children[index]!=nullptr) 
        {
            child=root->children[index];
        }
        else{
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        // recursive call 
        insertW(child, word.substr(1));
    }
    void insertW(string word)
    {
        insertW(root,word);
    }
    bool search(string word)
    {
        return search(root,word);
    }
    bool search(TrieNode* root, string word)
    {
        if(word.size()==0)
        {
            if(root->isTerminal==true)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        int index=word[0]-'a';
       
        if(root->children[index]!=nullptr)
        {
            return search(root->children[index],word.substr(1));
        }
        // recursion call
    
        return false;
    }

    // remove a node

    void removeWord(string word)
    {
        removeWord(root,word);
    }
    void removeWord(TrieNode *root,string word)
    {
        // base case
        if(word.size()==0)
        {
            root->isTerminal=false;
            return;
        }
        //small calculation 
        TrieNode *child;
        int index=word[0]-'a';
        if(root->children[index]!=nullptr)
        {
            child=root->children[index];
        }
        //recursion 

        removeWord(child,word.substr(1));
      
      // remove if its useless node

      if(child->isTerminal==false)
      {
          for(int i=0;i<26;i++)
          {
              if(child->children[i]!=NULL)
              {
                  return;
              }
          }
          
          delete child;
          root->children[index]=NULL;
      }


    }
};