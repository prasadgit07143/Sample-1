#include <iostream>
#include <algorithm>

using namespace std;

int findMaxProfit(int *p, int *w, int &n, int &m)
{
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; ++i)
        dp[i][0] = 0;
    for (int i = 0; i <= m; ++i)
        dp[0][i] = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (j < w[i])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], p[i] + dp[i - 1][j - w[i]]);
        }
    }
    return dp[n][m];
}

int main()
{
    int n, m;
    cin >> n >> m;
    int w[n + 1], p[n + 1];
    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i] >> w[i];
    }
    cout << findMaxProfit(p, w, n, m) << endl;
    return 0;
}