#include <bits/stdc++.h>
using namespace std;
#include <iostream>

int operation(long long  x , vector<char> s , int steps, int n){
  for (int i = 0; i < n; i++) {
        if (x == 0) break;
        steps++;
        if (s[i] == 'A') {
            x--;
        } else {
            x /= 2;
        }
    }
    return x;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
      int n , q;
      cin >> n >> q;
      vector<char> ch(n);
        for (int i = 0; i < n; i++) cin >> ch[i];

      while(n--){
            long long x;
            cin >> x;
            long long current = x;
            int steps = 0;

            while (current > 0 && current >= (long long)n) {
                current = operation(current, ch, steps, n);
            }

            int idx = 0;
            while (current > 0) {
                steps++;
                if (ch[idx] == 'A') current--;
                else current /= 2;
                idx = (idx + 1) % n;
            }

            cout << steps << "\n";
      }
    }
    return 0;
}
