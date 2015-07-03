#include "iostream"
#include "vector"
#include "string"

using namespace std;

class TrieNode {
public:
    bool end;
    TrieNode *children[26];

    TrieNode() {
        for (int i = 0; i < 26; i++)
            children[i] = NULL;
        end = false;
    }
};

class Trie {
private:
    TrieNode *root;
public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode *p = root;
        for (int i = 0; i < word.length(); i++) {
            if (p->children[word[i] - 'a'] == NULL)
                p->children[word[i] - 'a'] = new TrieNode();
            p = p->children[word[i] - 'a'];
        }
        p->end = true;
    }

    bool search(string word) {
        TrieNode* p = root;
        for (int i = 0; i < word.size(); ++i) {
            if(p== NULL)
                return false;
            p = p->children[word[i]-'a'];
        }
        if(p == NULL || p->end == false)
            return false;
        return true;
    }

    bool startsWith(string prefix) {

    }
};

int main() {

}
