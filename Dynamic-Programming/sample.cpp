#include <iostream>

using namespace std;

void printSums(int *arr, int start, int end, int sum = 0) {
    if (start > end) {
        cout << sum << " ";
    } else {
        printSums(arr, start + 1, end, sum);
        printSums(arr, start + 1, end, sum + arr[start]);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    printSums(arr, 0, n - 1, 0);
    return 0;
}