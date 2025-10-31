#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int s;
        cin >> s;
        string a, b;
        cin >> a >> b;
        unordered_map<char, int> freq;
        for (char ch : a) {
            freq[ch]++;
        }
        for (char ch : b) {
            freq[ch]--;
        }
        bool same = true;
        for (auto &entry : freq) {
            if (entry.second != 0) {
                same = false;
                break;
            }
        }

        if (same)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
