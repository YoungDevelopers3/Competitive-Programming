class TrieNode {              // <-- separate class, defined first
public:
    TrieNode* children[26];
    bool isTerminal;

    TrieNode() {
        for (int i = 0; i < 26; i++){
           children[i] = nullptr;
        } 
            
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;
    Trie() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* current=root;
        for(char ch:word){
            int index=ch-'a';
            if(current->children[index]==nullptr){
                current->children[index]=new TrieNode();
            }
            current=current->children[index];
        }
        current->isTerminal=true;
    }
    
    bool search(string word) {
        TrieNode* current = root;
    for (char ch : word) {
        int index = ch - 'a';
        if (current->children[index] == nullptr)
            return false;   // path doesn't exist -> word not present
        current = current->children[index];
    }
    return current->isTerminal; 
    }
    
    bool startsWith(string prefix) {
       TrieNode* current = root;
    for (char ch : prefix) {
        int index = ch - 'a';
        if (current->children[index] == nullptr)
            return false;   // path doesn't exist
        current = current->children[index];
    }
    return true;   //
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */