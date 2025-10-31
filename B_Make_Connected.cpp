#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <set>
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool check(vector<string> g){
  int n = g.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j + 2 < n; j++)
    {
      if (g[i][j] == '#' && g[i][j + 1] == '#' && g[i][j + 2] == '#')
        return  true;
      if (g[j][i] == '#' && g[j + 1][i] == '#' && g[j + 2][i] == '#')
        return true;
    }
  }
  return false;
}

bool single_connected(vector<pair<int,int>> blacks , vector<string> g){
  int n = g.size();
  queue<pair<int, int>> q;
  q.push(blacks[0]);
  set<pair<int, int>> vis;
  vis.insert(blacks[0]);

  while (!q.empty())
  {
    auto [x, y] = q.front();
    q.pop();
    for (int k = 0; k < 4; k++)
    {
      int nx = x + dx[k];
      int ny = y + dy[k];
      if (nx < 0 || ny < 0 || nx >= n || ny >= n)
        continue;
      if (g[nx][ny] == '#' && !vis.count({nx, ny}))
      {
        vis.insert({nx, ny});
        q.push({nx, ny});
      }
    }
        }

      return vis.size() == blacks.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> g(n);
        for (int i = 0; i < n; i++) cin >> g[i];

        // 1) Check for existing 3 in a row/column
        bool bad = check(g);
        if (bad) {
            cout << "NO\n";
            continue;
        }

        // 2) Collect all black cells
        vector<pair<int,int>> blacks;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (g[i][j] == '#')
                    blacks.push_back({i, j});

        // If no black cell -> YES (we can paint one)
        if (blacks.empty()) {
            cout << "YES\n";
            continue;
        }

        // 3) Check connectivity (BFS/DFS)
        if (single_connected(blacks , g))
            cout << "YES\n";  // Single connected component
        else{
          
          // you have to code here 
          
        }
    


      }
      return 0;
}
