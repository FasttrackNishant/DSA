#include <bits/stdc++.h>
using namespace std;

int factorial(int N)
{
    if (N == 0)
        return 1;

    int fact = N * factorial(N - 1);
    cout << fact << " ";
}
vector<long long> factorialNumbers(long long N)
{
    // Write Your Code here
    vector<long long> ans;
    long long temp = 1;
    for (int i = 1; i <= N / temp; i++)
    {
        if (temp <= N)
        {
            temp *= i;
            ans.emplace_back(temp);
        }
    }
    return ans;
}

int main()
{
    factorial(5);
    return 0;
}