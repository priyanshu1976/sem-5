#include <bits/stdc++.h>
using namespace std;
#include <iostream>


long long mygcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<long long> factorize(long long n) {
    vector<long long> primes;
    if (n <= 1) return primes;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primes.push_back(i);
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        primes.push_back(n);
    return primes;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long long g = arr[0];
        for (int i = 1; i < n; i++)
            g = mygcd(g, arr[i]); 

        if (g == 1) {
            cout << 2 << "\n";
            continue;
        }
        vector<long long> primes = factorize(g);
        long long x = 2;
        while (true) {
            bool ok = true;
            for (auto p : primes) {
                if (x % p == 0) {
                  ok = false;
                  break;
                }
            }
            if (ok) {
                cout << x << "\n";
              break;
            }
            x++;
            if (x > (long long)1e18) {
                 cout << -1 << "\n";
                break;
           }
      }
    }

    return 0;
}
