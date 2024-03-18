/* Number of arrangements with repetion for a given array {1, 3, 5} to sum up to a given number 'N' using DP */

#include <iostream>

using namespace std;

long long noOfArrangements(int n, long long *dp)
{
    if (dp[n] != -1)
        return dp[n];
    if (n < 0)
        return 0;
    else if (n == 0)
        return 1;
    dp[n] = noOfArrangements(n - 1, dp) + noOfArrangements(n - 3, dp) + noOfArrangements(n - 5, dp);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    long long *dp = new long long[n + 1];
    for (int i = 0; i <= n; ++i)
        dp[i] = -1;
    cout << noOfArrangements(n, dp) << endl;
    return 0;
}