#include <bits/stdc++.h>
using namespace std;
// =

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    int childCount;
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        childCount = 0;
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {

        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'a';
        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->childCount++;
            root->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    void lcp(string str, string &ans)
    {

        for (int i = 0; i < str.length(); i++)
        {
            char ch = str[i];

            if (root->childCount == 1)
            {
                ans.push_back(ch);
                // age badh jao
                int index = ch - 'a';
                root = root->children[index];
            }
            else
            {
                break;
            }
            if (root->isTerminal)
            {
                break;
            }
        }
    }
};

string lcf(vector<string> &arr, int n)
{
    string ans = "";

    // first string traverse
    for (int i = 0; i < arr[0].length(); i++)
    {
        char ch = arr[0][i];

        bool match = true;

        // for comparing ch with rest of the strings
        for (int j = 0; j < n; j++)
        {
            // not matching
            if (arr[j].size() < i || ch != arr[j][i])
            {
                match = false;
                break;
            }
        }
        if (match == false)
        {
            break;
        }
        else
        {
            ans.push_back(ch);
        }
    }
    return ans;
}

string lcf(vector<string> &arr, int n)
{
    Trie *t = new Trie('\0');

    // insert kardo all string into trie

    for (int i = 0; i < n; i++)
    {
        t->insertWord(arr[i]);
    }

    string first = arr[0];
    string ans = "";

    t->lcp(first, ans);

    return ans;
}

int main()
{
    int a;
    cout << endl;
    return 0;
}