#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <set>


int main() {
   
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        multiset<long long> ms(a.begin(), a.end());
        long long S = 0, level = 0, ans = 0;
        vector<long long> order;
        while (!ms.empty()) {
            long long smallest = *ms.begin();
            long long nextLevel = (level + 1) * x;

            if (S + smallest < nextLevel) {
                S += smallest;
                order.push_back(smallest);
                ms.erase(ms.begin());
            } else {
                auto it = prev(ms.end());
                long long p = *it;
                S += p;
                ms.erase(it);
                order.push_back(p);

                long long newLevel = S / x;
                if (newLevel > level) ans += p;
                level = newLevel;
            }
        }

        cout << ans << "\n";
        for (auto x : order) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
