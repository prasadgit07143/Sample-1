/* Nth fibonacci number using iteration (Tabulation) */

#include <iostream>

using namespace std;

int main()
{
    int t;
    long long fib[1005];
    cin >> t;
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= 1000; ++i)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << fib[n] << endl;
    }
    return 0;
}