#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
#include <iostream>

vector<vector<int>> g;
vector<int> depth;
long long fact[200005];

void dfs(int u, int p, int d) {
    depth[u] = d;
    for (auto v : g[u]) {
        if (v != p)
            dfs(v, u, d + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Precompute factorials
    fact[0] = 1;
    for (int i = 1; i < 200005; i++)
        fact[i] = (fact[i - 1] * i) % MOD;

    // ✅ Inbuilt testcases
    string input = R"(
3
2 1
1 2
5 1
1 2
1 3
1 4
1 5
5 3
1 2
1 3
1 4
1 5
)";
    stringstream ss(input);

    int T;
    ss >> T;

    while (T--) {
        int n, c;
        ss >> n >> c;

        g.assign(n + 1, {});
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            ss >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        depth.assign(n + 1, 0);
        dfs(1, -1, 0);

        int maxDepth = *max_element(depth.begin() + 1, depth.end());
        int rootDegree = (int)g[1].size();

        int minCost = max(maxDepth, rootDegree);

        if (c < minCost)
            cout << 0 << "\n";
        else
            cout << fact[n - 1] % MOD << "\n";
    }

    return 0;
}
