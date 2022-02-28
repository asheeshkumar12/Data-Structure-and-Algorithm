class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;
    int childCount;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
        childCount = 0;
    }
};
#include<string>

class Trie {
    TrieNode *root;

   public:
    int count;

    Trie() {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool add(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            if (!root->isTerminal) {
                root->isTerminal = true;
                return true;
            } else {
                return false;
            }
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
            root->childCount++;
        }

        // Recursive call
        return add(child, word.substr(1));
    }

    void add(string word) {
        if (add(root, word)) {
            this->count++;
        }
    }

    /*..................... Palindrome Pair................... */
    
    // searching string 
      bool search(TrieNode* root,string word)
    {
        if(word.size()==0)
        {
            if(root->isTerminal==true)
            {
                return true;
            }
            else
                return false;
           
        }
        int ind=word[0]-'a';
        if(root->children[ind]!=NULL )
        {
                  return search(root->children[ind],word.substr(1));   
        }
        return false;
    }
    
    string rev(string s)
    {
        string out="";
        for(int i=s.size()-1;i>=0;i--)
        {
            out+=s[i];
        }
        return out;
     }

    bool isPalindromePair(vector<string> words) {
        // Write your code here

       
        for(int i=0;i<words.size();i++)
        {
            
            this->add(words[i]);
        }
        bool p;
        for(int i=0;i<words.size();i++)
        {
            
            string x=rev(words[i]);
            p=search(root,x) || search(root,x.substr(1));
            if(p)
            {
               
                break;
                
            }
        }
        return p;
    }
   
};
