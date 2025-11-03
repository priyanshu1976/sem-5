#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <set>


int main() {
   ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        vector<int> dp(mx + 1, 0);

        int best1 = 0, best2 = 0; // top1 and top2 dp values
        int best1_val = -1, best2_val = -1; // which value achieved them

        for (int x : a) {
            int prev = (x > 0 ? dp[x-1] : -1);

            int base;
            if (prev != best1) base = best1;
            else base = best2;

            int cur = base + 1;
            if (cur > dp[x]) {
                dp[x] = cur;
                if (dp[x] > best1) {
                    best2 = best1; best2_val = best1_val;
                    best1 = dp[x]; best1_val = x;
                } else if (dp[x] > best2) {
                    best2 = dp[x]; best2_val = x;
                }
            }
        }

        int longestGood = best1;
        cout << n - longestGood << "\n";
    }
    return 0;
}
