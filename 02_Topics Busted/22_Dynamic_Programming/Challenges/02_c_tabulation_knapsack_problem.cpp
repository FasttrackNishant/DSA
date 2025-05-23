#include <bits/stdc++.h>
using namespace std;

int solveTab(vector<int> &weight, vector<int> &value, int n, int capacity)
{
    // step 1 ;
    vector<vector<int>> dp(n, vector<int>(capacity + 1, 0));

    // step 2 analyze base case

    for (int w = weight[0]; w <= capacity; w++)
    {

        if (weight[0] <= capacity)
        {
            dp[0][w] = value[0];
        }
        else
            dp[0][w] = 0;
    }

    for (int index = 1; index < n; index++)
    {
        for (int w = 0; w <= capacity; w++)
        {
            int include = 0;

            if (weight[index] <= w)
            {

                include = value[index] + dp[ index - 1] [w - weight[index]]);
            }

            int exclude = 0 + dp[index - 1][w];

            dp[index][w] = max(exclude, include);
        }
    }
    return dp[n - 1][capacity];
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{

    return solveTab(weight, value, n, maxWeight);
}

int main()
{

    return 0;
}