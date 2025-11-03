#include <bits/stdc++.h>
using namespace std;
#include <iostream>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        bool fg1 = false, fg2 = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) fg1 = true;
            else fg2 = true;
        }
        if (fg1 && fg2) {
            sort(a.begin(), a.end());
        }

        for (int x : a) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
