#include <bits/stdc++.h>
using namespace std;

int coinChange(int total, vector<int> &coins)
{
    int dp[total + 1];
    dp[0] = 0;
    for (int i = 1; i <= total; i++)
        dp[i] = INT_MAX - 1;
    for (int i = 0; i < coins.size(); i++)
    {
        for (int j = 1; j <= total; j++)
        {
            if (j >= coins[i])
                dp[j] = min(1 + dp[j - coins[i]], dp[j]);
        }
    }
    return dp[total];
}

int main()
{
    vector<int> coins = {1, 2, 5};
    int amount = 13;
    cout << coinChange(amount, coins) << endl;
    return 0;
}