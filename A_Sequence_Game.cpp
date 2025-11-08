#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
      int n , maxVal = INT_MIN , minVal = INT_MAX , x;
      cin >> n;
      while(n--){
        int t;
        cin >> t;
        maxVal = max(t, maxVal);
        minVal = min(t, minVal);
      }

      cin >> x;

      if(maxVal < x)  cout << "NO" << endl;
      else if(minVal > x) cout << "NO" << endl;
      else
        cout << "YES" << endl;
    }
    return 0;
}