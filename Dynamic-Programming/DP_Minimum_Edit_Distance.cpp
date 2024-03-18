#include <iostream>

using namespace std;

int minDistance(string word1, string word2)
{
    int m = word1.size(), n = word2.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; ++i)
        dp[i][0] = i;
    for (int i = 0; i <= m; ++i)
        dp[0][i] = i;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (word1[j - 1] == word2[i - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i - 1][j])) + 1;
        }
    }
    return dp[n][m];
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << minDistance(s1, s2) << endl;
    return 0;
}