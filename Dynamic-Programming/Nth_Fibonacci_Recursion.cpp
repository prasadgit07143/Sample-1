/* Nth fibonacci number using recursion */

#include <iostream>

using namespace std;

int nth_fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return nth_fibonacci(n - 1) + nth_fibonacci(n - 2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << nth_fibonacci(n - 1) << endl;
    }
    return 0;
}