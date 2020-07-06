#include <bits/stdc++.h>
using namespace std;

vector<string> get_array_from_file(string src)
{
    fstream file(src);

    string word;
    vector<string> words;

    if (!file)
    {
        cerr << "\nCan't Open File. Some Error Occurred.!\n";
        return words;
    }

    while (!file.eof())
    {
        file >> word;
        if (word.size())
            words.push_back(word);
        word = "\0";
    }

    return words;
}