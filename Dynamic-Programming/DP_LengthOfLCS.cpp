/* Length of the longest common subsequence */

#include <iostream>

using namespace std;

int lengthOfLCS(string s1, string s2)
{
    int m = s1.size(), n = s2.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; ++i)
        dp[i][0] = 0;
    for (int i = 0; i <= m; ++i)
        dp[0][i] = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (s1[j - 1] == s2[i - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][m];
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << lengthOfLCS(s1, s2) << endl;
    return 0;
}