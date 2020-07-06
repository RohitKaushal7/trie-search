#include <bits/stdc++.h>
#include "trie.cpp"
#include "utils.cpp"
using namespace std;

int main()
{
    Trie T;

    for (string word : get_array_from_file("../data/words.txt"))
    {
        // cout << word << "\n";
        T.insert(word);
    }

    cout << T.search_exact("google") << "\n";
    cout << T.search_exact("Abra") << "\n"; //

    for (string w : T.search_pre("go"))
    {
        cout << w << "\n";
    }

    return 0;
}
