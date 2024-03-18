/* Nth fibonacci number using Dynamic Programming (Memoization) */

#include <iostream>

using namespace std;

long long nth_fibonacci(int n, long long *dp)
{
    if (dp[n] != -1)
        return dp[n];
    if (n == 0 || n == 1)
        return n;
    dp[n] = nth_fibonacci(n - 1, dp) + nth_fibonacci(n - 2, dp);
    return dp[n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long *dp = new long long[n + 1];
        for (int i = 0; i <= n; ++i)
            dp[i] = -1;
        cout << nth_fibonacci(n - 1, dp) << endl;
    }
    return 0;
}