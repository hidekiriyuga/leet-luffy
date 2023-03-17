struct Node{
    Node *links[26];
    bool flag=false;
    bool contain(char ch){
        return links[ch-'a']!=NULL;
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    Node *get(char ch){
        return links[ch-'a'];
    }
    void getend(){
        flag=true;
    }
    bool isend(){
        return flag;
    }
};
class Trie {
public:
    Node* root;
    Trie() {
         root=new Node();
    }
    
    void insert(string word) {
        Node * node=root;
         for(int i=0;i<word.length();i++){
             if(!node->contain(word[i]))
                 node->put(word[i],new Node());
             node=node->get(word[i]);
         }
        node->getend(); 
    }
    
    bool search(string word) {
        Node * node=root;
        for(int i=0;i<word.length();i++){
            if(!node->contain(word[i])){
                return false;
            }
            node=node->get(word[i]);
        }
        return node->isend();
    }
    
    bool startsWith(string prefix) {
        Node *node=root;
        for(int i=0;i<prefix.length();i++){
            if(!node->contain(prefix[i])){
                return false;
            }
            node=node->get(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */