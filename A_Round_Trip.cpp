#include <bits/stdc++.h>
using namespace std;
#include <iostream>


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long R, X, D, n;
        cin >> R >> X >> D >> n;
        string s;
        cin >> s;
        int ans = 0;
        for (char c : s) {
            if (c == '1') { 
                // div1 → always rated
                ans++;
                if (R >= X) {

                    if (R - D < X)
                        R = max(0LL, X - 1); 
                    else
                        R -= D; 
                } 
            } 
            else {
              // div 2 
                if (R < X) {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
