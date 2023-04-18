#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
    for (auto it2 : v)
    {
        cout << it2 << " ";
    }
    cout << endl;
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{

    if (p1.second < p2.second)
    {
        return true;
    }
    if (p1.second > p2.second)
        return false;

    if (p1.first > p2.first)
        return true;
    else
        return false;
}

void algorithms()
{
    vector<int> a = {3, 5, 9, 4, 0};
    printVec(a);
    sort(a.begin(), a.end());
    // custom sorting
    sort(a + 2, a + 4);

    // descending sorting
    sort(a, a + n, greater<int>);
    printVec(a);

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    sort(a, a + n, comp);

    // comp is the self written comparitor

    // next permutations
//agar sare permutations print karne hain toh sorted karna hoga nahi to sirf aage ke print hoge
    string s = "123";
    do
    {
        cout << s << endl;

    } while (next_permutation(s.begin(), s.end()));

int maxi = *max_element(a,a+n);

}

int main()
{
    int a;
    algorithms();
    cout << endl;
    return 0;
}