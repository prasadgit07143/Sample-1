#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    int n = nums.size(), maxi = 1;
    vector<int> subs(n, 1);
    for (int i = 1; i < n; ++i) {
        int j = 0;
        while (i != j) {
            if (nums[j] < nums[i])
                subs[i] = max(subs[i], subs[j] + 1);
            maxi = max(maxi, subs[i]);
            j++;
        }
    }
    return maxi;
}

int main() {
    vector<int> v = {1, 2, -1, 2, 0, 1, 10, 100, 2, -10, 6};
    cout << lengthOfLIS(v) << endl;
    return 0;
}