#include <bits/stdc++.h>
#include "trie.cpp"
#include "utils.cpp"
using namespace std;

void test();

int main()
{
    // test();

    Trie T;

    for (string word : get_array_from_file("../data/movies.txt"))
    {
        // cout << word << "\n";
        T.insert(word);
    }

    for (string w : T.search_pre("The Big"))
    {
        cout << w << "\n";
    }

    // T.draw(NULL);

    return 0;
}

void test()
{
}
