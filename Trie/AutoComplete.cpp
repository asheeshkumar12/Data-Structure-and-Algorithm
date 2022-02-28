class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    TrieNode *root;

   public:
    int count;

    Trie() {
        this->count = 0;
        root = new TrieNode('\0');
    }
 
    
    bool insertWord(TrieNode *root, string word) {
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
        }

        // Recursive call
        return insertWord(child, word.substr(1));
    }

    void insertWord(string word) {
        if (insertWord(root, word)) {
            this->count++;
        }
    }
 void 
    printWord(TrieNode* root,string word1){
     if(root->isTerminal)
         cout<<word1<<endl;
     for(int i=0;i<26;i++)
     {
         if(root->children[i]!=NULL){
             printWord(root->children[i],word1+root->children[i]->data);
         }
     }
 }
    void  search(TrieNode* root, string word,string word1){
        if(word.size()==0)
        {
            printWord(root,word1);
            return;
        }
        int index=word[0]-'a';
        if(root->children[index]!=NULL)
        {
            return search(root->children[index],word.substr(1),word1);
            
        }
        return;
    }

    void autoComplete(vector<string> input, string pattern) {
        for(int i=0;i<input.size();i++)
        {
            insertWord(input[i]);
        }
       search(root,pattern,pattern);
        // Write your code here
    }
};
