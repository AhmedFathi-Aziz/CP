#include <bits/stdc++.h>
using namespace std;
#define ll long long

class trie {
private:
    static const int max_chars = 26;
    trie* child[max_chars];
    bool is_leaf {};

public:
    trie() {
        memset(child, 0, sizeof(child));
    }

    void insert(string word, int index = 0) {
        if (index == (int) word.size())
            is_leaf = true;
        else {
            int current = word[index] - 'a';
            if (child[current] == 0)
                child[current] = new trie();
            child[current]->insert(word, index + 1);
        }
    }

    bool word_exist(string word, int index = 0) {
        if (index == (int) word.size())
            return is_leaf;
        int current = word[index] - 'a';
        if (child[current] == 0)
            return false;
        return child[current]->word_exist(word, index + 1);
    }

    bool prefix_exist(string word, int index = 0) {
        if (index == (int) word.size())
            return true;
        int current = word[index] - 'a';
        if (child[current] == 0)
            return false;
        return child[current]->prefix_exist(word, index + 1);
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}
