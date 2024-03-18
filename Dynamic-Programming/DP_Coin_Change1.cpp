#include <bits/stdc++.h>

using namespace std;

int findMin(int a, int *coins, int n)
{
    int arr[n + 1], mini = INT_MAX;
    arr[0] = 0;
    for (int j = 1; j <= n; ++j)
    {
        for (int i = 1; i <= n; ++i)
        {
            if (i > a)
                break;
            mini = min(0, arr[a - i]);
        }
        arr[j] = mini;
    }
}

int main()
{
    int a, n;
    cin >> a >> n;
    int coins[n + 1];
    for (int i = 1; i < n; ++i)
        cin >> coins[i];
    cout << findMin(a, coins, n) << endl;
    return 0;
}