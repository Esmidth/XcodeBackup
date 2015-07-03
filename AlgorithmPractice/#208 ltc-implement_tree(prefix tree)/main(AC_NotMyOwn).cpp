//
//  main.cpp
//  #208 ltc-implement_tree(prefix tree)
//
//  Created by Steven Chang on 7/3/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>


using namespace std;

class TrieNode {
public:
    TrieNode() {
        for (int i = 0; i < 26; i++) {
            next[i] = NULL;
        }
        isString = false;
    }

    TrieNode *next[26];
    bool isString;
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
        for (int i = 0; i < word.size(); ++i) {
            if (p->next[word[i] - 'a'] == NULL)
                p->next[word[i] - 'a'] = new TrieNode();
            p = p->next[word[i] - 'a'];
        }
        p->isString = true;
    }

    bool serach(string word) {
        TrieNode *p = root;
        for (int i = 0; i < word.size(); ++i) {
            if (p == NULL)
                return false;
            p = p->next[word[i] - 'a'];
        }
        if (p == NULL || p->isString == false)
            return false;
        return true;
    }


    bool startsWith(string prefix) {
        TrieNode*p = root;
        for (int i = 0; i <= prefix.size(); ++i) {
            if(p== NULL)
                return false;
            p = p->next[prefix[i]-'a'];
        }
        return true;
    }
};

int main(int argc, const char *argv[]) {

    return 0;
}