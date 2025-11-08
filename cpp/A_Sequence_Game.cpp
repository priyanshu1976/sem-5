#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
      int n , temp = INT_MIN , x;
      cin >> n;
      while(n--){
        int t;
        cin >> t;
        temp = max(t, temp);
      }

      cin >> x;

      if(temp >= x)  cout << "NO" << endl;
      else  cout << "YES" << endl;
    }
    return 0;
}