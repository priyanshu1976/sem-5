#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

    int t;
    if(!(cin >> t)) return 0;
    while (t--) {
        int n; 
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        bool found = false;
        for (int i = 0; i < a.size()-1; i++) {
          for (int j = i + 1; j < a.size(); j++){
            if((a[j] % a[i]) % 2 == 0){
              found = true;
              cout << a[i] << " " << a[j] << endl;
              break;
            }
          }
          if(found) break;
        }

          // vector<long long> evens;
          // vector<long long> odds;
          // for (auto v : a) {
          //     if ((v & 1LL) == 0) evens.push_back(v);
          //     else odds.push_back(v);
          // }

          // if (evens.size() >= 2) {
          //     cout << evens[0] << " " << evens[1] << "\n";
          //     continue;
          // }

          // int m = (int)odds.size();

          // // check for x and 2x
          // for (int i = 0; i + 1 < m && !found; ++i) {
          //     long long x = odds[i], y = odds[i+1];
          //     if (y % x == 0 || y < 2 * x) {
          //         cout << x << " " << y << "\n";
          //         found = true;
          //     }
          // }
          // if (found) continue;

          // // for parity
          // for (int i = 0; i < n; i++) {
          //   int low = i + 1, high = n - 1;
          //   while (low <= high and !found ) {
          //     int mid = (low + high) / 2;
          //     long long q = a[mid] / a[i];
          //     if (q % 2 == 1) { // odd quotient
          //       cout << a[i] << " " << a[mid] << endl;
          //       found = true;
          //     }
          //     if (q % 2 == 0) low = mid + 1;
          //     else high = mid - 1;
          //   }
          // }

          if (found) continue;
          // else not found
          cout << -1 << "\n";
    }
    return 0;
}