#include <bits/stdc++.h>
using namespace std;

int solve(string a, string b, int i, int j)
{
    // base case jab string khatm ho gayi

    if (i == a.length())
        return 0;

    if (j == b.length())
        return 0;
 
    int ans = 0;
    // match
    if (a[i] == b[j])
    {
        ans = 1 + solve(a, b, i + 1, j + 1);
    }
    else
    {
        ans = max(solve(a, b, i, j + 1), solve(a, b, i + 1, j));
    }
    return ans;
}

int main()
{
    string x = "abcde";
    string y = "ace";
    int i, j = 0;
    int ans = solve(x, y, i, j);

    cout << "LCS is " << ans << endl;
    cout << endl;
    return 0;
}