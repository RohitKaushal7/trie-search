#include <bits/stdc++.h>
#include "trie.cpp"
#include "utils.cpp"
using namespace std;

int main()
{
    hello();

    for (string word : get_array_from_file("../data/words.txt"))
    {
        cout << word << "\n";
    }

    return 0;
}
