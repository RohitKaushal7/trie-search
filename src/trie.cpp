#include <bits/stdc++.h>

using namespace std;

void hello()
{
    cout << "Hello World\n";
}

class Trie
{
private:
    class Trie_Node
    {
        map<int, Trie_Node> children;
        bool isEndOfWord;

    public:
        Trie_Node()
        {
        }
    };

    int total_nodes;
    int total_words;

public:
    Trie()
    {
    }
};
