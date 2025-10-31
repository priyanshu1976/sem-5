#include <bits/stdc++.h>
using namespace std;
#include <iostream>

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << "\n";
            continue;
        }

        if (a < b) {
            cout << -1 << "\n";
            continue; // ✅ prevents further execution when impossible
        }

        long long diff = a ^ b;

        if (diff <= a) {
            cout << 1 << "\n" << diff << "\n";
        } else {
            vector<long long> ans;
            int cnt = 0;

            while (diff != 0 && cnt < 100) { // ✅ prevent infinite loop
                long long x1 = 1;
                int ch = diff & 1; // ✅ least significant bit of diff

                // ✅ shift x1 until it exceeds a, but stop at next power of two
                while (x1 <= a) {
                    x1 <<= 1;
                }

                // ✅ mask x1 with ch properly
                if (ch == 0) x1 = 0;
                else x1 >>= 1; // use last valid x1 that was ≤ a

                if (x1 == 0) break; // avoid useless XOR with 0

                diff = diff ^ x1;
                a = a ^ x1; // ✅ don't redeclare 'a'
                ans.push_back(x1);
                cnt++;
            }

            if (a == b) {
                cout << ans.size() << "\n";
                for (long long i : ans) cout << i << " ";
                cout << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }
}
