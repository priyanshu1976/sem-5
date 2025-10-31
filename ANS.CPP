#include <bits/stdc++.h>
using namespace std;

int largestSubstring(int n, int k, string s) {
    int ans = 0;
    for(int len = 1; len <= n; len++) {
        bool ok = true;
        for(int i = 0; i + len <= n; i++) {
            unordered_set<char> st;
            for(int j = i; j < i + len; j++) st.insert(s[j]);
            if((int)st.size() > k) { ok = false; break; }
        }
        if(ok) ans = len;
        else break;
    }
    return ans;
}

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    cout << largestSubstring(n, k, s);
    return 0;
}